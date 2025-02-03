#include "mainloja.h"
#include "ui_mainloja.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QCoreApplication>

MainLoja::MainLoja(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainLoja)
{
    ui->setupUi(this);

    //janelas secundarias
    inclLivro = new IncluirLivro(this);
    inclCD = new IncluirCD(this);
    inclDVD = new IncluirDVD(this);

    //statusbar
    total_itens = new QLabel(this);
    total_itens->setText("0"); // Início com zero itens
    QLabel *staticLabel = new QLabel("Total de itens: ", this); // Texto estático
    ui->statusbar->insertWidget(0, staticLabel);
    ui->statusbar->insertWidget(1, total_itens);

    // Conectar os sinais das janelas secundárias aos slots correspondentes
    connect(inclLivro, &IncluirLivro::signIncluirLivro, this, &MainLoja::slotIncluirLivro);
    connect(inclCD, &IncluirCD::signIncluirCD, this, &MainLoja::slotIncluirCD);
    connect(inclDVD, &IncluirDVD::signIncluirDVD, this, &MainLoja::slotIncluirDVD);

    // Alterar a cor de fundo dos QLabel acima das tabelas
    ui->labelLivro->setStyleSheet("background-color: lightgray;");
    ui->labelCD->setStyleSheet("background-color: lightgray;");
    ui->labelDVD->setStyleSheet("background-color: lightgray;");

    // Alterar a cor de fundo dos cabeçalhos das tabelas
    ui->tableWidgeTLIVROS->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: lightgray; }");
    ui->tableWidgetCDS->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: lightgray; }");
    ui->tableWidgetDVDS->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: lightgray; }");

    // Configurar o redimensionamento das colunas das tabelas
    ui->tableWidgeTLIVROS->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidgeTLIVROS->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    ui->tableWidgeTLIVROS->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);

    ui->tableWidgetCDS->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidgetCDS->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    ui->tableWidgetCDS->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);

    ui->tableWidgetDVDS->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidgetDVDS->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents);
    ui->tableWidgetDVDS->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);

    // Exibir o conteúdo inicial das tabelas (vazio) e o total inicial de itens (0)
    ui->tableWidgeTLIVROS->setRowCount(0);
    ui->tableWidgetCDS->setRowCount(0);
    ui->tableWidgetDVDS->setRowCount(0);
    total_itens->setText("0");
}

MainLoja::~MainLoja()
{
    delete ui;
}


void MainLoja::on_tableWidgeTLIVROS_cellDoubleClicked(int row, int /*column*/)
{
    // Remover o item do vetor de livros
    if (loja.excluirLivro(row)) { // Verifica se a exclusão foi bem-sucedida
        ui->tableWidgeTLIVROS->removeRow(row); // Remove a linha correspondente na tabela

        // Atualizar a interface (inclui o total de itens)
        atualizarInterface();

    }
}

void MainLoja::on_tableWidgetCDS_cellDoubleClicked(int row, int /*column*/)
{
    // Remover o item do vetor de CDs
    if (loja.excluirCD(row)) { // Verifica se a exclusão foi bem-sucedida
        ui->tableWidgetCDS->removeRow(row); // Remove a linha correspondente na tabela

        // Atualizar a interface (inclui o total de itens)
        atualizarInterface();

    }
}

void MainLoja::on_tableWidgetDVDS_cellDoubleClicked(int row, int /*column*/)
{
    // Remover o item do vetor de DVDs
    if (loja.excluirDVD(row)) { // Verifica se a exclusão foi bem-sucedida
        ui->tableWidgetDVDS->removeRow(row); // Remove a linha correspondente na tabela

        // Atualizar a interface (inclui o total de itens)
        atualizarInterface();

    }
}

//Funcao Ler
void MainLoja::on_actionLer_triggered()
{
    // Abrir QFileDialog para selecionar o arquivo
    QString fileName = QFileDialog::getOpenFileName(this, tr("Ler estoque"), "", tr("Estoques (*.txt)"));

    // Verificar se o usuário pressionou "Cancelar" ou não selecionou arquivo
    if (fileName.isEmpty()) {
        return; // Cancelou a ação, nada a fazer
    }

    // Converter QString para string C++ padrão
    std::string arquivo = fileName.toStdString();

    // Tentar ler o arquivo com o método ler da classe Loja
    bool sucesso = loja.ler(arquivo);

    // Verificar se houve erro na leitura
    if (!sucesso) {
        QMessageBox::critical(this, tr("Erro"), tr("Falha ao ler o arquivo do estoque."));
    }

    // Atualizar a interface, independentemente de sucesso ou erro
    atualizarInterface();
}

//Funcao Salvar
void MainLoja::on_actionSalvar_triggered()
{
    // Abrir QFileDialog para selecionar o local e nome do arquivo
    QString fileName = QFileDialog::getSaveFileName(this, tr("Salvar estoque"), "", tr("Estoques (*.txt)"));

    // Verificar se o usuário pressionou "Cancelar" ou não selecionou arquivo
    if (fileName.isEmpty()) {
        return; // Cancelou a ação, nada a fazer
    }

    // Converter QString para string C++ padrão
    std::string arquivo = fileName.toStdString();

    // Tentar salvar o arquivo com o método salvar da classe Loja
    bool sucesso = loja.salvar(arquivo);

    // Verificar se houve erro ao salvar
    if (!sucesso) {
        QMessageBox::critical(this, tr("Erro"), tr("Falha ao salvar o arquivo do estoque."));
    }
}

//Funcao Sair
void MainLoja::on_actionSair_triggered()
{
    QCoreApplication::quit();
}

//Funcao para atualizar a tabela
void MainLoja::atualizarInterface()
{
    // Redefinir o número de linhas das tabelas para zero antes de preencher novamente
    ui->tableWidgeTLIVROS->clearContents();
    ui->tableWidgetCDS->clearContents();
    ui->tableWidgetDVDS->clearContents();

    ui->tableWidgeTLIVROS->setRowCount(loja.getNumLivro());
    ui->tableWidgetCDS->setRowCount(loja.getNumCD());
    ui->tableWidgetDVDS->setRowCount(loja.getNumDVD());

    // Atualizar a tabela de livros
    for (int i = 0; i < loja.getNumLivro(); ++i) {
        const Livro& livro = loja.getLivro(i);

        QLabel* labelNome = new QLabel(QString::fromStdString(livro.getNome()));
        labelNome->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        ui->tableWidgeTLIVROS->setCellWidget(i, 0, labelNome);

        QLabel* labelPreco = new QLabel(QString::number(livro.getPreco(), 'f', 2));
        labelPreco->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        ui->tableWidgeTLIVROS->setCellWidget(i, 1, labelPreco);

        QLabel* labelAutor = new QLabel(QString::fromStdString(livro.getAutor()));
        labelAutor->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        ui->tableWidgeTLIVROS->setCellWidget(i, 2, labelAutor);
    }

    // Atualizar a tabela de CDs
    for (int i = 0; i < loja.getNumCD(); ++i) {
        const CD& cd = loja.getCD(i);

        QLabel* labelNome = new QLabel(QString::fromStdString(cd.getNome()));
        labelNome->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        ui->tableWidgetCDS->setCellWidget(i, 0, labelNome);

        QLabel* labelPreco = new QLabel(QString::number(cd.getPreco(), 'f', 2));
        labelPreco->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        ui->tableWidgetCDS->setCellWidget(i, 1, labelPreco);

        QLabel* labelFaixas = new QLabel(QString::number(cd.getNumFaixas()));
        labelFaixas->setAlignment(Qt::AlignCenter);
        ui->tableWidgetCDS->setCellWidget(i, 2, labelFaixas);
    }

    // Atualizar a tabela de DVDs
    for (int i = 0; i < loja.getNumDVD(); ++i) {
        const DVD& dvd = loja.getDVD(i);

        QLabel* labelNome = new QLabel(QString::fromStdString(dvd.getNome()));
        labelNome->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        ui->tableWidgetDVDS->setCellWidget(i, 0, labelNome);

        QLabel* labelPreco = new QLabel(QString::number(dvd.getPreco(), 'f', 2));
        labelPreco->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        ui->tableWidgetDVDS->setCellWidget(i, 1, labelPreco);

        QLabel* labelDuracao = new QLabel(QString::number(dvd.getDuracao()));
        labelDuracao->setAlignment(Qt::AlignCenter);
        ui->tableWidgetDVDS->setCellWidget(i, 2, labelDuracao);
    }

    // Atualizar o total de itens na status bar
    int totalItens = loja.total_itens();
    total_itens->setText(QString::number(totalItens));
}

//Fucoes incluir
void MainLoja::on_actionIncluir_Livro_triggered()
{
    // Limpar os campos da janela de inclusão de livro
    inclLivro->clear();
    // Exibir a janela de inclusão de livro
    inclLivro->show();
}

void MainLoja::on_actionIncluir_CD_triggered()
{
    // Limpar os campos da janela de inclusão de CD
    inclCD->clear();
    // Exibir a janela de inclusão de CD
    inclCD->show();
}

void MainLoja::on_actionIncluir_DVD_triggered()
{
    // Limpar os campos da janela de inclusão de DVD
    inclDVD->clear();
    // Exibir a janela de inclusão de DVD
    inclDVD->show();
}

//Implementacao Slots
void MainLoja::slotIncluirLivro(QString nome, QString preco, QString autor)
{
    // Converter os valores para os tipos esperados
    std::string nomeStr = nome.toStdString();
    float precoFloat = preco.toFloat();
    std::string autorStr = autor.toStdString();

    // Validação: Verificar se os dados são válidos
    if (nomeStr.empty() || precoFloat <= 0.0 || autorStr.empty()) {
        QString mensagemErro = tr("Não foi possível inserir o Livro;\n")
                               + tr("Nome= %1\n").arg(QString::fromStdString(nomeStr))
                               + tr("Preço= %2\n").arg(precoFloat)
                               + tr("Autor= %3").arg(QString::fromStdString(autorStr));

        QMessageBox::critical(this, tr("Livro inválido"), mensagemErro);
        return;
    }

    // Criar um novo objeto Livro e adicioná-lo à loja
    Livro novoLivro(nomeStr, precoFloat, autorStr);
    loja.incluirLivro(novoLivro);

    // Atualizar a interface completamente
    atualizarInterface();

}

void MainLoja::slotIncluirCD(QString nome, QString preco, QString numFaixas)
{
    // Converter os valores para os tipos esperados
    std::string nomeStr = nome.toStdString();
    float precoFloat = preco.toFloat();
    int numFaixasInt = numFaixas.toInt();

    // Validação: Verificar se os dados são válidos
    if (nomeStr.empty() || precoFloat <= 0.0 || numFaixasInt <= 0) {
        QString mensagemErro = tr("Não foi possível inserir o CD;\n")
                               + tr("Nome= %1\n").arg(QString::fromStdString(nomeStr))
                               + tr("Preço= %2\n").arg(precoFloat)
                               + tr("Num faixas= %3").arg(numFaixasInt);

        QMessageBox::critical(this, tr("CD inválido"), mensagemErro);
        return;
    }


    // Criar um novo objeto CD e adicioná-lo à loja
    CD novoCD(nomeStr, precoFloat, numFaixasInt);
    loja.incluirCD(novoCD);

    // Atualizar a interface completamente
    atualizarInterface();

}

void MainLoja::slotIncluirDVD(QString nome, QString preco, QString duracao)
{
    // Converter os valores para os tipos esperados
    std::string nomeStr = nome.toStdString();
    float precoFloat = preco.toFloat();
    int duracaoInt = duracao.toInt();

    // Validação: Verificar se os dados são válidos
    if (nomeStr.empty() || precoFloat <= 0.0 || duracaoInt <= 0) {
        QString mensagemErro = tr("Não foi possível inserir o DVD;\n")
                               + tr("Nome= %1\n").arg(QString::fromStdString(nomeStr))
                               + tr("Preço= %2\n").arg(precoFloat)
                               + tr("Duração= %3").arg(duracaoInt);

        QMessageBox::critical(this, tr("DVD inválido"), mensagemErro);
        return;
    }


    // Criar um novo objeto DVD e adicioná-lo à loja
    DVD novoDVD(nomeStr, precoFloat, duracaoInt);
    loja.incluirDVD(novoDVD);

    // Atualizar a interface completamente
    atualizarInterface();
}
