/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
            SecDialog->setObjectName(QStringLiteral("SecDialog"));
        SecDialog->resize(822, 600);
        SecDialog->setStyleSheet(QStringLiteral("background-color: rgb(240, 240, 240);"));
        groupBox = new QGroupBox(SecDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(280, 40, 241, 521));
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
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
"}"));
        label_user = new QLabel(groupBox);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(20, 20, 201, 181));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 240, 121, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 240, 67, 17));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 220, 201, 17));
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 310, 221, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Instructor", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_user->setText(QString());
        label_2->setText(QApplication::translate("SecDialog", "Instructor Id : ", Q_NULLPTR));
        label_3->setText(QApplication::translate("SecDialog", "128", Q_NULLPTR));
        label->setText(QApplication::translate("SecDialog", "test@jacobs-univeristy.de", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SecDialog", "Create Game", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SecDialog", "See Current Games", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SecDialog", "User Settings", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("SecDialog", "Game Settings", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SecDialog", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
