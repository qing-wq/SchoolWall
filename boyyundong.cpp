#include "boyyundong.h"
#include "ui_boyyundong.h"
#include "boywall.h"

BoyYunDong::BoyYunDong(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoyYunDong)
{
    ui->setupUi(this);
}

BoyYunDong::~BoyYunDong()
{
    delete ui;
}

void BoyYunDong::on_pushButton_2_clicked()
{
    BoyWall *boyWall = new BoyWall;
    boyWall->setGeometry(this->geometry());
    boyWall->show();
    this->close();
}
