/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_useremail;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QCheckBox *checkBox_isInstructor;
    QPushButton *pushButton_Login;
    QLabel *label_3;
    QLabel *label_logo;
    QLabel *label_cover;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(882, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(570, 300, 251, 241));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	color: rgb(0, 0, 0);\n"
"    font: bold;\n"
"    border: 2px solid silver;\n"
"    border-radius: 8px;\n"
"    margin-top: 6px;\n"
"    padding: 20px 5px 10px 5px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 7px;\n"
"    padding: 0px 5px 0px 5px;\n"
"}"));
        groupBox->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label);

        lineEdit_useremail = new QLineEdit(groupBox);
        lineEdit_useremail->setObjectName(QString::fromUtf8("lineEdit_useremail"));
        lineEdit_useremail->setMaxLength(32751);

        horizontalLayout_2->addWidget(lineEdit_useremail);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label_2);

        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        horizontalLayout->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout);

        checkBox_isInstructor = new QCheckBox(groupBox);
        checkBox_isInstructor->setObjectName(QString::fromUtf8("checkBox_isInstructor"));
        checkBox_isInstructor->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(checkBox_isInstructor);

        pushButton_Login = new QPushButton(groupBox);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(106,208,116);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}"));

        verticalLayout->addWidget(pushButton_Login);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 220, 181, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(23);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setGeometry(QRect(560, 30, 161, 181));
        label_cover = new QLabel(centralwidget);
        label_cover->setObjectName(QString::fromUtf8("label_cover"));
        label_cover->setGeometry(QRect(0, 0, 501, 571));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(570, 270, 241, 17));
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        label_logo->raise();
        groupBox->raise();
        label_3->raise();
        label_cover->raise();
        label_4->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 882, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "SignIn", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "User Email", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Password ", 0, QApplication::UnicodeUTF8));
        checkBox_isInstructor->setText(QApplication::translate("MainWindow", "Instructor", 0, QApplication::UnicodeUTF8));
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Beer Game", 0, QApplication::UnicodeUTF8));
        label_logo->setText(QString());
        label_cover->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Your Solution To Beer Supply Chain ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
