/********************************************************************************
** Form generated from reading UI file 'mainloja.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLOJA_H
#define UI_MAINLOJA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainLoja
{
public:
    QAction *actionLer;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionIncluir_Livro;
    QAction *actionIncluir_CD;
    QAction *actionIncluir_DVD;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelLivro;
    QLabel *labelCD;
    QLabel *labelDVD;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidgeTLIVROS;
    QTableWidget *tableWidgetCDS;
    QTableWidget *tableWidgetDVDS;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuItem;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainLoja)
    {
        if (MainLoja->objectName().isEmpty())
            MainLoja->setObjectName("MainLoja");
        MainLoja->resize(1000, 600);
        actionLer = new QAction(MainLoja);
        actionLer->setObjectName("actionLer");
        actionSalvar = new QAction(MainLoja);
        actionSalvar->setObjectName("actionSalvar");
        actionSair = new QAction(MainLoja);
        actionSair->setObjectName("actionSair");
        actionIncluir_Livro = new QAction(MainLoja);
        actionIncluir_Livro->setObjectName("actionIncluir_Livro");
        actionIncluir_CD = new QAction(MainLoja);
        actionIncluir_CD->setObjectName("actionIncluir_CD");
        actionIncluir_DVD = new QAction(MainLoja);
        actionIncluir_DVD->setObjectName("actionIncluir_DVD");
        centralwidget = new QWidget(MainLoja);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelLivro = new QLabel(centralwidget);
        labelLivro->setObjectName("labelLivro");
        labelLivro->setAutoFillBackground(true);
        labelLivro->setFrameShape(QFrame::Shape::Box);
        labelLivro->setFrameShadow(QFrame::Shadow::Plain);
        labelLivro->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(labelLivro);

        labelCD = new QLabel(centralwidget);
        labelCD->setObjectName("labelCD");
        labelCD->setAutoFillBackground(true);
        labelCD->setFrameShape(QFrame::Shape::Box);
        labelCD->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(labelCD);

        labelDVD = new QLabel(centralwidget);
        labelDVD->setObjectName("labelDVD");
        labelDVD->setAutoFillBackground(true);
        labelDVD->setFrameShape(QFrame::Shape::Box);
        labelDVD->setScaledContents(false);
        labelDVD->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(labelDVD);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableWidgeTLIVROS = new QTableWidget(centralwidget);
        if (tableWidgeTLIVROS->columnCount() < 3)
            tableWidgeTLIVROS->setColumnCount(3);
        QFont font;
        font.setBold(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidgeTLIVROS->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgeTLIVROS->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgeTLIVROS->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgeTLIVROS->setObjectName("tableWidgeTLIVROS");
        tableWidgeTLIVROS->setFrameShape(QFrame::Shape::NoFrame);
        tableWidgeTLIVROS->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidgeTLIVROS->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidgeTLIVROS->setAutoScroll(true);
        tableWidgeTLIVROS->setTabKeyNavigation(false);
        tableWidgeTLIVROS->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidgeTLIVROS->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidgeTLIVROS->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(tableWidgeTLIVROS);

        tableWidgetCDS = new QTableWidget(centralwidget);
        if (tableWidgetCDS->columnCount() < 3)
            tableWidgetCDS->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetCDS->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetCDS->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetCDS->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidgetCDS->setObjectName("tableWidgetCDS");
        tableWidgetCDS->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidgetCDS->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidgetCDS->setAutoScroll(true);
        tableWidgetCDS->setTabKeyNavigation(false);
        tableWidgetCDS->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidgetCDS->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidgetCDS->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(tableWidgetCDS);

        tableWidgetDVDS = new QTableWidget(centralwidget);
        if (tableWidgetDVDS->columnCount() < 3)
            tableWidgetDVDS->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetDVDS->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetDVDS->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetDVDS->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidgetDVDS->setObjectName("tableWidgetDVDS");
        tableWidgetDVDS->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidgetDVDS->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidgetDVDS->setAutoScroll(true);
        tableWidgetDVDS->setTabKeyNavigation(false);
        tableWidgetDVDS->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidgetDVDS->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidgetDVDS->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(tableWidgetDVDS);


        verticalLayout->addLayout(horizontalLayout);

        MainLoja->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainLoja);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuItem = new QMenu(menubar);
        menuItem->setObjectName("menuItem");
        MainLoja->setMenuBar(menubar);
        statusbar = new QStatusBar(MainLoja);
        statusbar->setObjectName("statusbar");
        MainLoja->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuItem->menuAction());
        menuArquivo->addAction(actionLer);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuItem->addAction(actionIncluir_Livro);
        menuItem->addAction(actionIncluir_CD);
        menuItem->addAction(actionIncluir_DVD);

        retranslateUi(MainLoja);

        QMetaObject::connectSlotsByName(MainLoja);
    } // setupUi

    void retranslateUi(QMainWindow *MainLoja)
    {
        MainLoja->setWindowTitle(QCoreApplication::translate("MainLoja", "Estoque em Loja", nullptr));
        actionLer->setText(QCoreApplication::translate("MainLoja", "Ler...", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainLoja", "Salvar...", nullptr));
        actionSair->setText(QCoreApplication::translate("MainLoja", "Sair", nullptr));
        actionIncluir_Livro->setText(QCoreApplication::translate("MainLoja", "Incluir Livro...", nullptr));
        actionIncluir_CD->setText(QCoreApplication::translate("MainLoja", "Incluir CD...", nullptr));
        actionIncluir_DVD->setText(QCoreApplication::translate("MainLoja", "Incluir DVD...", nullptr));
        labelLivro->setText(QCoreApplication::translate("MainLoja", "LIVROS", nullptr));
        labelCD->setText(QCoreApplication::translate("MainLoja", "CDS", nullptr));
        labelDVD->setText(QCoreApplication::translate("MainLoja", "DVDS", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgeTLIVROS->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgeTLIVROS->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainLoja", "PRECO", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgeTLIVROS->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainLoja", "AUTOR", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetCDS->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetCDS->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainLoja", "PRECO", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetCDS->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainLoja", "N FAIXAS", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetDVDS->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetDVDS->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainLoja", "PRECO", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetDVDS->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainLoja", "DURACAO", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainLoja", "Arquivo", nullptr));
        menuItem->setTitle(QCoreApplication::translate("MainLoja", "Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainLoja: public Ui_MainLoja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLOJA_H
