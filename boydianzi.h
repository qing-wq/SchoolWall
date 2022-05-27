#ifndef BOYDIANZI_H
#define BOYDIANZI_H

#include <QMainWindow>

namespace Ui {
class BoyDianZi;
}

class BoyDianZi : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoyDianZi(QWidget *parent = 0);
    ~BoyDianZi();

private slots:
    void on_back_clicked();

    void on_delBtn_clicked();

    void on_send_clicked();

private:
    Ui::BoyDianZi *ui;
};

#endif // BOYDIANZI_H
