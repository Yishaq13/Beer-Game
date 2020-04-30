#include "currentgamesdialog.h"
#include "ui_currentgamesdialog.h"

currentgamesdialog::currentgamesdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::currentgamesdialog)
{
    ui->setupUi(this);
    for(unsigned int i=0; i<25; i++)
        {
            ui->listWidget->addItem(QString::number(i) + " row");
        }


}

currentgamesdialog::~currentgamesdialog()
{
    delete ui;
}


void currentgamesdialog::on_commandLinkButton_clicked()
{
    hide();
}
