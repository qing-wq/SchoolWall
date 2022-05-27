#ifndef BOYBIAOBAI_H
#define BOYBIAOBAI_H

#include <QMainWindow>

namespace Ui {
class BoyBiaoBai;
}

class BoyBiaoBai : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoyBiaoBai(QWidget *parent = 0);
    ~BoyBiaoBai();

private slots:
    void on_back_clicked();

    void on_send_clicked();

    void on_delBtn_clicked();

private:
    Ui::BoyBiaoBai *ui;
};

#endif // BOYBIAOBAI_H
