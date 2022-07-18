#include "plot.h"
#include "ui_plot.h"

PLOT::PLOT(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PLOT)
{
    ui->setupUi(this);
}

PLOT::~PLOT()
{
    delete ui;
}

