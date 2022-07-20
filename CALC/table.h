#ifndef TABLE_H
#define TABLE_H

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
class table;
}

class table : public QDialog
{
    Q_OBJECT

public:
    explicit table(QWidget *parent = nullptr);
    ~table();

private:
    Ui::table *ui;
    QStandardItemModel *model;
};

#endif // TABLE_H
