#include <QtWidgets/QMainWindow>
#include <QFiledialog>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>
#include <QDebug>
#include "ui_QtGuiApplication1.h"
#include "CData.h"

class QtGuiApplication1 : public QMainWindow
{

	Q_OBJECT

public slots:
	void on_btn_dl_clear_clicked();
	void on_btn_nd_add_clicked();
	void on_btn_dl_delete_clicked();
	void on_btn_import_clicked();
	void on_btn_run_clicked();

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);

private:
	Ui::MainWindow ui;
	Data data;
};
