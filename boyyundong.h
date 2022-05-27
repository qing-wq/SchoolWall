#ifndef BOYYUNDONG_H
#define BOYYUNDONG_H

#include <QMainWindow>

namespace Ui {
class BoyYunDong;
}

class BoyYunDong : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoyYunDong(QWidget *parent = 0);
    ~BoyYunDong();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::BoyYunDong *ui;
};

#endif // BOYYUNDONG_H
