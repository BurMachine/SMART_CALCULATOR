#include "bank.h"
#include "ui_bank.h"
#include <QMessageBox>


bank::bank(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bank)
{
    ui->setupUi(this);

    ui->summa->setText("0");
    ui->percent->setText("0");
    ui->srok->setText("0");
    ui->N_pay->setText("0");
    ui->mounth_res->setText("0");
    ui->sum_pay->setText("0");
    ui->overpay->setText("0");
}

bank::~bank()
{
    delete ui;
}

void bank::on_pushButton_COUNT_BANK_clicked()
{
//    ui->summa->setText("0");
//    ui->percent->setText("0");
//    ui->srok->setText("0");
//    ui->N_pay->setText("0");
//    ui->mounth_res->setText("0");
//    ui->sum_pay->setText("0");
//    ui->overpay->setText("0");
    QByteArray input_summa = ui->summa->text().toLocal8Bit();
    long double SUMMA = input_summa.toDouble();
    QByteArray input_percent = ui->percent->text().toLocal8Bit();
    long double percent = input_percent.toDouble();
    QByteArray input_mounths = ui->srok->text().toLocal8Bit();
    int mounths = input_mounths.toInt();
    QByteArray input_N = ui->N_pay->text().toLocal8Bit();
    int N = input_N.toInt();

    long double sum_res = 0;
    long double overpay = 0;
    long double sum_mounth = 0;
    int code = 0;
    if (ui->radioButton->isChecked()) {
        code = bank_(SUMMA, mounths, percent, 1, &sum_res, &sum_mounth, &overpay, 0);
        QString result_mounth = QString::number((double)sum_mounth,'g',6);
        QString result_summary = QString::number((double)sum_res,'g',6);
        QString result_overpay = QString::number((double)overpay,'g',6);
        ui->mounth_res->setText(result_mounth);
        ui->sum_pay->setText(result_summary);
        ui->overpay->setText(result_overpay);
        ui->mounth_res->setReadOnly(true);
        ui->sum_pay->setReadOnly(true);
        ui->overpay->setReadOnly(true);
    } else if (ui->radioButton_2->isChecked()) {
        code = bank_(SUMMA, mounths, percent, 1, &sum_res, &sum_mounth, &overpay, N);
//        sum_res -= 10 + 10*N;
//        sum_mounth -= 1*N;
//        overpay -= 2*N;
        QString result_mounth = QString::number((double)sum_mounth,'g',6);
        QString result_summary = QString::number((double)sum_res,'g',6);
        QString result_overpay = QString::number((double)overpay,'g',6);
        ui->mounth_res->setText(result_mounth);
        ui->sum_pay->setText(result_summary);
        ui->overpay->setText(result_overpay);
        ui->mounth_res->setReadOnly(true);
        ui->sum_pay->setReadOnly(true);
        ui->overpay->setReadOnly(true);
    }

//    ui->N_pay->setText("0");
    if (code != 0) {
        QMessageBox::about(this, "Error", "invalid input");
    }
}

