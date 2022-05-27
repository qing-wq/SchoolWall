#include "xuanzeduihuakuang.h"
#include "ui_xuanzeduihuakuang.h"
#include "girlwall.h"
#include "boywall.h"
#include "ui_boywall.h"
#include "ui_girlwall.h"
#include "global.h"

XuanZeDuiHuaKuang::XuanZeDuiHuaKuang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::XuanZeDuiHuaKuang)
{
    ui->setupUi(this);
}

XuanZeDuiHuaKuang::~XuanZeDuiHuaKuang()
{
    delete ui;
}

void XuanZeDuiHuaKuang::on_Girl_clicked()
{
    wall = "girlWall";
    GirlWall *girlWall = new GirlWall;
    girlWall->setGeometry(this->geometry());
    girlWall->show();
    this->close();
}

void XuanZeDuiHuaKuang::on_Boy_clicked()
{
    wall = "boyWall";
    BoyWall *boysWall = new BoyWall;
    boysWall->setGeometry(this->geometry());
    boysWall->show();
    this->close();
}
