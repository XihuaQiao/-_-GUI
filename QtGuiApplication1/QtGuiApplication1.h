#include <QtWidgets/QMainWindow>
#include <QFiledialog>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>
#include <QDebug>
#include "ui_QtGuiApplication1.h"
#include "qcustomplot.h"
#include "CData.h"
#include <iostream>

using namespace std;

class QtGuiApplication1 : public QMainWindow
{

	Q_OBJECT

public slots:
	void on_btn_dl_clear_clicked();
	void on_btn_line_add_clicked();
	void on_btn_circle_add_clicked();
	void on_btn_dl_delete_clicked();
	void on_btn_import_clicked();
	void on_btn_run_clicked();

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);
    vector<pair<double, double>> lines;
    vector<int> type;   // 1-L, 2-R, 3-S, 4-C;
    bool updated = false;   // true->done; false->not yet;

private:
	Ui::MainWindow ui;
	Data data;
};
