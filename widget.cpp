#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setControl();
}

Widget::~Widget()
{
    delete ui;
}



void Widget::changeMoney(int coin)
{
   money += coin;
   ui->lcdNumber->display(money);
   setControl();
}

void Widget::setControl()
{
    ui->pbCoffee->setEnabled(money >= 200);
    ui->pbTee->setEnabled(money >= 150);
    ui->pbMilk->setEnabled(money >= 100);
}


void Widget::on_pdCoin500_clicked()
{
   changeMoney(500);
}

void Widget::on_pdCoin100_clicked()
{
   changeMoney(100);
}


void Widget::on_pdCoin50_clicked()
{
   changeMoney(50);
}


void Widget::on_pdCoin10_clicked()
{
   changeMoney(10);
}


void Widget::on_pbCoffee_clicked()
{
    changeMoney(-200);
}


void Widget::on_pbTee_clicked()
{
    changeMoney(-150);
}


void Widget::on_pbMilk_clicked()
{
    changeMoney(-100);
}

void Widget::on_reset_clicked()
{
    int dfive = 0;
    int done = 0;
    int five = 0;
    int one = 0;

    dfive = money / 500;
    money = money % 500;
    done = money / 100;
    money = money % 100;
    five = money / 50;
    money = money % 50;
    one = money / 10;

    QMessageBox::information(nullptr,  "Change", QString("500: %1, 100: %2, 50: %3, 10: %4").arg(dfive) .arg(done) .arg(five) .arg(one));
}

