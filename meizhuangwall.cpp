#include "QDebug"
#include "girlwall.h"
#include "meizhuangwall.h"
#include "ui_meizhuangwall.h"
#include "QMessageBox"
#include "QDir"
#include "QTextStream"
#include "mainwindow.h"
#include "qdatetime.h"
#include "mycomment.h"
#include "global.h"

QString Path = "D:/mydata/girlWall",nowPath = Path + "/meizhuang.txt";

MeiZhuangWall::MeiZhuangWall(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MeiZhuangWall)
{
    ui->setupUi(this);
    QDir nowDir(Path);
    if (!nowDir.exists()) {
        QDir().mkdir(Path);
    }
    QFile file(nowPath);
    if(file.open(QIODevice::ReadWrite | QIODevice::Text)){     // 打开文件
        QTextStream in(&file);   // 构建QTextStream读取文本文件
        ui->textBrowser->setPlainText(in.readAll());  // 将所有文本读取到文件后显示出来
        file.close();
    }else {
        QMessageBox::warning(this,tr("Error"),tr("read file error:").arg(file.errorString()));
    }
    file.close();
}

MeiZhuangWall::~MeiZhuangWall()
{
    delete ui;
}

void MeiZhuangWall::on_back_clicked(){
    GirlWall *girlWall = new GirlWall;
    girlWall->setGeometry(this->geometry());
    girlWall->show();
    this->close();
}

void MeiZhuangWall::on_send_clicked(){
    QFile file(nowPath);
    QString content = ui->textEdit->toPlainText();
    QDateTime dateTime= QDateTime::currentDateTime();//获取系统当前的时间
    QString time = dateTime .toString("yyyy-MM-dd hh:mm:ss");//格式化时间
    QString cntxt = userName + ":"  + content +"\t\t\t"+time;
    if(file.open(QIODevice::ReadWrite | QIODevice::Text)){     // 打开文件
        QByteArray arr =  file.readAll();   // 必须先将原内容读出来，才不会被覆盖
        QTextStream out(&file);
        out << cntxt << endl;
        file.close();
    }else {
        QMessageBox::warning(this,tr("Error"),tr("read file error:").arg(file.errorString()));
    }
    QTextStream in(&file);   // 构建QTextStream读取文本文件
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    ui->textBrowser->clear();
    ui->textBrowser->setPlainText(in.readAll());  // 将所有文本读取到文件后显示出来
    // 写入用户文件
    if(file.open(QIODevice::ReadWrite | QIODevice::Text)){     // 打开文件
        QByteArray arr =  file.readAll();   // 必须先将原内容读出来，才不会被覆盖
        QTextStream out(&file);
        out << cntxt << endl;
        file.close();
    }else {
        QMessageBox::warning(this,tr("Error"),tr("read file error:").arg(file.errorString()));
    }
    ui->textEdit->clear();
}

void MeiZhuangWall::on_delBtn_clicked(){
    MyComment *myComment = new MyComment;
    myComment->setGeometry(this->geometry());
    myComment->show();
    this->close();
}




