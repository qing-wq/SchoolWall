#include "girlwall.h"
#include "haowu.h"
#include "ui_haowu.h"

HaoWu::HaoWu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HaoWu)
{
    ui->setupUi(this);
}

HaoWu::~HaoWu()
{
    delete ui;
}

void HaoWu::on_back_clicked(){
    GirlWall *girlWall = new GirlWall;
    girlWall->setGeometry(this->geometry());
    girlWall->show();
    this->close();
}
