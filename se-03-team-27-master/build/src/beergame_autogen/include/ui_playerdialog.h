/********************************************************************************
** Form generated from reading UI file 'playerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERDIALOG_H
#define UI_PLAYERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_playerDialog
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
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_JoinGameId;
    QLineEdit *lineEdit_useremail;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_retailer;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_wholesaler;
    QPushButton *pushButton_8;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_distributor;
    QPushButton *pushButton_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_factory;
    QPushButton *pushButton_10;
    QLabel *label_5;

    void setupUi(QDialog *playerDialog)
    {
        if (playerDialog->objectName().isEmpty())
            playerDialog->setObjectName(QStringLiteral("playerDialog"));
        playerDialog->resize(822, 600);
        groupBox = new QGroupBox(playerDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 231, 451));
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
        label_user->setGeometry(QRect(20, 30, 191, 171));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 230, 121, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 230, 67, 17));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 210, 201, 17));
        label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 270, 204, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

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

        horizontalLayoutWidget = new QWidget(playerDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(290, 70, 501, 491));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(horizontalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"    font: bold;\n"
"	font-size:18px;\n"
"    border: 1px solid silver;\n"
"    border-radius: 12px;\n"
"    margin-top: 8px;\n"
"    padding: 15px 5px 10px 5px;\n"
"background-color: rgb(250, 250, 250);\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 7px;\n"
"    padding: 0px 5px 0px 5px;\n"
"}"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 391, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_JoinGameId = new QLabel(layoutWidget);
        label_JoinGameId->setObjectName(QStringLiteral("label_JoinGameId"));
        QFont font;
        font.setPointSize(12);
        label_JoinGameId->setFont(font);

        horizontalLayout_2->addWidget(label_JoinGameId);

        lineEdit_useremail = new QLineEdit(layoutWidget);
        lineEdit_useremail->setObjectName(QStringLiteral("lineEdit_useremail"));
        lineEdit_useremail->setMaxLength(32751);

        horizontalLayout_2->addWidget(lineEdit_useremail);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 90, 131, 21));
        QFont font1;
        font1.setPointSize(14);
        label_4->setFont(font1);
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(90, 140, 321, 141));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_retailer = new QLabel(horizontalLayoutWidget_2);
        label_retailer->setObjectName(QStringLiteral("label_retailer"));
        label_retailer->setLayoutDirection(Qt::LeftToRight);
        label_retailer->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_retailer);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: rgb(67,102,48);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 12px;\n"
"    padding: 6px;\n"
"color: white;\n"
"}"));

        verticalLayout->addWidget(pushButton_6);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_wholesaler = new QLabel(horizontalLayoutWidget_2);
        label_wholesaler->setObjectName(QStringLiteral("label_wholesaler"));
        label_wholesaler->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_wholesaler);

        pushButton_8 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: rgb(55,69,156);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 12px;\n"
"    padding: 6px;\n"
"color: white;\n"
"}"));

        verticalLayout_5->addWidget(pushButton_8);


        horizontalLayout_5->addLayout(verticalLayout_5);

        horizontalLayoutWidget_3 = new QWidget(groupBox_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(90, 300, 321, 141));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_distributor = new QLabel(horizontalLayoutWidget_3);
        label_distributor->setObjectName(QStringLiteral("label_distributor"));
        label_distributor->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_distributor);

        pushButton_9 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: rgb(207,163,43);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 12px;\n"
"    padding: 6px;\n"
"color: white;\n"
"}"));

        verticalLayout_4->addWidget(pushButton_9);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_factory = new QLabel(horizontalLayoutWidget_3);
        label_factory->setObjectName(QStringLiteral("label_factory"));
        label_factory->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_factory);

        pushButton_10 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: rgb(240,70,80);\n"
"    border-style: outset;\n"
"    border-radius: 10px;\n"
"    font: bold 12px;\n"
"    padding: 6px;\n"
"color: white;\n"
"}"));

        verticalLayout_6->addWidget(pushButton_10);


        horizontalLayout_6->addLayout(verticalLayout_6);


        horizontalLayout->addWidget(groupBox_2);

        label_5 = new QLabel(playerDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 30, 151, 41));
        QFont font2;
        font2.setPointSize(24);
        label_5->setFont(font2);
        QWidget::setTabOrder(pushButton_2, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_5);
        QWidget::setTabOrder(pushButton_5, lineEdit_useremail);
        QWidget::setTabOrder(lineEdit_useremail, pushButton);

        retranslateUi(playerDialog);

        QMetaObject::connectSlotsByName(playerDialog);
    } // setupUi

    void retranslateUi(QDialog *playerDialog)
    {
        playerDialog->setWindowTitle(QApplication::translate("playerDialog", "Player", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_user->setText(QString());
        label_2->setText(QApplication::translate("playerDialog", "Player Id : ", Q_NULLPTR));
        label_3->setText(QApplication::translate("playerDialog", "428", Q_NULLPTR));
        label->setText(QApplication::translate("playerDialog", "player@jacobs-univeristy.de", Q_NULLPTR));
        pushButton->setText(QApplication::translate("playerDialog", "Join Game", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("playerDialog", "See Current Games", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("playerDialog", "Game Settings", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("playerDialog", "Exit", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("playerDialog", "Join Game", Q_NULLPTR));
        label_JoinGameId->setText(QApplication::translate("playerDialog", "Game Id ", Q_NULLPTR));
        label_4->setText(QApplication::translate("playerDialog", "Select Role", Q_NULLPTR));
        label_retailer->setText(QString());
        pushButton_6->setText(QApplication::translate("playerDialog", "Retailer", Q_NULLPTR));
        label_wholesaler->setText(QString());
        pushButton_8->setText(QApplication::translate("playerDialog", "Wholesaler", Q_NULLPTR));
        label_distributor->setText(QString());
        pushButton_9->setText(QApplication::translate("playerDialog", "Distributor", Q_NULLPTR));
        label_factory->setText(QString());
        pushButton_10->setText(QApplication::translate("playerDialog", "Factory", Q_NULLPTR));
        label_5->setText(QApplication::translate("playerDialog", "Welcome", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class playerDialog: public Ui_playerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERDIALOG_H
