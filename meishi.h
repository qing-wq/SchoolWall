#ifndef MEISHI_H
#define MEISHI_H

#include <QMainWindow>

namespace Ui {
class MeiShi;
}

class MeiShi : public QMainWindow
{
    Q_OBJECT

public:
    explicit MeiShi(QWidget *parent = nullptr);
    ~MeiShi();

private slots:
    void on_back_clicked();

private:
    Ui::MeiShi *ui;
};

#endif // MEISHI_H
