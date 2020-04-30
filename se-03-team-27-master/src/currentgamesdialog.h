#ifndef CURRENTGAMESDIALOG_H
#define CURRENTGAMESDIALOG_H

#include <QDialog>

namespace Ui {
class currentgamesdialog;
}

class currentgamesdialog : public QDialog
{
    Q_OBJECT

public:
    explicit currentgamesdialog(QWidget *parent = 0);
    ~currentgamesdialog();

private slots:

    void on_commandLinkButton_clicked();

private:
    Ui::currentgamesdialog *ui;
};

#endif // CURRENTGAMESDIALOG_H
