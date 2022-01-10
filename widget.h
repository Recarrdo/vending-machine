#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int money = 0;

    void changeMoney(int coin);
    void setControl();

private slots:
    void on_pdCoin500_clicked();

    void on_pdCoin100_clicked();

    void on_pdCoin50_clicked();

    void on_pdCoin10_clicked();

    void on_pbCoffee_clicked();

    void on_pbTee_clicked();

    void on_pbMilk_clicked();

    void on_reset_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
