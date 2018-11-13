#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    money = 0;
    setControl();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setControl() {
    ui->number->display(money);
    ui->coffee100->setEnabled(money >= 100);
    ui->tea150->setEnabled(money >= 150);
    ui->cola200->setEnabled(money >= 200);
}

void Widget::on_coffee100_clicked()
{
    money -= 100;
    setControl();
}

void Widget::on_tea150_clicked()
{
    money -= 150;
    setControl();
}



void Widget::on_cola200_clicked()
{
    money -= 200;
    setControl();
}

void Widget::on_pay500_clicked()
{
    money += 500;
    setControl();
}

void Widget::on_pay100_clicked()
{
    money += 100;
    setControl();
}

void Widget::on_pay50_clicked()
{
    money += 50;
    setControl();
}

void Widget::on_pay10_clicked()
{
    money += 10;
    setControl();
}

void Widget::on_Return_clicked()
{
    int c500 = 0, c100 = 0, c50 = 0, c10 = 0;

    while(money > 0)
    {
        if(money >= 500)
        {
            money -= 500;
            c500++;
        }
        else if(money>= 100)
        {
            money -= 100;
            c100++;
        }
        else if(money >= 50)
        {
            money -= 50;
            c50++;
        }
        else if(money >= 10)
        {
            money -= 10;
            c10++;
        }
        else
            printf("ERROR\n");
    }

    setControl();
    QMessageBox::information(this, "Return", QString("500 : %d\n100 : %d\n50 : %d\n10 : %d\ncoins are returned!").arg(c500).arg(c100).arg(c50).arg(c10));
}
