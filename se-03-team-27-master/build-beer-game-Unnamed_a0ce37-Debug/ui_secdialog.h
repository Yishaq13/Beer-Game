/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label_user;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(822, 612);
        SecDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        groupBox = new QGroupBox(SecDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(250, 40, 261, 521));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    font: bold;\n"
"    border: 1px solid silver;\n"
"    border-radius: 12px;\n"
"    margin-top: 12px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 7px;\n"
"    padding: 0px 5px 0px 5px;\n"
"}\n"
"	color: rgb(0, 0, 0);"));
        label_user = new QLabel(groupBox);
        label_user->setObjectName(QString::fromUtf8("label_user"));
        label_user->setGeometry(QRect(30, 30, 201, 181));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 240, 121, 17));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 240, 67, 17));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 220, 201, 17));
        label->setStyleSheet(QString::fromUtf8("font: 75 italic 9pt \"Noto Sans\";\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 310, 244, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 75 10pt \"Noto Sans\";"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 75 10pt \"Noto Sans\";"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 75 10pt \"Noto Sans\";"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"font: 75 10pt \"Noto Sans\";"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(240,70,80);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 16px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_2);


        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Instructor", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_user->setText(QString());
        label_2->setText(QApplication::translate("SecDialog", "Instructor Id : ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SecDialog", "128", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SecDialog", "test@jacobs-univeristy.de", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SecDialog", "Create Game", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("SecDialog", "See Current Games", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("SecDialog", "User Settings", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("SecDialog", "Game Settings", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("SecDialog", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
