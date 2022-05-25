#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "girlwall.h"
#include "QMessageBox"
#include "QDir"
#include "QTextStream"
#include "global.h"

QString rootDir = "D:/mydata", userdataDir = "D:/mydata/userdata";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //初始化路径
    QDir dir(rootDir);
    if (!dir.exists()) {
        QDir().mkdir(rootDir);
        QDir().mkdir(userdataDir);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_reisterBut_clicked()
{
    QString uName = ui->userNameEdit->text();
    QString password = ui->passwordEdit->text();
    QString nowUserdataDir = userdataDir + "/" + uName;
    QDir nowDir(nowUserdataDir);
    if (!nowDir.exists()) {
        QDir().mkdir(nowUserdataDir);
        //写入密码文件
        QFile file(nowUserdataDir + "/password.txt");
        //打开文件，不存在则创建
        file.open(QIODevice::ReadWrite | QIODevice::Text);
        //写入文件需要字符串为QByteArray格式
        file.write(password.toUtf8());
        file.close();
        QMessageBox::information(this, "提示", "注册成功！", "OK");
    } else {
        QMessageBox::warning(this, "警告", "请勿重复注册！", "确定");
    }

}

void MainWindow::on_loginBut_clicked()
{
    userName = ui->userNameEdit->text();    // 将userName设为全局变量
    QString password = ui->passwordEdit->text();
    QString nowUserdataDir = userdataDir + "/" + userName;
    QDir nowDir(nowUserdataDir);
    if (!nowDir.exists()) {
        QMessageBox::warning(this, "警告", "账号不存在，请先注册！", "确定");
    } else {
        //先打开文件
        QFile file(nowUserdataDir + "/password.txt");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        //使用QTextStream一行一行读取文件
        QTextStream in(&file);
        QString line = in.readLine();      //整行读取
        if (line == password) {
            GirlWall *girlWall = new GirlWall;
            girlWall->setGeometry(this->geometry());
            girlWall->show();
            this->close();
        } else {
            QMessageBox::warning(this, "Error", "账号或密码错误！请重试", ""
                                                                "确定");
        }
    }
}

