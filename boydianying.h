#ifndef BOYDIANYING_H
#define BOYDIANYING_H

#include <QMainWindow>

namespace Ui {
class BoydianYing;
}

class BoydianYing : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoydianYing(QWidget *parent = 0);
    ~BoydianYing();

private slots:
    void on_back_clicked();

    void on_send_clicked();

    void on_delBtn_clicked();

private:
    Ui::BoydianYing *ui;
};

#endif // BOYDIANYING_H
