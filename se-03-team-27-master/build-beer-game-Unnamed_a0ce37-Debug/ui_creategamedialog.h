/********************************************************************************
** Form generated from reading UI file 'creategamedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGAMEDIALOG_H
#define UI_CREATEGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creategamedialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *creategamedialog)
    {
        if (creategamedialog->objectName().isEmpty())
            creategamedialog->setObjectName(QString::fromUtf8("creategamedialog"));
        creategamedialog->resize(462, 342);
        creategamedialog->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(creategamedialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 371, 241));
        groupBox->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"font: 75 10pt \"Noto Sans\";\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 200, 87, 29));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"Noto Sans Myanmar UI\";\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(3, 33, 168);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 369, 148));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        lineEdit_3->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setInputMethodHints(Qt::ImhEmailCharactersOnly);

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        commandLinkButton = new QCommandLinkButton(creategamedialog);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(210, 310, 251, 31));
        commandLinkButton->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));

        retranslateUi(creategamedialog);

        QMetaObject::connectSlotsByName(creategamedialog);
    } // setupUi

    void retranslateUi(QDialog *creategamedialog)
    {
        creategamedialog->setWindowTitle(QApplication::translate("creategamedialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("creategamedialog", "Create Games", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("creategamedialog", "Create", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("creategamedialog", "Name of Institute/Class:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("creategamedialog", "Instructor password:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("creategamedialog", "Number of games to be created:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("creategamedialog", "Email:       ", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("creategamedialog", "Go back to Instructor welcome Page", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class creategamedialog: public Ui_creategamedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGAMEDIALOG_H
