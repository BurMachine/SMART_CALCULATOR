#include "bank.h"
#include "ui_bank.h"
#include "table.h"

bank::bank(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bank)
{
    ui->setupUi(this);
}

bank::~bank()
{
    delete ui;
}

void bank::on_pushButton_COUNT_BANK_clicked()
{
    QByteArray input_summa = ui->summa->text().toLocal8Bit();
    long double SUMMA = input_summa.toDouble();
    QByteArray input_percent = ui->percent->text().toLocal8Bit();
    long double percent = input_percent.toDouble();
    QByteArray input_mounths = ui->srok->text().toLocal8Bit();
    int mounths = input_mounths.toInt();

    long double sum_res = 0;
    long double overpay = 0;
    long double sum_mounth = 0;

    if (ui->radioButton->isChecked()) {
        bank_(SUMMA, mounths, percent, 1, &sum_res, &sum_mounth, &overpay);
        QString result_mounth = QString::number((double)sum_mounth,'g',6);
        QString result_summary = QString::number((double)sum_res,'g',6);
        QString result_overpay = QString::number((double)overpay,'g',6);
        ui->mounth_res->setText(result_mounth);
        ui->sum_pay->setText(result_summary);
        ui->overpay->setText(result_overpay);
    } else if (ui->radioButton_2->isChecked()) {
        {
            if (table_opened) {
                table_opened->raise();
                table_opened->activateWindow();
            } else {
            table_opened = new table(this);
            table_opened->show();
            }
        }
    }

}

