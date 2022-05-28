#ifndef BIAOBAI_H
#define BIAOBAI_H

#include <QMainWindow>

namespace Ui {
class BiaoBai;
}

class BiaoBai : public QMainWindow
{
    Q_OBJECT

public:
    explicit BiaoBai(QWidget *parent = nullptr);
    ~BiaoBai();

private slots:
    void on_back_clicked();

    void on_Delete_clicked();

    void on_pushButton_clicked();

private:
    Ui::BiaoBai *ui;
};

#endif // BIAOBAI_H
