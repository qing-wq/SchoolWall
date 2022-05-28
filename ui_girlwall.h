/********************************************************************************
** Form generated from reading UI file 'girlwall.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIRLWALL_H
#define UI_GIRLWALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GirlWall
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *meizhuang;
    QPushButton *haowu;
    QPushButton *biaobai;
    QPushButton *meishi;
    QPushButton *shiwu;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GirlWall)
    {
        if (GirlWall->objectName().isEmpty())
            GirlWall->setObjectName(QString::fromUtf8("GirlWall"));
        GirlWall->resize(840, 643);
        GirlWall->setStyleSheet(QString::fromUtf8("*{\n"
"background-image:url(:/img/8574639.jpg);\n"
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
"}"));
        centralwidget = new QWidget(GirlWall);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(100, 40, 661, 541));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        meizhuang = new QPushButton(frame);
        meizhuang->setObjectName(QString::fromUtf8("meizhuang"));
        meizhuang->setGeometry(QRect(250, 100, 141, 41));
        haowu = new QPushButton(frame);
        haowu->setObjectName(QString::fromUtf8("haowu"));
        haowu->setGeometry(QRect(250, 180, 141, 41));
        biaobai = new QPushButton(frame);
        biaobai->setObjectName(QString::fromUtf8("biaobai"));
        biaobai->setGeometry(QRect(250, 260, 141, 41));
        meishi = new QPushButton(frame);
        meishi->setObjectName(QString::fromUtf8("meishi"));
        meishi->setGeometry(QRect(250, 340, 141, 41));
        shiwu = new QPushButton(frame);
        shiwu->setObjectName(QString::fromUtf8("shiwu"));
        shiwu->setGeometry(QRect(250, 430, 141, 41));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 20, 131, 71));
        GirlWall->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GirlWall);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GirlWall->setStatusBar(statusbar);

        retranslateUi(GirlWall);

        QMetaObject::connectSlotsByName(GirlWall);
    } // setupUi

    void retranslateUi(QMainWindow *GirlWall)
    {
        GirlWall->setWindowTitle(QApplication::translate("GirlWall", "MainWindow", nullptr));
        meizhuang->setText(QApplication::translate("GirlWall", "\347\276\216\345\246\206\344\270\223\346\240\217\345\242\231", nullptr));
        haowu->setText(QApplication::translate("GirlWall", "\345\245\275\347\211\251\346\216\250\350\215\220\345\242\231", nullptr));
        biaobai->setText(QApplication::translate("GirlWall", "\350\241\250\347\231\275\345\242\231", nullptr));
        meishi->setText(QApplication::translate("GirlWall", "\347\276\216\351\243\237\345\210\206\344\272\253\345\242\231", nullptr));
        shiwu->setText(QApplication::translate("GirlWall", "\345\244\261\347\211\251\346\213\233\351\242\206\345\242\231", nullptr));
        label->setText(QApplication::translate("GirlWall", "\345\245\263\347\224\237\345\242\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GirlWall: public Ui_GirlWall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIRLWALL_H
