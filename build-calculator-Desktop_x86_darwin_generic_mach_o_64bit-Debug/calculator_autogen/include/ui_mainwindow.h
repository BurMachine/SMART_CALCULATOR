/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_LN;
    QPushButton *pushButton_DOT;
    QPushButton *pushButton_EQUAL;
    QPushButton *pushButton_0;
    QPushButton *pushButton_DIV;
    QPushButton *pushButton_LOG;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_MULT;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_MINUS;
    QPushButton *pushButton_6;
    QPushButton *pushButton_PLUS;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_ASIN;
    QPushButton *pushButton_ATAN;
    QPushButton *pushButton_ACOS;
    QPushButton *pushButton_COS;
    QPushButton *pushButton_TAN;
    QPushButton *pushButton_SIN;
    QLineEdit *result;
    QPushButton *pushButton_LEFT;
    QPushButton *pushButton_RIGHT;
    QPushButton *pushButton_SQRT;
    QPushButton *pushButton_POWER;
    QPushButton *pushButton_XXX;
    QPushButton *pushButton_MOD;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 630);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(20, 130, 81, 91));
        QFont font;
        font.setPointSize(24);
        pushButton_AC->setFont(font);
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(70, 80, 90);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_LN = new QPushButton(centralwidget);
        pushButton_LN->setObjectName(QString::fromUtf8("pushButton_LN"));
        pushButton_LN->setGeometry(QRect(380, 130, 81, 91));
        pushButton_LN->setFont(font);
        pushButton_LN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(70, 80, 90);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_DOT = new QPushButton(centralwidget);
        pushButton_DOT->setObjectName(QString::fromUtf8("pushButton_DOT"));
        pushButton_DOT->setGeometry(QRect(200, 530, 81, 91));
        pushButton_DOT->setFont(font);
        pushButton_DOT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(70, 80, 90);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_EQUAL = new QPushButton(centralwidget);
        pushButton_EQUAL->setObjectName(QString::fromUtf8("pushButton_EQUAL"));
        pushButton_EQUAL->setGeometry(QRect(290, 530, 81, 91));
        pushButton_EQUAL->setFont(font);
        pushButton_EQUAL->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(50, 50, 99);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(20, 530, 81, 91));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_DIV = new QPushButton(centralwidget);
        pushButton_DIV->setObjectName(QString::fromUtf8("pushButton_DIV"));
        pushButton_DIV->setGeometry(QRect(290, 130, 81, 91));
        pushButton_DIV->setFont(font);
        pushButton_DIV->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(50, 50, 99);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_LOG = new QPushButton(centralwidget);
        pushButton_LOG->setObjectName(QString::fromUtf8("pushButton_LOG"));
        pushButton_LOG->setGeometry(QRect(470, 130, 81, 91));
        pushButton_LOG->setFont(font);
        pushButton_LOG->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(70, 80, 90);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(110, 230, 81, 91));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 230, 81, 91));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_MULT = new QPushButton(centralwidget);
        pushButton_MULT->setObjectName(QString::fromUtf8("pushButton_MULT"));
        pushButton_MULT->setGeometry(QRect(290, 230, 81, 91));
        pushButton_MULT->setFont(font);
        pushButton_MULT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(50, 50, 99);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(200, 230, 81, 91));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 330, 81, 91));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 430, 81, 91));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 330, 81, 91));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_MINUS = new QPushButton(centralwidget);
        pushButton_MINUS->setObjectName(QString::fromUtf8("pushButton_MINUS"));
        pushButton_MINUS->setGeometry(QRect(290, 330, 81, 91));
        pushButton_MINUS->setFont(font);
        pushButton_MINUS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(50, 50, 99);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 330, 81, 91));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_PLUS = new QPushButton(centralwidget);
        pushButton_PLUS->setObjectName(QString::fromUtf8("pushButton_PLUS"));
        pushButton_PLUS->setGeometry(QRect(290, 430, 81, 91));
        pushButton_PLUS->setFont(font);
        pushButton_PLUS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(50, 50, 99);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 430, 81, 91));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 430, 81, 91));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_ASIN = new QPushButton(centralwidget);
        pushButton_ASIN->setObjectName(QString::fromUtf8("pushButton_ASIN"));
        pushButton_ASIN->setGeometry(QRect(380, 330, 81, 91));
        pushButton_ASIN->setFont(font);
        pushButton_ASIN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        pushButton_ATAN = new QPushButton(centralwidget);
        pushButton_ATAN->setObjectName(QString::fromUtf8("pushButton_ATAN"));
        pushButton_ATAN->setGeometry(QRect(380, 530, 81, 91));
        pushButton_ATAN->setFont(font);
        pushButton_ATAN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        pushButton_ACOS = new QPushButton(centralwidget);
        pushButton_ACOS->setObjectName(QString::fromUtf8("pushButton_ACOS"));
        pushButton_ACOS->setGeometry(QRect(380, 430, 81, 91));
        pushButton_ACOS->setFont(font);
        pushButton_ACOS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        pushButton_COS = new QPushButton(centralwidget);
        pushButton_COS->setObjectName(QString::fromUtf8("pushButton_COS"));
        pushButton_COS->setGeometry(QRect(470, 330, 81, 91));
        pushButton_COS->setFont(font);
        pushButton_COS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        pushButton_TAN = new QPushButton(centralwidget);
        pushButton_TAN->setObjectName(QString::fromUtf8("pushButton_TAN"));
        pushButton_TAN->setGeometry(QRect(470, 530, 81, 91));
        pushButton_TAN->setFont(font);
        pushButton_TAN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        pushButton_SIN = new QPushButton(centralwidget);
        pushButton_SIN->setObjectName(QString::fromUtf8("pushButton_SIN"));
        pushButton_SIN->setGeometry(QRect(470, 430, 81, 91));
        pushButton_SIN->setFont(font);
        pushButton_SIN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(22, 30, 441, 91));
        result->setFont(font);
        pushButton_LEFT = new QPushButton(centralwidget);
        pushButton_LEFT->setObjectName(QString::fromUtf8("pushButton_LEFT"));
        pushButton_LEFT->setGeometry(QRect(110, 130, 81, 91));
        pushButton_LEFT->setFont(font);
        pushButton_LEFT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(50, 50, 99);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_RIGHT = new QPushButton(centralwidget);
        pushButton_RIGHT->setObjectName(QString::fromUtf8("pushButton_RIGHT"));
        pushButton_RIGHT->setGeometry(QRect(200, 130, 81, 91));
        pushButton_RIGHT->setFont(font);
        pushButton_RIGHT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(50, 50, 99);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        pushButton_SQRT = new QPushButton(centralwidget);
        pushButton_SQRT->setObjectName(QString::fromUtf8("pushButton_SQRT"));
        pushButton_SQRT->setGeometry(QRect(380, 230, 81, 91));
        pushButton_SQRT->setFont(font);
        pushButton_SQRT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        pushButton_POWER = new QPushButton(centralwidget);
        pushButton_POWER->setObjectName(QString::fromUtf8("pushButton_POWER"));
        pushButton_POWER->setGeometry(QRect(470, 230, 81, 91));
        pushButton_POWER->setFont(font);
        pushButton_POWER->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        pushButton_XXX = new QPushButton(centralwidget);
        pushButton_XXX->setObjectName(QString::fromUtf8("pushButton_XXX"));
        pushButton_XXX->setGeometry(QRect(110, 530, 81, 91));
        pushButton_XXX->setFont(font);
        pushButton_XXX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #3e447f, stop: 1 #656598);\n"
"}"));
        pushButton_MOD = new QPushButton(centralwidget);
        pushButton_MOD->setObjectName(QString::fromUtf8("pushButton_MOD"));
        pushButton_MOD->setGeometry(QRect(470, 30, 81, 91));
        pushButton_MOD->setFont(font);
        pushButton_MOD->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(70, 80, 90);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #082567);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_LN->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_DOT->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_EQUAL->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_DIV->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_LOG->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_MULT->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_MINUS->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_PLUS->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_ASIN->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_ATAN->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_ACOS->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_COS->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_TAN->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_SIN->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_LEFT->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_RIGHT->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_SQRT->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_POWER->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_XXX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_MOD->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
