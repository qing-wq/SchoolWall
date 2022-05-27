#include "boywall.h"
#include "ui_boywall.h"
#include "boyshiwu.h"
#include "boybiaobai.h"
#include "boyyundong.h"
#include "boydianying.h"
#include "boydianzi.h"

BoyWall::BoyWall(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoyWall)
{
    ui->setupUi(this);
}

BoyWall::~BoyWall()
{
    delete ui;
}


//男——失物招领点击
void BoyWall::on_shiwuM_clicked()
{
    BoyShiWu *boyShiWu = new BoyShiWu;
    boyShiWu->setGeometry(this->geometry());
    boyShiWu->show();
    this->close();
}
//男——表白墙点击
void BoyWall::on_biaoBaiM_clicked()
{
    BoyBiaoBai *boyBiaoBai = new BoyBiaoBai;
    boyBiaoBai->setGeometry(this->geometry());
    boyBiaoBai->show();
    this->close();
}
//男——运动专栏点击
void BoyWall::on_yundongM_clicked()
{
    BoyYunDong *boyYunDong = new BoyYunDong;
    boyYunDong->setGeometry(this->geometry());
    boyYunDong->show();
    this->close();
}
//男——电影推荐点击
void BoyWall::on_dianyingM_clicked()
{
    BoydianYing *boyDianYing = new BoydianYing;
    boyDianYing->setGeometry(this->geometry());
    boyDianYing->show();
    this->close();
}
//男——电子产品点击
void BoyWall::on_dianziM_clicked()
{
    BoyDianZi *boyDianZi = new BoyDianZi;
    boyDianZi->setGeometry(this->geometry());
    boyDianZi->show();
    this->close();
}
