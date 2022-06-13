#include "wdialog.h"
#include "ui_wdialog.h"
#include"sdialog.h"
#include "widget.h"

WDialog::WDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WDialog)
{
    ui->setupUi(this);
}

WDialog::~WDialog()
{
    delete ui;
}

void WDialog::stO(){
    ui->label->setText("恭喜! OO勝利~");

}

void WDialog::stX(){
    ui->label->setText("恭喜! XX勝利~");

}

void WDialog::on_pushButton_2_clicked()
{
    close();

}

void WDialog::on_pushButton_clicked()
{

}
