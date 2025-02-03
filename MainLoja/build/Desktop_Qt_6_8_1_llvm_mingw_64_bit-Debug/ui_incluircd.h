/********************************************************************************
** Form generated from reading UI file 'incluircd.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRCD_H
#define UI_INCLUIRCD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirCD
{
public:
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditnumFaixas;
    QLineEdit *lineEditPreco;

    void setupUi(QDialog *IncluirCD)
    {
        if (IncluirCD->objectName().isEmpty())
            IncluirCD->setObjectName("IncluirCD");
        IncluirCD->resize(300, 200);
        label = new QLabel(IncluirCD);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 100, 16));
        buttonBox = new QDialogButtonBox(IncluirCD);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(70, 160, 166, 24));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_3 = new QLabel(IncluirCD);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 33, 16));
        label_4 = new QLabel(IncluirCD);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 120, 47, 16));
        label_2 = new QLabel(IncluirCD);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 60, 36, 16));
        lineEditNome = new QLineEdit(IncluirCD);
        lineEditNome->setObjectName("lineEditNome");
        lineEditNome->setGeometry(QRect(100, 60, 161, 24));
        lineEditnumFaixas = new QLineEdit(IncluirCD);
        lineEditnumFaixas->setObjectName("lineEditnumFaixas");
        lineEditnumFaixas->setGeometry(QRect(100, 120, 161, 24));
        lineEditPreco = new QLineEdit(IncluirCD);
        lineEditPreco->setObjectName("lineEditPreco");
        lineEditPreco->setGeometry(QRect(100, 90, 161, 24));

        retranslateUi(IncluirCD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirCD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirCD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirCD);
    } // setupUi

    void retranslateUi(QDialog *IncluirCD)
    {
        IncluirCD->setWindowTitle(QCoreApplication::translate("IncluirCD", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("IncluirCD", "INCLUIR NOVO CD", nullptr));
        label_3->setText(QCoreApplication::translate("IncluirCD", "Pre\303\247o:", nullptr));
        label_4->setText(QCoreApplication::translate("IncluirCD", "N Faixas:", nullptr));
        label_2->setText(QCoreApplication::translate("IncluirCD", "Nome:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirCD: public Ui_IncluirCD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRCD_H
