/********************************************************************************
** Form generated from reading UI file 'plot.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_H
#define UI_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PLOT
{
public:
    QCustomPlot *plot_res;
    QLineEdit *expression;
    QPushButton *pushButton_GO_BANK;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *Xmin;
    QLabel *label_2;
    QLineEdit *Xmax;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *Ymin;
    QLabel *label_8;
    QLineEdit *Ymax;
    QLabel *label_3;
    QLineEdit *Step;
    QLabel *label_4;
    QLineEdit *x_value;

    void setupUi(QDialog *PLOT)
    {
        if (PLOT->objectName().isEmpty())
            PLOT->setObjectName(QString::fromUtf8("PLOT"));
        PLOT->resize(862, 733);
        plot_res = new QCustomPlot(PLOT);
        plot_res->setObjectName(QString::fromUtf8("plot_res"));
        plot_res->setGeometry(QRect(20, 20, 821, 541));
        expression = new QLineEdit(PLOT);
        expression->setObjectName(QString::fromUtf8("expression"));
        expression->setGeometry(QRect(350, 580, 491, 61));
        QFont font;
        font.setPointSize(14);
        expression->setFont(font);
        pushButton_GO_BANK = new QPushButton(PLOT);
        pushButton_GO_BANK->setObjectName(QString::fromUtf8("pushButton_GO_BANK"));
        pushButton_GO_BANK->setGeometry(QRect(680, 650, 151, 61));
        QFont font1;
        font1.setPointSize(24);
        pushButton_GO_BANK->setFont(font1);
        pushButton_GO_BANK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        layoutWidget = new QWidget(PLOT);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 560, 328, 149));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        Xmin = new QLineEdit(groupBox);
        Xmin->setObjectName(QString::fromUtf8("Xmin"));

        verticalLayout->addWidget(Xmin);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        Xmax = new QLineEdit(groupBox);
        Xmax->setObjectName(QString::fromUtf8("Xmax"));

        verticalLayout->addWidget(Xmax);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);

        Ymin = new QLineEdit(groupBox_2);
        Ymin->setObjectName(QString::fromUtf8("Ymin"));

        verticalLayout_4->addWidget(Ymin);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        Ymax = new QLineEdit(groupBox_2);
        Ymax->setObjectName(QString::fromUtf8("Ymax"));

        verticalLayout_4->addWidget(Ymax);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        label_3 = new QLabel(PLOT);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 670, 31, 21));
        Step = new QLineEdit(PLOT);
        Step->setObjectName(QString::fromUtf8("Step"));
        Step->setGeometry(QRect(390, 670, 101, 21));
        label_4 = new QLabel(PLOT);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 670, 51, 21));
        x_value = new QLineEdit(PLOT);
        x_value->setObjectName(QString::fromUtf8("x_value"));
        x_value->setGeometry(QRect(560, 670, 101, 21));

        retranslateUi(PLOT);

        QMetaObject::connectSlotsByName(PLOT);
    } // setupUi

    void retranslateUi(QDialog *PLOT)
    {
        PLOT->setWindowTitle(QCoreApplication::translate("PLOT", "Dialog", nullptr));
        pushButton_GO_BANK->setText(QCoreApplication::translate("PLOT", "GO", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PLOT", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("PLOT", "X min", nullptr));
        label_2->setText(QCoreApplication::translate("PLOT", "X max", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PLOT", "GroupBox", nullptr));
        label_7->setText(QCoreApplication::translate("PLOT", "Y min", nullptr));
        label_8->setText(QCoreApplication::translate("PLOT", "Y max", nullptr));
        label_3->setText(QCoreApplication::translate("PLOT", "Step", nullptr));
        label_4->setText(QCoreApplication::translate("PLOT", "X value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PLOT: public Ui_PLOT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_H
