#include "creategamedialog.h"
#include "ui_creategamedialog.h"
#include <QMessageBox>

creategamedialog::creategamedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creategamedialog)
{
    ui->setupUi(this);
}

creategamedialog::~creategamedialog()
{
    delete ui;
}

void creategamedialog::on_commandLinkButton_clicked()
{
    hide();
}

void creategamedialog::on_pushButton_clicked()
{
    QString Institute_name = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString number = ui->lineEdit_3->text();
    QString email = ui->lineEdit_4->text();

    unsigned int temp = number.toUInt();


    if(Institute_name != "" && password != "" && email != "")
    {
        QMessageBox::information(this, tr("Create"), tr("%1 Games created").arg(number));
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText(QString::number(temp));
        ui->lineEdit_4->setText("");
    }

}
