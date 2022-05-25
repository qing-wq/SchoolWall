#ifndef GIRLWALL_H
#define GIRLWALL_H

#include <QMainWindow>



namespace Ui {
class GirlWall;
}

class GirlWall : public QMainWindow
{
    Q_OBJECT

public:
    explicit GirlWall(QWidget *parent = nullptr);
    ~GirlWall();

public:
//    static QString wallName;

private slots:
    void on_meizhuang_clicked();

    void on_shiwu_clicked();

    void on_biaobai_clicked();

    void on_haowu_clicked();

    void on_meishi_clicked();

private:
    Ui::GirlWall *ui;
};

#endif // GIRLWALL_H
