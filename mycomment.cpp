#include "mycomment.h"
#include "QDebug"
#include "ui_mycomment.h"
#include "mainwindow.h"
#include "girlwall.h"
#include <QDir>
#include <QString>
#include "global.h"

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
    QString newCtnt = "";
    while(!in.atEnd()){
        QString line = in.readLine();
        qDebug() << "line:" <<  line << endl;
        if(line == str){    //  判断评论是否属于当前用户
            continue;
        }
        newCtnt += line + "\n";
    }
    file.close();
    file.open(QIODevice::WriteOnly | QIODevice::Text);    // 以WriteOnly模式打开文件，会清空文件中原来的内容
    QTextStream out(&file);
    out.setCodec("UTF-8");
    qDebug() << newCtnt << endl;
    out << "newCtnt:" << newCtnt;
    file.close();
    model->removeRow(ui->listView->currentIndex().row());    // 移除用户想删除的那一行
}


