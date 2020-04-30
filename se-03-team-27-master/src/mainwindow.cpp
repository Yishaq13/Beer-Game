#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/images/beergame.png");
    QPixmap cover(":/resources/images/cover.png");
    ui->label_logo->setPixmap(pix.scaled(200,180, Qt::KeepAspectRatio));
    ui->label_cover->setPixmap(cover.scaled(1000,1000, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_useremail->text();
    QString password = ui->lineEdit_password->text();
    bool isInstructor = ui->checkBox_isInstructor->checkState();
    if(username == "test" && password =="1234" && isInstructor){
        QMessageBox::information(this,"Instructor Login", "Username and password is correct");
        hide();
        secDialog = new SecDialog(this);
        secDialog->show();
    }else if (username == "player" && password =="1234" && !isInstructor){
        QMessageBox::information(this,"Player Login", "Username and password is correct");
        hide();
        myplayer = new playerDialog(this);
        myplayer->show();
    }else
    {
        QMessageBox::warning(this,"Login", "Username and password is not correct");
    }
}
