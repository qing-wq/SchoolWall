#include "boydianying.h"
#include "ui_boydianying.h"
#include "boywall.h"

BoydianYing::BoydianYing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoydianYing)
{
    ui->setupUi(this);
}

BoydianYing::~BoydianYing()
{
    delete ui;
}

void BoydianYing::on_back_clicked()
{
    BoyWall *boyWall = new BoyWall;
    boyWall->setGeometry(this->geometry());
    boyWall->show();
    this->close();
}
