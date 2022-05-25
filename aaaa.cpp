#include "aaaa.h"
#include "ui_aaaa.h"

aaaa::aaaa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::aaaa)
{
    ui->setupUi(this);
}

aaaa::~aaaa()
{
    delete ui;
}


