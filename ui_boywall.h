/********************************************************************************
** Form generated from reading UI file 'boywall.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOYWALL_H
#define UI_BOYWALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoyWall
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *labelM;
    QPushButton *shiwuM;
    QPushButton *biaoBaiM;
    QPushButton *yundongM;
    QPushButton *dianyingM;
    QPushButton *dianziM;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BoyWall)
    {
        if (BoyWall->objectName().isEmpty())
            BoyWall->setObjectName(QString::fromUtf8("BoyWall"));
        BoyWall->resize(892, 670);
        BoyWall->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/1222222.jpg);\n"
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
        centralwidget = new QWidget(BoyWall);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 50, 751, 561));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        labelM = new QLabel(frame);
        labelM->setObjectName(QString::fromUtf8("labelM"));
        labelM->setGeometry(QRect(330, 60, 140, 61));
        shiwuM = new QPushButton(frame);
        shiwuM->setObjectName(QString::fromUtf8("shiwuM"));
        shiwuM->setGeometry(QRect(300, 160, 131, 41));
        biaoBaiM = new QPushButton(frame);
        biaoBaiM->setObjectName(QString::fromUtf8("biaoBaiM"));
        biaoBaiM->setGeometry(QRect(300, 240, 131, 41));
        yundongM = new QPushButton(frame);
        yundongM->setObjectName(QString::fromUtf8("yundongM"));
        yundongM->setGeometry(QRect(300, 310, 131, 41));
        dianyingM = new QPushButton(frame);
        dianyingM->setObjectName(QString::fromUtf8("dianyingM"));
        dianyingM->setGeometry(QRect(300, 380, 131, 41));
        dianziM = new QPushButton(frame);
        dianziM->setObjectName(QString::fromUtf8("dianziM"));
        dianziM->setGeometry(QRect(300, 460, 131, 41));
        BoyWall->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BoyWall);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BoyWall->setStatusBar(statusbar);

        retranslateUi(BoyWall);

        QMetaObject::connectSlotsByName(BoyWall);
    } // setupUi

    void retranslateUi(QMainWindow *BoyWall)
    {
        BoyWall->setWindowTitle(QApplication::translate("BoyWall", "MainWindow", nullptr));
        labelM->setText(QApplication::translate("BoyWall", "\347\224\267\347\224\237\345\242\231", nullptr));
        shiwuM->setText(QApplication::translate("BoyWall", "\345\244\261\347\211\251\346\213\233\351\242\206", nullptr));
        biaoBaiM->setText(QApplication::translate("BoyWall", "\350\241\250\347\231\275\345\242\231", nullptr));
        yundongM->setText(QApplication::translate("BoyWall", "\350\277\220\345\212\250\344\270\223\346\240\217", nullptr));
        dianyingM->setText(QApplication::translate("BoyWall", "\347\224\265\345\275\261\346\216\250\350\215\220", nullptr));
        dianziM->setText(QApplication::translate("BoyWall", "\347\224\265\345\255\220\344\272\247\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoyWall: public Ui_BoyWall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOYWALL_H
