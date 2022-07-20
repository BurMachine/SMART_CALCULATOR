/********************************************************************************
** Form generated from reading UI file 'bank.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_H
#define UI_BANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_bank
{
public:
    QLabel *label;
    QLineEdit *summa;
    QLabel *label_3;
    QLineEdit *percent;
    QLabel *label_4;
    QLineEdit *srok;
    QGroupBox *groupBox;
    QLineEdit *mounth_res;
    QGroupBox *groupBox_3;
    QLineEdit *overpay;
    QGroupBox *groupBox_2;
    QLineEdit *sum_pay;
    QPushButton *pushButton_COUNT_BANK;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;
    QLineEdit *N_pay;
    QLabel *label_6;

    void setupUi(QDialog *bank)
    {
        if (bank->objectName().isEmpty())
            bank->setObjectName(QString::fromUtf8("bank"));
        bank->resize(602, 591);
        label = new QLabel(bank);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 121, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        summa = new QLineEdit(bank);
        summa->setObjectName(QString::fromUtf8("summa"));
        summa->setGeometry(QRect(140, 50, 441, 61));
        QFont font1;
        font1.setPointSize(24);
        summa->setFont(font1);
        summa->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(bank);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 121, 41));
        label_3->setFont(font);
        percent = new QLineEdit(bank);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setGeometry(QRect(140, 140, 441, 61));
        percent->setFont(font1);
        percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(bank);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 240, 121, 41));
        label_4->setFont(font);
        srok = new QLineEdit(bank);
        srok->setObjectName(QString::fromUtf8("srok"));
        srok->setGeometry(QRect(140, 230, 441, 61));
        srok->setFont(font1);
        srok->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox = new QGroupBox(bank);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 410, 281, 81));
        mounth_res = new QLineEdit(groupBox);
        mounth_res->setObjectName(QString::fromUtf8("mounth_res"));
        mounth_res->setGeometry(QRect(10, 30, 261, 41));
        mounth_res->setFont(font);
        mounth_res->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_3 = new QGroupBox(bank);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 500, 281, 81));
        overpay = new QLineEdit(groupBox_3);
        overpay->setObjectName(QString::fromUtf8("overpay"));
        overpay->setGeometry(QRect(10, 30, 261, 41));
        overpay->setFont(font);
        overpay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_2 = new QGroupBox(bank);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 410, 271, 81));
        sum_pay = new QLineEdit(groupBox_2);
        sum_pay->setObjectName(QString::fromUtf8("sum_pay"));
        sum_pay->setGeometry(QRect(10, 30, 251, 41));
        sum_pay->setFont(font);
        sum_pay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_COUNT_BANK = new QPushButton(bank);
        pushButton_COUNT_BANK->setObjectName(QString::fromUtf8("pushButton_COUNT_BANK"));
        pushButton_COUNT_BANK->setGeometry(QRect(310, 520, 271, 61));
        pushButton_COUNT_BANK->setFont(font1);
        pushButton_COUNT_BANK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(55, 67, 135);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #001f5f, stop: 1 #0f2056);\n"
"}"));
        radioButton = new QRadioButton(bank);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(140, 10, 211, 31));
        QFont font2;
        font2.setPointSize(14);
        radioButton->setFont(font2);
        radioButton_2 = new QRadioButton(bank);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(360, 10, 221, 31));
        radioButton_2->setFont(font2);
        label_5 = new QLabel(bank);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 111, 41));
        label_5->setFont(font);
        N_pay = new QLineEdit(bank);
        N_pay->setObjectName(QString::fromUtf8("N_pay"));
        N_pay->setGeometry(QRect(140, 320, 441, 61));
        N_pay->setFont(font1);
        N_pay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(bank);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 320, 131, 61));
        label_6->setFont(font);

        retranslateUi(bank);

        QMetaObject::connectSlotsByName(bank);
    } // setupUi

    void retranslateUi(QDialog *bank)
    {
        bank->setWindowTitle(QCoreApplication::translate("bank", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("bank", "Credit amount", nullptr));
        label_3->setText(QCoreApplication::translate("bank", "Ininterest rate\n"
"(percent)", nullptr));
        label_4->setText(QCoreApplication::translate("bank", "Term\n"
"(months)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("bank", "Mounth payment", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("bank", "Overpayment", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("bank", "Summary payment", nullptr));
        pushButton_COUNT_BANK->setText(QCoreApplication::translate("bank", "COUNT", nullptr));
        radioButton->setText(QCoreApplication::translate("bank", "Annuity", nullptr));
        radioButton_2->setText(QCoreApplication::translate("bank", "Differential", nullptr));
        label_5->setText(QCoreApplication::translate("bank", "BANK CALC", nullptr));
        label_6->setText(QCoreApplication::translate("bank", "Numbers of\n"
" payments\n"
"(for differ.)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bank: public Ui_bank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_H
