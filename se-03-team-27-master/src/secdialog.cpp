#include "secdialog.h"
#include "ui_secdialog.h"
#include <QPixmap>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    QPixmap user(":/resources/images/user.png");
    ui->label_user->setPixmap(user.scaled(200,180, Qt::KeepAspectRatio));
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_2_clicked()
{
    hide();
}

void SecDialog::on_pushButton_clicked()
{
    CreateGameDialog = new creategamedialog(this);
    CreateGameDialog->show();
}

void SecDialog::on_pushButton_4_clicked()
{
    CurrentGamesDialog = new currentgamesdialog(this);
    CurrentGamesDialog->show();
}
