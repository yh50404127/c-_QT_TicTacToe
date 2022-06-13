#include "sdialog.h"
#include "ui_sdialog.h"

SDialog::SDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SDialog)
{
    ui->setupUi(this);
}

SDialog::~SDialog()
{
    delete ui;
}

void SDialog::on_pushButton_clicked()
{
    accept();
}
