#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include"wdialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    if(this->xxx == 0){
        ui->pushButton->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}
void Widget::on_pushButton_2_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_2->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_2->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_2->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}

void Widget::on_pushButton_3_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_3->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_3->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_3->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}

void Widget::on_pushButton_4_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_4->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_4->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_4->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
}

void Widget::on_pushButton_5_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_5->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_5->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_5->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}

void Widget::on_pushButton_6_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_6->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_6->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_6->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}

void Widget::on_pushButton_7_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_7->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_7->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_7->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}

void Widget::on_pushButton_8_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_8->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_8->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_8->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}

void Widget::on_pushButton_9_clicked()
{
    if(this->xxx == 0){
        ui->pushButton_9->setText("O");
        (this->xxx)++ ;
    }
    else {
        ui->pushButton_9->setText("X");
        (this->xxx)-- ;
    }

    ui->pushButton_9->setEnabled(false);

    if(ui->pushButton->text() == "O" && ui->pushButton_2->text() == "O" && ui->pushButton_3->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
        }
    if(ui->pushButton_4->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_6->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "O" && ui->pushButton_8->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_4->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_8->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_6->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_9->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "O" && ui->pushButton_5->text() == "O" && ui->pushButton_7->text() == "O"){
        WDialog wdi(this);
        wdi.stO();
        wdi.exec();
        close();
    }



    if(ui->pushButton->text() == "X" && ui->pushButton_2->text() == "X" && ui->pushButton_3->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_4->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_6->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_7->text() == "X" && ui->pushButton_8->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton->text() == "X" && ui->pushButton_4->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_2->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_8->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_6->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();}
    if(ui->pushButton->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_9->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }
    if(ui->pushButton_3->text() == "X" && ui->pushButton_5->text() == "X" && ui->pushButton_7->text() == "X"){
        WDialog wdi(this);
        wdi.stX();
        wdi.exec();
        close();
    }

}
