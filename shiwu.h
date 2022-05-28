#ifndef SHIWU_H
#define SHIWU_H

#include <QMainWindow>

namespace Ui {
class ShiWU;
}

class ShiWU : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShiWU(QWidget *parent = nullptr);
    ~ShiWU();

private slots:
    void on_back_clicked();

    void on_sent_clicked();

    void on_Delete_clicked();

private:
    Ui::ShiWU *ui;
};

#endif // SHIWU_H
