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
#include <set>
#include <QVector>
#include <vector>
#include <sstream>


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
    vector<string> datas;
    vector<QCPItemStraightLine *> LLines;
    vector<QCPItemLine *> SLines;
    vector<QCPItemLine *> RLines;
    vector<QCPCurve *> circles;
    bool updated = false;   // true->done; false->not yet;
    bool checkLine(string line);
    void paint(string str);

private:
	Ui::MainWindow ui;
	Data data;
};
