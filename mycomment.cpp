#include "mycomment.h"
#include "QDebug"
#include "ui_mycomment.h"
#include "mainwindow.h"
#include "girlwall.h"
#include <QDir>
#include "global.h"

QString nPath;

MyComment::MyComment(class QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyComment)
{
    ui->setupUi(this);
    nPath = "D:/mydata/userdata/" + userName;
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
        qDebug() << line << endl;
        QStandardItem *item = new QStandardItem(line);
        model->appendRow(item);
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
    qDebug() << "当前索引：" << ui->listView->currentIndex();
    QStandardItemModel *model = dynamic_cast<QStandardItemModel*>(ui->listView->model());
    model->removeRow(ui->listView->currentIndex().row());
}


