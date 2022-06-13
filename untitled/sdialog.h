#ifndef SDIALOG_H
#define SDIALOG_H

#include <QDialog>

namespace Ui {
class SDialog;
}

class SDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SDialog(QWidget *parent = nullptr);
    ~SDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SDialog *ui;
};

#endif // SDIALOG_H
