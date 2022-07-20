#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./qcustomplot.h"
#include "plot.h"
#include "bank.h"

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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QPointer<PLOT> _open;
    QPointer<bank> _opened;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    PLOT *plot_ui;

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_DOT_clicked();
    void on_pushButton_PLUS_clicked();
    void on_pushButton_MINUS_clicked();
    void on_pushButton_MULT_clicked();
    void on_pushButton_DIV_clicked();
    void on_pushButton_LEFT_clicked();
    void on_pushButton_RIGHT_clicked();
    void on_pushButton_XXX_clicked();
    void on_pushButton_SIN_clicked();
    void on_pushButton_COS_clicked();
    void on_pushButton_TAN_clicked();
    void on_pushButton_ASIN_clicked();
    void on_pushButton_ACOS_clicked();
    void on_pushButton_ATAN_clicked();
    void on_pushButton_SQRT_clicked();
    void on_pushButton_MOD_clicked();
    void on_pushButton_LN_clicked();
    void on_pushButton_LOG_clicked();
    void on_pushButton_AC_clicked();
    void on_pushButton_POWER_clicked();

//    void digits_numbers();
//    void on_pushButton_DOT_clicked();
//    void on_pushButton_AC_clicked();
//    void on_pushButton_EQUAL_clicked();
//    void math_operations();
    void on_pushButton_EQUAL_clicked();
    void on_pushButton_GRAPH_clicked();
    void on_pushButton_TAN_3_clicked();
};
#endif // MAINWINDOW_H
