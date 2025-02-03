#include "incluircd.h"
#include "ui_incluircd.h"

IncluirCD::IncluirCD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirCD)
{
    ui->setupUi(this);
}

IncluirCD::~IncluirCD()
{
    delete ui;
}

void IncluirCD::clear()
{
    // Limpar os campos de entrada (por exemplo, nome do livro, autor, etc.)
    ui->lineEditNome->clear();
    ui->lineEditPreco->clear();
    ui->lineEditnumFaixas->clear();
}

void IncluirCD::on_buttonBox_accepted()
{
    // Ler o conteúdo atual das QLineEdit
    QString nome = ui->lineEditNome->text();
    QString preco = ui->lineEditPreco->text();
    QString numFaixas = ui->lineEditnumFaixas->text();

    // Emitir o sinal signIncluirLivro com os parâmetros lidos
    emit signIncluirCD(nome, preco, numFaixas);
}

