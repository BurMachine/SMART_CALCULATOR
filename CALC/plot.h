#ifndef PLOT_H
#define PLOT_H

#include <QDialog>

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
class PLOT;
}

class PLOT : public QDialog
{
    Q_OBJECT

public:
    explicit PLOT(QWidget *parent = nullptr);
    ~PLOT();

private slots:
    void on_pushButton_GO_PLOT_clicked();

private:
    Ui::PLOT *ui;

private:
    Ui::PLOT *ui;
    double xBegin, xEnd, h, X;
    int N;
    QVector<double> x, y;
};

#endif // PLOT_H
