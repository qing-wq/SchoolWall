#ifndef BOYSHIWU_H
#define BOYSHIWU_H

#include <QMainWindow>

namespace Ui {
class BoyShiWu;
}

class BoyShiWu : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoyShiWu(QWidget *parent = 0);
    ~BoyShiWu();

private slots:
    void on_back_clicked();

    void on_send_clicked();

    void on_delBtn_clicked();

private:
    Ui::BoyShiWu *ui;
};

#endif // BOYSHIWU_H
