#include "boyyundong.h"
#include "ui_boyyundong.h"
#include "boywall.h"
#include "global.h"
#include "mycomment.h"
#include <QDateTime>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

BoyYunDong::BoyYunDong(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BoyYunDong)
{
    ui->setupUi(this);
    QString nowPath = PathSecond + "/boyyundong.txt";
    QDir nowDir(PathSecond);
    if(!nowDir.exists()){
        QDir().mkdir(PathSecond);
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

BoyYunDong::~BoyYunDong()
{
    delete ui;
}

void BoyYunDong::on_back_clicked()
{
    BoyWall *boyWall = new BoyWall;
    boyWall->setGeometry(this->geometry());
    boyWall->show();
    this->close();
}

void BoyYunDong::on_send_clicked()
{
    QString nowPath = PathSecond + "/boyyundong.txt";
    QFile file(nowPath);
    QString content = ui->textEdit->toPlainText();
    if(!content.contains("\n",Qt::CaseSensitive)){
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
        ui->textEdit->clear();
    }else{
        QMessageBox::warning(this,tr("Error"),tr("The input was illegal"));
    }
}


void BoyYunDong::on_delBtn_clicked()
{
    MyComment *myComment = new MyComment;
    myComment->setGeometry(this->geometry());
    myComment->show();
    this->close();
}

