#ifndef AAAA_H
#define AAAA_H

#include <QMainWindow>

namespace Ui {
class aaaa;
}

class aaaa : public QMainWindow
{
    Q_OBJECT

public:
    explicit aaaa(QWidget *parent = nullptr);
    ~aaaa();


private:
    Ui::aaaa *ui;
};

#endif // AAAA_H
