#ifndef WDIALOG_H
#define WDIALOG_H

#include <QDialog>

namespace Ui {
class WDialog;
}

class WDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WDialog(QWidget *parent = nullptr);
    ~WDialog();

private:
    Ui::WDialog *ui;

public:
    void stO();
    void stX();
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // WDIALOG_H
