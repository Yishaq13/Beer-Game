#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include "creategamedialog.h"
#include "currentgamesdialog.h"

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_pushButton_clicked();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::SecDialog *ui;
    creategamedialog * CreateGameDialog;
    currentgamesdialog * CurrentGamesDialog;
};

#endif // SECDIALOG_H
