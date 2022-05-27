#include "boybiaobai.h"
#include "ui_boybiaobai.h"
#include "boywall.h"

BoyBiaoBai::BoyBiaoBai(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoyBiaoBai)
{
    ui->setupUi(this);
}

BoyBiaoBai::~BoyBiaoBai()
{
    delete ui;
}

void BoyBiaoBai::on_back_clicked()
{
    BoyWall *boyWall = new BoyWall;
    boyWall->setGeometry(this->geometry());
    boyWall->show();
    this->close();
}
