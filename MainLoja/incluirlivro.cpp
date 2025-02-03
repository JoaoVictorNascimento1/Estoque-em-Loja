#include "incluirlivro.h"
#include "ui_incluirlivro.h"

IncluirLivro::IncluirLivro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirLivro)
{
    ui->setupUi(this);
}

IncluirLivro::~IncluirLivro()
{
    delete ui;
}

void IncluirLivro::clear()
{
    // Limpar os campos de entrada (por exemplo, nome do livro, autor, etc.)
    ui->lineEditNome->clear();
    ui->lineEditPreco->clear();
    ui->lineEditAutor->clear();
}

void IncluirLivro::on_buttonBox_accepted()
{
    // Ler o conteúdo atual das QLineEdit
    QString nome = ui->lineEditNome->text();
    QString preco = ui->lineEditPreco->text();
    QString autor = ui->lineEditAutor->text();

    // Emitir o sinal signIncluirLivro com os parâmetros lidos
    emit signIncluirLivro(nome, preco, autor);
    this->close();
}

