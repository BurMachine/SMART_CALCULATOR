#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "plot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->result->setAlignment(Qt::AlignRight);
//    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
//    connect(ui->pushButton_EQUAL, SIGNAL(clicked()), this, SLOT(math_operations()));
//    connect(ui->pushButton_MINUS, SIGNAL(clicked()), this, SLOT(math_operations()));
//    connect(ui->pushButton_PLUS, SIGNAL(clicked()), this, SLOT(math_operations()));
//    connect(ui->pushButton_MULT, SIGNAL(clicked()), this, SLOT(math_operations()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::digits_numbers()
//{
//    QPushButton *button = (QPushButton*)sender();
//    double numbers;
//    QString new_label;
//    numbers = (ui->result->text() + button->text()).toDouble();
//    new_label = QString::number(numbers, 'g', 15 );
//    ui->result->setText(new_label);
//}

//void MainWindow::on_pushButton_DOT_clicked()
//{
//    if (!(ui->result->text().contains( '.')))
//         ui->result->setText(ui->result->text() + ".");
//}


void MainWindow::on_pushButton_0_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "0");
}

void MainWindow::on_pushButton_1_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "1");
}
void MainWindow::on_pushButton_2_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "2");
}
void MainWindow::on_pushButton_3_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "3");
}

void MainWindow::on_pushButton_4_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "4");
}
void MainWindow::on_pushButton_5_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "5");
}
void MainWindow::on_pushButton_6_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "6");
}
void MainWindow::on_pushButton_7_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "7");
}
void MainWindow::on_pushButton_8_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "8");
}
void MainWindow::on_pushButton_9_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "9");
}

void MainWindow::on_pushButton_DOT_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + ".");
}
void MainWindow::on_pushButton_PLUS_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "+");
}

void MainWindow::on_pushButton_MINUS_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "-");
}
void MainWindow::on_pushButton_MULT_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "*");
}
void MainWindow::on_pushButton_DIV_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "/");
}
void MainWindow::on_pushButton_LEFT_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "(");
}

void MainWindow::on_pushButton_RIGHT_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + ")");
}

void MainWindow::on_pushButton_XXX_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "x");
}
void MainWindow::on_pushButton_SIN_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "sin(");
}

void MainWindow::on_pushButton_COS_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "cos(");
}

void MainWindow::on_pushButton_TAN_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "tan(");
}

void MainWindow::on_pushButton_ATAN_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "atan(");
}

void MainWindow::on_pushButton_ACOS_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "acos(");
}

void MainWindow::on_pushButton_POWER_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "^");
}

void MainWindow::on_pushButton_ASIN_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "asin(");
}

void MainWindow::on_pushButton_LOG_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "log(");
}

void MainWindow::on_pushButton_SQRT_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "sqrt(");
}

void MainWindow::on_pushButton_MOD_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "mod");
}

void MainWindow::on_pushButton_LN_clicked()
{
    if (!(ui->result->isReadOnly()))
        ui->result->setText(ui->result->text() + "ln(");
}

void MainWindow::on_pushButton_AC_clicked()
{
    if (ui->result->isReadOnly())
       ui->result->setReadOnly(false);
    ui->result->setText("");

}

void MainWindow::on_pushButton_EQUAL_clicked()
{
    QByteArray tmp = ui->result->text().toLocal8Bit();
    char *input = tmp.data();
//    QMessageBox::about(this, "Error", input);
    if (validation(input) == 0) {
            stack *one = NULL, *one_rev = NULL, *two = NULL, *three = NULL, *rpn_s = NULL, *rpn_n = NULL;
            double x_value = 0;
            parser(input, &one, x_value);
            reverse_stack(&one, &one_rev);
            RPN(&one_rev, &rpn_n, &rpn_s);
            reverse_stack(&rpn_n, &two);
            calculator(&two, &three);
            QString value = QString::number((double)three->value);
            ui->result->setText(value);
            stack_pop(&three);
        } else {
        ui->result->setText("Invalid input expression");
        ui->result->setReadOnly(true);
    }
}


void MainWindow::on_pushButton_GRAPH_clicked()
{
//    PLOT window;
//    window.setModal(true);
//    window.exec();
    if (_open) {
        _open->raise();
        _open->activateWindow();
    } else {
    _open = new PLOT(this);
    _open->show();
    }
}


void MainWindow::on_pushButton_TAN_3_clicked()
{
    if (_opened) {
        _opened->raise();
        _opened->activateWindow();
    } else {
    _opened = new bank(this);
    _opened->show();
    }
}

