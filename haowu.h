#ifndef HAOWU_H
#define HAOWU_H

#include <QMainWindow>

namespace Ui {
class HaoWu;
}

class HaoWu : public QMainWindow
{
    Q_OBJECT

public:
    explicit HaoWu(QWidget *parent = nullptr);
    ~HaoWu();

private slots:
    void on_back_clicked();

    void on_pushButton_clicked();

    void on_Delete_clicked();

private:
    Ui::HaoWu *ui;
};

#endif // HAOWU_H
