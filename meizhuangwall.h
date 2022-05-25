#ifndef MEIZHUANGWALL_H
#define MEIZHUANGWALL_H

#include <mainwindow.h>

namespace Ui {
class MeiZhuangWall;
}

class MeiZhuangWall : public QMainWindow
{
    Q_OBJECT

public:
    explicit MeiZhuangWall(QWidget *parent = nullptr);
    ~MeiZhuangWall();

private slots:
    void on_back_clicked();
    void on_send_clicked();
    void on_delBtn_clicked();

private:
    Ui::MeiZhuangWall *ui;
};

#endif // MEIZHUANGWALL_H
