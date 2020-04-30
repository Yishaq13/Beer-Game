#ifndef CREATEGAMEDIALOG_H
#define CREATEGAMEDIALOG_H

#include <QDialog>



namespace Ui {
class creategamedialog;
class currentgamesdialog;
}

class creategamedialog : public QDialog
{
    Q_OBJECT

public:
    explicit creategamedialog(QWidget *parent = 0);
    ~creategamedialog();

private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::creategamedialog *ui;
};


#endif // CREATEGAMEDIALOG_H
