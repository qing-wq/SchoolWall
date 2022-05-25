#include "biaobai.h"
#include "girlwall.h"
#include "ui_biaobai.h"

BiaoBai::BiaoBai(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BiaoBai)
{
    ui->setupUi(this);
}

BiaoBai::~BiaoBai()
{
    delete ui;
}

void BiaoBai::on_back_clicked(){
    GirlWall *girlWall = new GirlWall;
    girlWall->setGeometry(this->geometry());
    girlWall->show();
    this->close();
}
