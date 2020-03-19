/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btn_import;
    QPushButton *btn_run;
    QPushButton *btn_nd_add;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_dl_delete;
    QPushButton *btn_dl_clear;
    QGraphicsView *gView_graph;
    QLabel *lbl_nd;
    QLineEdit *ledt_nd_add;
    QLabel *lbl_dl;
    QLabel *lbl_graph;
    QListWidget *list_dl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(813, 577);
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_import = new QPushButton(centralwidget);
        btn_import->setObjectName(QString::fromUtf8("btn_import"));

        gridLayout->addWidget(btn_import, 0, 2, 1, 1);

        btn_run = new QPushButton(centralwidget);
        btn_run->setObjectName(QString::fromUtf8("btn_run"));

        gridLayout->addWidget(btn_run, 10, 2, 1, 1);

        btn_nd_add = new QPushButton(centralwidget);
        btn_nd_add->setObjectName(QString::fromUtf8("btn_nd_add"));

        gridLayout->addWidget(btn_nd_add, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_dl_delete = new QPushButton(centralwidget);
        btn_dl_delete->setObjectName(QString::fromUtf8("btn_dl_delete"));

        verticalLayout->addWidget(btn_dl_delete);

        btn_dl_clear = new QPushButton(centralwidget);
        btn_dl_clear->setObjectName(QString::fromUtf8("btn_dl_clear"));

        verticalLayout->addWidget(btn_dl_clear);


        gridLayout->addLayout(verticalLayout, 7, 2, 1, 1);

        gView_graph = new QGraphicsView(centralwidget);
        gView_graph->setObjectName(QString::fromUtf8("gView_graph"));

        gridLayout->addWidget(gView_graph, 10, 1, 1, 1);

        lbl_nd = new QLabel(centralwidget);
        lbl_nd->setObjectName(QString::fromUtf8("lbl_nd"));

        gridLayout->addWidget(lbl_nd, 1, 0, 1, 1);

        ledt_nd_add = new QLineEdit(centralwidget);
        ledt_nd_add->setObjectName(QString::fromUtf8("ledt_nd_add"));

        gridLayout->addWidget(ledt_nd_add, 1, 1, 1, 1);

        lbl_dl = new QLabel(centralwidget);
        lbl_dl->setObjectName(QString::fromUtf8("lbl_dl"));

        gridLayout->addWidget(lbl_dl, 7, 0, 1, 1);

        lbl_graph = new QLabel(centralwidget);
        lbl_graph->setObjectName(QString::fromUtf8("lbl_graph"));

        gridLayout->addWidget(lbl_graph, 10, 0, 1, 1);

        list_dl = new QListWidget(centralwidget);
        list_dl->setObjectName(QString::fromUtf8("list_dl"));

        gridLayout->addWidget(list_dl, 7, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 813, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_import->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        btn_run->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        btn_nd_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_dl_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btn_dl_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        lbl_nd->setText(QCoreApplication::translate("MainWindow", "new descript", nullptr));
        lbl_dl->setText(QCoreApplication::translate("MainWindow", "descript list", nullptr));
        lbl_graph->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
