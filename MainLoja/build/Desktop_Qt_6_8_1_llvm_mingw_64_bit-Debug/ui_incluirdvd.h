/********************************************************************************
** Form generated from reading UI file 'incluirdvd.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRDVD_H
#define UI_INCLUIRDVD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirDVD
{
public:
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditPreco;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditDuracao;

    void setupUi(QDialog *IncluirDVD)
    {
        if (IncluirDVD->objectName().isEmpty())
            IncluirDVD->setObjectName("IncluirDVD");
        IncluirDVD->resize(300, 206);
        label = new QLabel(IncluirDVD);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 107, 16));
        buttonBox = new QDialogButtonBox(IncluirDVD);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(70, 160, 166, 24));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_4 = new QLabel(IncluirDVD);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 120, 47, 16));
        label_2 = new QLabel(IncluirDVD);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 36, 16));
        label_3 = new QLabel(IncluirDVD);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 33, 16));
        lineEditPreco = new QLineEdit(IncluirDVD);
        lineEditPreco->setObjectName("lineEditPreco");
        lineEditPreco->setGeometry(QRect(100, 90, 161, 24));
        lineEditNome = new QLineEdit(IncluirDVD);
        lineEditNome->setObjectName("lineEditNome");
        lineEditNome->setGeometry(QRect(100, 60, 161, 24));
        lineEditDuracao = new QLineEdit(IncluirDVD);
        lineEditDuracao->setObjectName("lineEditDuracao");
        lineEditDuracao->setGeometry(QRect(100, 120, 161, 24));

        retranslateUi(IncluirDVD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirDVD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirDVD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirDVD);
    } // setupUi

    void retranslateUi(QDialog *IncluirDVD)
    {
        IncluirDVD->setWindowTitle(QCoreApplication::translate("IncluirDVD", "Incluir DVD", nullptr));
        label->setText(QCoreApplication::translate("IncluirDVD", "INCLUIR NOVO DVD", nullptr));
        label_4->setText(QCoreApplication::translate("IncluirDVD", "Dura\303\247\303\243o:", nullptr));
        label_2->setText(QCoreApplication::translate("IncluirDVD", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("IncluirDVD", "Pre\303\247o:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirDVD: public Ui_IncluirDVD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRDVD_H
