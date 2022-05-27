#ifndef XUANZEDUIHUAKUANG_H
#define XUANZEDUIHUAKUANG_H

#include <QMainWindow>

namespace Ui {
class XuanZeDuiHuaKuang;
}

class XuanZeDuiHuaKuang : public QMainWindow
{
    Q_OBJECT

public:
    explicit XuanZeDuiHuaKuang(QWidget *parent = 0);
    ~XuanZeDuiHuaKuang();

private slots:
    void on_Girl_clicked();

    void on_Boy_clicked();

private:
    Ui::XuanZeDuiHuaKuang *ui;
};

#endif // XUANZEDUIHUAKUANG_H
