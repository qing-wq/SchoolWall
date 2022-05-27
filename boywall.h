#ifndef BOYWALL_H
#define BOYWALL_H

#include <QMainWindow>

namespace Ui {
class BoyWall;
}

class BoyWall : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoyWall(QWidget *parent = 0);
    ~BoyWall();

private slots:

    void on_shiwuM_clicked();

    void on_biaoBaiM_clicked();

    void on_yundongM_clicked();

    void on_dianyingM_clicked();

    void on_dianziM_clicked();

private:
    Ui::BoyWall *ui;
};

#endif // BOYWALL_H
