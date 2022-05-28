/********************************************************************************
** Form generated from reading UI file 'boyshiwu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOYSHIWU_H
#define UI_BOYSHIWU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoyShiWu
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QPushButton *send;
    QPushButton *back;
    QPushButton *delBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BoyShiWu)
    {
        if (BoyShiWu->objectName().isEmpty())
            BoyShiWu->setObjectName(QString::fromUtf8("BoyShiWu"));
        BoyShiWu->resize(879, 663);
        BoyShiWu->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/255555.jpg);\n"
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
        centralwidget = new QWidget(BoyShiWu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 30, 721, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 20, 121, 51));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 100, 561, 301));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 440, 441, 41));
        send = new QPushButton(frame);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(560, 450, 71, 31));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(130, 510, 111, 31));
        delBtn = new QPushButton(frame);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(390, 510, 121, 31));
        BoyShiWu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BoyShiWu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BoyShiWu->setStatusBar(statusbar);

        retranslateUi(BoyShiWu);

        QMetaObject::connectSlotsByName(BoyShiWu);
    } // setupUi

    void retranslateUi(QMainWindow *BoyShiWu)
    {
        BoyShiWu->setWindowTitle(QApplication::translate("BoyShiWu", "MainWindow", nullptr));
        label->setText(QApplication::translate("BoyShiWu", "\345\244\261\347\211\251\346\213\233\351\242\206", nullptr));
        send->setText(QApplication::translate("BoyShiWu", "\345\217\221\351\200\201", nullptr));
        back->setText(QApplication::translate("BoyShiWu", "\350\277\224\345\233\236", nullptr));
        delBtn->setText(QApplication::translate("BoyShiWu", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoyShiWu: public Ui_BoyShiWu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOYSHIWU_H
