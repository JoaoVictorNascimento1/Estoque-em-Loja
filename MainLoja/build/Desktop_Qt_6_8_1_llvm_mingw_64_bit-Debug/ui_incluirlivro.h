/********************************************************************************
** Form generated from reading UI file 'incluirlivro.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRLIVRO_H
#define UI_INCLUIRLIVRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirLivro
{
public:
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditNome;
    QLabel *label;
    QLineEdit *lineEditPreco;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditAutor;

    void setupUi(QDialog *IncluirLivro)
    {
        if (IncluirLivro->objectName().isEmpty())
            IncluirLivro->setObjectName("IncluirLivro");
        IncluirLivro->resize(300, 206);
        label_4 = new QLabel(IncluirLivro);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 20, 116, 16));
        buttonBox = new QDialogButtonBox(IncluirLivro);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(70, 160, 166, 24));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lineEditNome = new QLineEdit(IncluirLivro);
        lineEditNome->setObjectName("lineEditNome");
        lineEditNome->setGeometry(QRect(90, 60, 171, 24));
        label = new QLabel(IncluirLivro);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 39, 16));
        lineEditPreco = new QLineEdit(IncluirLivro);
        lineEditPreco->setObjectName("lineEditPreco");
        lineEditPreco->setGeometry(QRect(90, 90, 171, 24));
        label_2 = new QLabel(IncluirLivro);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 36, 16));
        label_3 = new QLabel(IncluirLivro);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(21, 120, 36, 16));
        lineEditAutor = new QLineEdit(IncluirLivro);
        lineEditAutor->setObjectName("lineEditAutor");
        lineEditAutor->setGeometry(QRect(90, 120, 171, 24));

        retranslateUi(IncluirLivro);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirLivro, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirLivro, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirLivro);
    } // setupUi

    void retranslateUi(QDialog *IncluirLivro)
    {
        IncluirLivro->setWindowTitle(QCoreApplication::translate("IncluirLivro", "Incluir Livro", nullptr));
        label_4->setText(QCoreApplication::translate("IncluirLivro", "INCLUIR NOVO LIVRO", nullptr));
        label->setText(QCoreApplication::translate("IncluirLivro", "Nome: ", nullptr));
        label_2->setText(QCoreApplication::translate("IncluirLivro", "Pre\303\247o: ", nullptr));
        label_3->setText(QCoreApplication::translate("IncluirLivro", "Autor: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirLivro: public Ui_IncluirLivro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRLIVRO_H
