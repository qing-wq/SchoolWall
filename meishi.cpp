#include "girlwall.h"
#include "meishi.h"
#include "ui_meishi.h"

MeiShi::MeiShi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MeiShi)
{
    ui->setupUi(this);
}

MeiShi::~MeiShi()
{
    delete ui;
}

void MeiShi::on_back_clicked(){
        GirlWall *girlWall = new GirlWall;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
}
