#include "playerdialog.h"
#include "ui_playerdialog.h"

playerDialog::playerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::playerDialog)
{
    ui->setupUi(this);
    QPixmap user(":/resources/images/user.png");
    ui->label_user->setPixmap(user.scaled(200,200, Qt::KeepAspectRatio));

    QPixmap retailer(":/resources/images/retailer.png");
    ui->label_retailer->setPixmap(retailer.scaled(100,100, Qt::KeepAspectRatio));

    QPixmap wholesaler(":/resources/images/wholesaler.png");
    ui->label_wholesaler->setPixmap(wholesaler.scaled(100,100, Qt::KeepAspectRatio));

    QPixmap distributor(":/resources/images/distributor.png");
    ui->label_distributor->setPixmap(distributor.scaled(100,100, Qt::KeepAspectRatio));

    QPixmap factory(":/resources/images/factory.png");
    ui->label_factory->setPixmap(factory.scaled(100,100, Qt::KeepAspectRatio));

}

playerDialog::~playerDialog()
{
    delete ui;
}

void playerDialog::on_pushButton_2_clicked()
{
    hide();
}

void playerDialog::on_pushButton_6_clicked()
{
}
