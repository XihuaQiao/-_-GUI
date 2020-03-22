#include "QtGuiApplication1.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
    ui.plot->sizePolicy().setHeightForWidth(true);
    ui.plot->setInteractions(QCP::iRangeDrag|QCP::iRangeZoom| QCP::iSelectAxes | QCP::iSelectLegend | QCP::iSelectPlottables);
    ui.plot->xAxis->setLabel("x");
    ui.plot->yAxis->setLabel("y");
}

bool QtGuiApplication1::checkLine(string line)
{
    for (int i = 0; i < datas.size(); i++) {
        if (line[0] == datas[i][0] && line[0] == 'C') {
            if (line.compare(datas[i]) == 0) {

            }
            else {
                datas.push_back(line);
            }
        }
        else if (line[0] != 'C' && datas[i][0] != 'C') {
            if (isSame(line, datas[i])) {

            }
            else {
                datas.push_back(line);
            }
        }
        else {
            datas.push_back(line);
        }
    }
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
	while (!in.atEnd()) {
		line = in.readLine();
		ui.list_dl->addItem(line);
	}
}

void QtGuiApplication1::paint(string line)
{
    QVector<double> x(2), y(2);
    char type;
    double r;
    stringstream ss;
    ss << line;
    ss >> type;
    if (type == 'C') {
        ss >> x[0];
        ss >> y[0];
        ss >> r;
        QCPCurve *circle = new QCPCurve(ui.plot->xAxis, ui.plot->yAxis);
        const int pointCount = 200;
        QVector<QCPCurveData> dataSpiral1(pointCount);
        for (int j = 0; j < pointCount; ++j)
        {
            double theta = j / (double)(pointCount-1)*2*M_PI;
            dataSpiral1[j] = QCPCurveData(j, r * qCos(theta) - x[0], r * qSin(theta) - y[0]);
        }
        circle->data()->set(dataSpiral1, true);
    }
    else {
        ss >> x[0];
        ss >> y[0];
        ss >> x[1];
        ss >> y[1];
        if (type == 'L') {
            QCPItemStraightLine *line = new QCPItemStraightLine(ui.plot);
            line->point1->setCoords(x[0], y[0]);
            line->point2->setCoords(x[1], y[1]);
            ui.plot->graph(0)->addData(x, y);
            LLines.push_back(line);
        }
        else if (type == 'S') {
            QCPItemLine *line = new QCPItemLine(ui.plot);
            line->start->setCoords(x[0], y[0]);
            line->end->setCoords(x[1], y[1]);
            ui.plot->graph(0)->addData(x, y);
            SLines.push_back(line);
        }
        else if (type == 'R') {
            QCPItemLine *line = new QCPItemLine(ui.plot);
            ui.plot->graph(0)->addData(x, y);
            line->start->setCoords(x[0], y[0]);
            x[1] = x[0] + 1000000000000000 * (x[1] - x[0]);
            y[1] = y[1] + 1000000000000000 * (y[1] - y[0]);
            line->end->setCoords(x[1], y[1]);
            RLines.push_back(line);
        }
    }
}

void QtGuiApplication1::on_btn_run_clicked()
{
    if (this->updated)      // already update
        return;

    QPen drawPen;
    drawPen.setColor(Qt::red);
    drawPen.setWidth(4);
    ui.plot->addGraph();
    ui.plot->graph(0)->setPen(drawPen);
    ui.plot->graph(0)->setLineStyle(QCPGraph::lsNone);
    ui.plot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 2));

    for (int i = 0; i < ui.list_dl->count(); i++) {
        string line = ui.list_dl->item(i)->text().toStdString();
        datas.push_back(line);
        paint(line);
    }

    set<pair<double, double>> nodes = count(datas);
    set<pair<double, double>>::iterator iter = nodes.begin();
    while(iter != nodes.end()) {
        ui.plot->graph(0)->addData(iter->first, iter->second);
    }

    // 是否有存一个交点集合？

    // set some basic customPlot config:
    ui.plot->replot(QCustomPlot::rpQueuedReplot);

}
