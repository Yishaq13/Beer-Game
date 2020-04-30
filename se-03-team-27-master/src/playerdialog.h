#ifndef PLAYERDIALOG_H
#define PLAYERDIALOG_H

#include <QDialog>

namespace Ui {
class playerDialog;
}

class playerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit playerDialog(QWidget *parent = nullptr);
    ~playerDialog();

private slots:
    void on_pushButton_6_clicked();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::playerDialog *ui;
};

#endif // PLAYERDIALOG_H
