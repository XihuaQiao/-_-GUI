#include "QtGuiApplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtGuiApplication1::on_btn_line_add_clicked()
{
	string str = ui.cbox_line->currentText().toStdString();
	str = str + " " + ui.sbox_line_x1->text().toStdString();
	str = str + " " + ui.sbox_line_y1->text().toStdString();
	str = str + " " + ui.sbox_line_x2->text().toStdString();
	str = str + " " + ui.sbox_line_y2->text().toStdString();
	ui.list_dl->addItem(QString::fromStdString(str));
}

void QtGuiApplication1::on_btn_circle_add_clicked()
{
	string str = "C";
	str = str + " " + ui.sbox_circle_x->text().toStdString();
	str = str + " " + ui.sbox_circle_y->text().toStdString();
	str = str + " " + ui.sbox_line_r->text().toStdString();
	ui.list_dl->addItem(QString::fromStdString(str));
}

void QtGuiApplication1::on_btn_dl_clear_clicked()
{
	ui.list_dl->clear();
}

void QtGuiApplication1::on_btn_dl_delete_clicked()
{
	QList<QListWidgetItem*> list = ui.list_dl->selectedItems();
	if (list.size() == 0)
		return;
	ui.list_dl->takeItem(ui.list_dl->row(list[0]));
}

void QtGuiApplication1::on_btn_import_clicked()
{
	QString filepath = QFileDialog::getOpenFileName(this, "choose the input file", "/", "text file (*.txt);; all files (*.*);;");
	qDebug() << "path=" << filepath;
	QFile file(filepath);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
		qDebug() << "file open failed!";
		return;
	}
	QTextStream in(&file);
	QString line = in.readLine(0);
	int cnt = line.toInt();
	while (!in.atEnd()) {
		line = in.readLine();
		ui.list_dl->addItem(line);
	}
}

void QtGuiApplication1::on_btn_run_clicked()
{

}
