#include "incluirdvd.h"
#include "ui_incluirdvd.h"

IncluirDVD::IncluirDVD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirDVD)
{
    ui->setupUi(this);
}

IncluirDVD::~IncluirDVD()
{
    delete ui;
}

void IncluirDVD::clear()
{
    // Limpar os campos de entrada (por exemplo, nome do livro, autor, etc.)
    ui->lineEditNome->clear();
    ui->lineEditPreco->clear();
    ui->lineEditDuracao->clear();
}

void IncluirDVD::on_buttonBox_accepted()
{
    // Ler o conteúdo atual das QLineEdit
    QString nome = ui->lineEditNome->text();
    QString preco = ui->lineEditPreco->text();
    QString duracao = ui->lineEditDuracao->text();

    // Emitir o sinal signIncluirLivro com os parâmetros lidos
    emit signIncluirDVD(nome, preco, duracao);
}

