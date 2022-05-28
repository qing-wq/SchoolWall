#include "mycomment.h"
#include "QDebug"
#include "ui_mycomment.h"
#include "mainwindow.h"
#include "girlwall.h"
#include <QDir>
#include <QString>
#include "biaobai.h"
#include "boybiaobai.h"
#include "boydianying.h"
#include "boydianzi.h"
#include "boyshiwu.h"
#include "boyyundong.h"
#include "global.h"
#include "haowu.h"
#include "meishi.h"
#include "meizhuangwall.h"
#include "shiwu.h"

QString nPath;

MyComment::MyComment(class QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyComment)
{
    ui->setupUi(this);
    nPath = "D:/mydata/" + wall;

    QDir dir(nPath);
    if (!dir.exists()) {
        QDir().mkdir(nPath);
    }
    QString fileName = nPath+ "/" + wallName + ".txt";
    // 设置模型
    QStandardItemModel *model = new QStandardItemModel(this);
    QFile file(fileName);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        if(line.startsWith(userName + ":")){    //  判断评论是否属于当前用户
            QStandardItem *item = new QStandardItem(line);
            model->appendRow(item);
        }
    }
    ui->listView->setModel(model);
    // 右击绑定事件
    ui->listView->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->listView, SIGNAL(customContextMenuRequested(const QPoint&)),
            this, SLOT(show_listView(const QPoint&)));
}

MyComment::~MyComment()
{
    delete ui;
}

void MyComment::show_listView(const QPoint& pos){
    QModelIndexList list = ui->listView->selectionModel()->selectedIndexes();
    if(!list.empty()){
        QMenu *cmenu = new QMenu(ui->listView);    // 设置右键菜单
        QAction *delete_step = new QAction(tr("delete"), this);    //  添加右键菜单选项
        delete_step->setCheckable(true);
        delete_step->setChecked(false);
        cmenu->addAction(delete_step);
        connect(delete_step, SIGNAL(triggered()), this, SLOT(onDelete()));   // 绑定删除键的槽函数
        cmenu->exec(QCursor::pos());    //在当前鼠标位置显示菜单
        ui->listView->selectionModel()->clear();
        delete cmenu;
    }
}

void MyComment::onDelete(){
    QStandardItemModel *model = dynamic_cast<QStandardItemModel*>(ui->listView->model());
    QString str = model->itemData(ui->listView->currentIndex()).values()[0].toString();   // 获取当前被点击的行的内容
    QString fileName = nPath+ "/" + wallName + ".txt";    // 在文件中将这行删除
    QFile file(fileName);
    file.open(QIODevice::ReadOnly | QIODevice::Text);    //  注意此处为ReadOnly只读模式
    QTextStream in(&file);
    QString newCtnt = "";     // 文件新内容
    while(!in.atEnd()){
        QString line = in.readLine();
        if(line == str){    //  判断评论是否属于当前用户
            continue;
        }
        newCtnt += line + "\n";
    }
    file.close();
    file.open(QIODevice::WriteOnly | QIODevice::Text);    // 以WriteOnly模式打开文件，会清空文件中原来的内容
    QTextStream out(&file);
//    out.setCodec("UTF-8");
    out << newCtnt;
    file.close();
    model->removeRow(ui->listView->currentIndex().row());    // 移除用户想删除的那一行
}

void MyComment::on_back_clicked()
{
    if(wallName == "meizhuang"){
        MeiZhuangWall *girlWall = new MeiZhuangWall;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "biaobai"){
        BiaoBai *girlWall = new BiaoBai;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "meishi"){
        MeiShi *girlWall = new MeiShi;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "shiwu"){
        ShiWU *girlWall = new ShiWU;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "haowu"){
        HaoWu *girlWall = new HaoWu;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "boybiaobai"){
        BoyBiaoBai *girlWall = new BoyBiaoBai;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "boyshiwu"){
        BoyShiWu *girlWall = new BoyShiWu;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "boydianying"){
        BoydianYing *girlWall = new BoydianYing;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "boyyundong"){
        BoyYunDong *girlWall = new BoyYunDong;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
    if(wallName == "boydianzi"){
        BoyDianZi *girlWall = new BoyDianZi;
        girlWall->setGeometry(this->geometry());
        girlWall->show();
        this->close();
    }
}

