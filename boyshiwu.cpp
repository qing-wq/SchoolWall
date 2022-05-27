#include "boyshiwu.h"
#include "ui_boyshiwu.h"
#include "boywall.h"

BoyShiWu::BoyShiWu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoyShiWu)
{
    ui->setupUi(this);
}

BoyShiWu::~BoyShiWu()
{
    delete ui;
}


void BoyShiWu::on_back_clicked()
{
    BoyWall *boyWall = new BoyWall;
    boyWall->setGeometry(this->geometry());
    boyWall->show();
    this->close();
}
