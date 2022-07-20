#include "plot.h"
#include "ui_plot.h"

PLOT::PLOT(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PLOT)
{
    ui->setupUi(this);

    ui->Xmax->setAlignment(Qt::AlignCenter);
    ui->Ymax->setAlignment(Qt::AlignCenter);
    ui->Ymin->setAlignment(Qt::AlignCenter);
    ui->Xmin->setAlignment(Qt::AlignCenter);
    ui->Step->setAlignment(Qt::AlignCenter);

    ui->Xmax->setText("10");
    ui->Ymax->setText("10");
    ui->Ymin->setText("-10");
    ui->Xmin->setText("-10");
    ui->Step->setText("0.1");
    ui->plot_res->xAxis->setRange(-10, 10);
    ui->plot_res->yAxis->setRange(-10, 10);

//    ui->Step->setReadOnly(true);
//    ui->Xmax->setReadOnly(true);
//    ui->Xmin->setReadOnly(true);
//    ui->Ymax->setReadOnly(true);
//    ui->Ymin->setReadOnly(true);
}

PLOT::~PLOT()
{
    delete ui;
}


void PLOT::on_pushButton_GO_PLOT_clicked()
{
    ui->plot_res->clearGraphs();
    QString Xmaximum = ui->Xmax->text();
    long double XMa = Xmaximum.toDouble();
    QString Xminimum = ui->Xmin->text();
    long double XMi = Xminimum.toDouble();
    QString Ymaximum = ui->Ymax->text();
    long double YMa = Ymaximum.toDouble();
    QString Yminimum = ui->Ymin->text();
    long double YMi = Yminimum.toDouble();
    QString stepp = ui->Step->text();
    long double step = stepp.toDouble();

    if (plot_validation(XMa, XMi, YMi, YMa)) {
        xBegin = XMi;
        xEnd = XMa;
        h = step;
        N = (xEnd - xBegin)/h + 2;
        ui->plot_res->xAxis->setRange(XMi, XMa);
        ui->plot_res->yAxis->setRange(YMi, YMa);

        QByteArray tmp = ui->expression->text().toLocal8Bit();
        char *input = tmp.data();
        long double res;
        if (!validation(input)) {
            for (X = xBegin; X <= xEnd; X += h) {
                x.push_back(X);
                QT_processing(input, X, &res);
                y.push_back(res);
            }
            ui->plot_res->addGraph();
            ui->plot_res->graph(0)->addData(x, y);
            ui->plot_res->replot();
            x.clear();
            y.clear();
        } else {
            QMessageBox::about(this, "Error", "invalid input function");
            ui->expression->setText("");
        }
    } else {
        QMessageBox::about(this, "Error", "Invalid Input Range");
    }
}

