#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void setControl();
    int money;


private slots:
    void on_coffee100_clicked();

    void on_tea150_clicked();

    void on_cola200_clicked();

    void on_pay500_clicked();

    void on_pay100_clicked();

    void on_pay50_clicked();

    void on_pay10_clicked();

    void on_Return_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
