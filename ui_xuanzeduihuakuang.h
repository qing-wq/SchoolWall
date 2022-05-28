/********************************************************************************
** Form generated from reading UI file 'xuanzeduihuakuang.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XUANZEDUIHUAKUANG_H
#define UI_XUANZEDUIHUAKUANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XuanZeDuiHuaKuang
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *Girl;
    QPushButton *Boy;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *XuanZeDuiHuaKuang)
    {
        if (XuanZeDuiHuaKuang->objectName().isEmpty())
            XuanZeDuiHuaKuang->setObjectName(QString::fromUtf8("XuanZeDuiHuaKuang"));
        XuanZeDuiHuaKuang->resize(900, 612);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XuanZeDuiHuaKuang->sizePolicy().hasHeightForWidth());
        XuanZeDuiHuaKuang->setSizePolicy(sizePolicy);
        XuanZeDuiHuaKuang->setMinimumSize(QSize(900, 600));
        XuanZeDuiHuaKuang->setMaximumSize(QSize(9000, 6000));
        XuanZeDuiHuaKuang->setStyleSheet(QString::fromUtf8("*{\n"
"background:url(:/img/GAB.jpg) no-repeat;\n"
"background-position: center center;\n"
"background-repeat: no-repeat;\n"
"background-attachment: fixed;\n"
"font-size:20px;\n"
"font-family:Century Gothic;\n"
"}\n"
"QFrame{\n"
"background:rgba(255,255,255,0.8);\n"
"border-radius:15px;\n"
"}\n"
"\n"
"#Widget{\n"
"\n"
"}\n"
"\n"
"QToolButton{\n"
"background:red;\n"
"border-radius:60px;\n"
"}\n"
"QLabel{\n"
"font-size:27px;\n"
"color:black;\n"
"background:transparent;\n"
"}\n"
"QPushButton{\n"
"font-size:18px;\n"
"background:white;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"border-radius:15px;\n"
"background:#c8adc4;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"QTextBrowser{\n"
"	font-size:15px;\n"
"}"));
        centralwidget = new QWidget(XuanZeDuiHuaKuang);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 60, 791, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 130, 221, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        label->setFont(font);
        Girl = new QPushButton(frame);
        Girl->setObjectName(QString::fromUtf8("Girl"));
        Girl->setGeometry(QRect(160, 280, 151, 61));
        Boy = new QPushButton(frame);
        Boy->setObjectName(QString::fromUtf8("Boy"));
        Boy->setGeometry(QRect(480, 280, 141, 61));
        Boy->setFont(font);
        Boy->setIconSize(QSize(16, 16));
        Boy->setAutoRepeatDelay(300);
        XuanZeDuiHuaKuang->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(XuanZeDuiHuaKuang);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        XuanZeDuiHuaKuang->setStatusBar(statusbar);

        retranslateUi(XuanZeDuiHuaKuang);

        QMetaObject::connectSlotsByName(XuanZeDuiHuaKuang);
    } // setupUi

    void retranslateUi(QMainWindow *XuanZeDuiHuaKuang)
    {
        XuanZeDuiHuaKuang->setWindowTitle(QApplication::translate("XuanZeDuiHuaKuang", "MainWindow", nullptr));
        label->setText(QApplication::translate("XuanZeDuiHuaKuang", "\351\200\211\346\213\251\346\202\250\347\232\204\346\200\247\345\210\253", nullptr));
        Girl->setText(QApplication::translate("XuanZeDuiHuaKuang", "\346\210\221\346\230\257\345\245\263\347\224\237", nullptr));
        Boy->setText(QApplication::translate("XuanZeDuiHuaKuang", "\346\210\221\346\230\257\347\224\267\347\224\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XuanZeDuiHuaKuang: public Ui_XuanZeDuiHuaKuang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XUANZEDUIHUAKUANG_H
