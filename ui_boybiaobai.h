/********************************************************************************
** Form generated from reading UI file 'boybiaobai.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOYBIAOBAI_H
#define UI_BOYBIAOBAI_H

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

class Ui_BoyBiaoBai
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QPushButton *send;
    QPushButton *back;
    QPushButton *delBtn;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BoyBiaoBai)
    {
        if (BoyBiaoBai->objectName().isEmpty())
            BoyBiaoBai->setObjectName(QString::fromUtf8("BoyBiaoBai"));
        BoyBiaoBai->resize(913, 652);
        BoyBiaoBai->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/1777777.jpg);\n"
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
        centralwidget = new QWidget(BoyBiaoBai);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 50, 731, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 90, 581, 311));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 430, 421, 41));
        send = new QPushButton(frame);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(550, 440, 71, 31));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(170, 500, 111, 31));
        delBtn = new QPushButton(frame);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(430, 500, 121, 31));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 20, 121, 51));
        BoyBiaoBai->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BoyBiaoBai);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BoyBiaoBai->setStatusBar(statusbar);

        retranslateUi(BoyBiaoBai);

        QMetaObject::connectSlotsByName(BoyBiaoBai);
    } // setupUi

    void retranslateUi(QMainWindow *BoyBiaoBai)
    {
        BoyBiaoBai->setWindowTitle(QApplication::translate("BoyBiaoBai", "MainWindow", nullptr));
        send->setText(QApplication::translate("BoyBiaoBai", "\345\217\221\351\200\201", nullptr));
        back->setText(QApplication::translate("BoyBiaoBai", "\350\277\224\345\233\236", nullptr));
        delBtn->setText(QApplication::translate("BoyBiaoBai", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
        label->setText(QApplication::translate("BoyBiaoBai", "\350\241\250\347\231\275\345\242\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoyBiaoBai: public Ui_BoyBiaoBai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOYBIAOBAI_H
