#include "boydianzi.h"
#include "ui_boydianzi.h"
#include "boywall.h"

BoyDianZi::BoyDianZi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoyDianZi)
{
    ui->setupUi(this);
}

BoyDianZi::~BoyDianZi()
{
    delete ui;
}

void BoyDianZi::on_pushButton_2_clicked()
{
    BoyWall *boyWall = new BoyWall;
    boyWall->setGeometry(this->geometry());
    boyWall->show();
    this->close();
}
