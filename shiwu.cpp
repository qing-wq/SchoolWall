#include "girlwall.h"
#include "shiwu.h"
#include "ui_shiwu.h"

ShiWU::ShiWU(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShiWU)
{
    ui->setupUi(this);
}

ShiWU::~ShiWU()
{
    delete ui;
}

void ShiWU::on_back_clicked(){
    GirlWall *girlWall = new GirlWall;
    girlWall->setGeometry(this->geometry());
    girlWall->show();
    this->close();
}
