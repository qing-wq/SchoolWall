#include "girlwall.h"
#include "ui_girlwall.h"
#include "meizhuangwall.h"
#include "meishi.h"
#include "haowu.h"
#include "biaobai.h"
#include <shiwu.h>
#include "global.h"


GirlWall::GirlWall(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GirlWall)
{
    ui->setupUi(this);
}

GirlWall::~GirlWall()
{
    delete ui;
}

void GirlWall::on_meizhuang_clicked(){
    wallName = "meizhuang";
    MeiZhuangWall *meiZhuangWall = new MeiZhuangWall;
    meiZhuangWall->setGeometry(this->geometry());
    meiZhuangWall->show();
    this->close();
}

void GirlWall::on_shiwu_clicked(){
    wallName = "shiwu";
    ShiWU *shiWu = new ShiWU;
    shiWu->setGeometry(this->geometry());
    shiWu->show();
    this->close();
}

void GirlWall::on_meishi_clicked(){
    wallName = "meishi";
    MeiShi *meishi = new MeiShi;
    meishi->setGeometry(this->geometry());
    meishi->show();
    this->close();
}

void GirlWall::on_haowu_clicked(){
    wallName = "haowu";
    HaoWu *haowu = new HaoWu;
    haowu->setGeometry(this->geometry());
    haowu->show();
    this->close();
}

void GirlWall::on_biaobai_clicked(){
    wallName = "biaobai";
    BiaoBai *biaobai = new BiaoBai;
    biaobai->setGeometry(this->geometry());
    biaobai->show();
    this->close();
}
