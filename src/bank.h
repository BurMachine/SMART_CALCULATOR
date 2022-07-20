#ifndef BANK_H
#define BANK_H

#include <QDialog>
#include<QStandardItemModel>


#ifdef __cplusplus
extern "C"
{
#endif
#include "parser.h"
#include "stack.h"
#include "validation.h"
#include "calculating.h"
#ifdef __cplusplus
}
#endif

namespace Ui {
class bank;
}

class bank : public QDialog
{
    Q_OBJECT

public:
    explicit bank(QWidget *parent = nullptr);
    ~bank();

private slots:
    void on_pushButton_COUNT_BANK_clicked();

private:
    Ui::bank *ui;
};

#endif // BANK_H
