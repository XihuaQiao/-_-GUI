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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_dl;
    QListWidget *list_dl;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_dl_delete;
    QPushButton *btn_dl_clear;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QSpinBox *sbox_line_r;
    QSpinBox *sbox_line_x2;
    QLabel *lbl_line;
    QLabel *label_10;
    QPushButton *btn_import;
    QSpinBox *sbox_circle_y;
    QPushButton *btn_line_add;
    QPushButton *btn_circle_add;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_9;
    QSpinBox *sbox_circle_x;
    QLabel *label_6;
    QSpinBox *sbox_line_x1;
    QSpinBox *sbox_line_y1;
    QSpinBox *sbox_line_y2;
    QLabel *label_8;
    QLabel *label_4;
    QComboBox *cbox_line;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_graph;
    QGraphicsView *gView_graph;
    QPushButton *btn_run;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1102, 856);
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbl_dl = new QLabel(centralwidget);
        lbl_dl->setObjectName(QString::fromUtf8("lbl_dl"));
        lbl_dl->setFont(font);

        horizontalLayout_3->addWidget(lbl_dl);

        list_dl = new QListWidget(centralwidget);
        list_dl->setObjectName(QString::fromUtf8("list_dl"));
        list_dl->setFont(font);

        horizontalLayout_3->addWidget(list_dl);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btn_dl_delete = new QPushButton(centralwidget);
        btn_dl_delete->setObjectName(QString::fromUtf8("btn_dl_delete"));
        btn_dl_delete->setFont(font);

        verticalLayout_2->addWidget(btn_dl_delete);

        btn_dl_clear = new QPushButton(centralwidget);
        btn_dl_clear->setObjectName(QString::fromUtf8("btn_dl_clear"));
        btn_dl_clear->setFont(font);

        verticalLayout_2->addWidget(btn_dl_clear);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        sbox_line_r = new QSpinBox(centralwidget);
        sbox_line_r->setObjectName(QString::fromUtf8("sbox_line_r"));
        sbox_line_r->setFont(font);
        sbox_line_r->setMinimum(0);
        sbox_line_r->setMaximum(100000);

        gridLayout->addWidget(sbox_line_r, 6, 1, 1, 1);

        sbox_line_x2 = new QSpinBox(centralwidget);
        sbox_line_x2->setObjectName(QString::fromUtf8("sbox_line_x2"));
        sbox_line_x2->setFont(font);
        sbox_line_x2->setMinimum(-100000);
        sbox_line_x2->setMaximum(100000);

        gridLayout->addWidget(sbox_line_x2, 3, 1, 1, 1);

        lbl_line = new QLabel(centralwidget);
        lbl_line->setObjectName(QString::fromUtf8("lbl_line"));
        lbl_line->setFont(font);

        gridLayout->addWidget(lbl_line, 1, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 3, 3, 1, 1);

        btn_import = new QPushButton(centralwidget);
        btn_import->setObjectName(QString::fromUtf8("btn_import"));
        btn_import->setFont(font);

        gridLayout->addWidget(btn_import, 0, 4, 1, 1);

        sbox_circle_y = new QSpinBox(centralwidget);
        sbox_circle_y->setObjectName(QString::fromUtf8("sbox_circle_y"));
        sbox_circle_y->setFont(font);
        sbox_circle_y->setMinimum(-100000);
        sbox_circle_y->setMaximum(100000);

        gridLayout->addWidget(sbox_circle_y, 5, 4, 1, 1);

        btn_line_add = new QPushButton(centralwidget);
        btn_line_add->setObjectName(QString::fromUtf8("btn_line_add"));
        btn_line_add->setFont(font);

        gridLayout->addWidget(btn_line_add, 1, 3, 1, 1);

        btn_circle_add = new QPushButton(centralwidget);
        btn_circle_add->setObjectName(QString::fromUtf8("btn_circle_add"));
        btn_circle_add->setFont(font);

        gridLayout->addWidget(btn_circle_add, 4, 3, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        sbox_circle_x = new QSpinBox(centralwidget);
        sbox_circle_x->setObjectName(QString::fromUtf8("sbox_circle_x"));
        sbox_circle_x->setFont(font);
        sbox_circle_x->setMinimum(-100000);
        sbox_circle_x->setMaximum(100000);

        gridLayout->addWidget(sbox_circle_x, 5, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        sbox_line_x1 = new QSpinBox(centralwidget);
        sbox_line_x1->setObjectName(QString::fromUtf8("sbox_line_x1"));
        sbox_line_x1->setFont(font);
        sbox_line_x1->setMinimum(-100000);
        sbox_line_x1->setMaximum(100000);

        gridLayout->addWidget(sbox_line_x1, 2, 1, 1, 1);

        sbox_line_y1 = new QSpinBox(centralwidget);
        sbox_line_y1->setObjectName(QString::fromUtf8("sbox_line_y1"));
        sbox_line_y1->setFont(font);
        sbox_line_y1->setMinimum(-100000);
        sbox_line_y1->setMaximum(100000);

        gridLayout->addWidget(sbox_line_y1, 2, 4, 1, 1);

        sbox_line_y2 = new QSpinBox(centralwidget);
        sbox_line_y2->setObjectName(QString::fromUtf8("sbox_line_y2"));
        sbox_line_y2->setFont(font);

        gridLayout->addWidget(sbox_line_y2, 3, 4, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 5, 3, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        cbox_line = new QComboBox(centralwidget);
        cbox_line->addItem(QString());
        cbox_line->addItem(QString());
        cbox_line->addItem(QString());
        cbox_line->setObjectName(QString::fromUtf8("cbox_line"));
        cbox_line->setFont(font);

        gridLayout->addWidget(cbox_line, 1, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 3, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_graph = new QLabel(centralwidget);
        lbl_graph->setObjectName(QString::fromUtf8("lbl_graph"));
        lbl_graph->setFont(font);

        horizontalLayout_2->addWidget(lbl_graph);

        gView_graph = new QGraphicsView(centralwidget);
        gView_graph->setObjectName(QString::fromUtf8("gView_graph"));
        gView_graph->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(gView_graph);

        btn_run = new QPushButton(centralwidget);
        btn_run->setObjectName(QString::fromUtf8("btn_run"));
        btn_run->setFont(font);

        horizontalLayout_2->addWidget(btn_run);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_6, 3, 0, 1, 1);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_7, 1, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        line->setFont(font2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 1, 1, 1);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 4, 1, 1, 1);

        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_8, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1102, 25));
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
        lbl_dl->setText(QCoreApplication::translate("MainWindow", "descript list", nullptr));
        btn_dl_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btn_dl_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        lbl_line->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "y2", nullptr));
        btn_import->setText(QCoreApplication::translate("MainWindow", "Import", nullptr));
        btn_line_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_circle_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "r", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        cbox_line->setItemText(0, QCoreApplication::translate("MainWindow", "L", nullptr));
        cbox_line->setItemText(1, QCoreApplication::translate("MainWindow", "R", nullptr));
        cbox_line->setItemText(2, QCoreApplication::translate("MainWindow", "S", nullptr));

        lbl_graph->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
        btn_run->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
