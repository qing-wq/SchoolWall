/********************************************************************************
** Form generated from reading UI file 'meizhuangwall.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEIZHUANGWALL_H
#define UI_MEIZHUANGWALL_H

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

class Ui_MeiZhuangWall
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *back;
    QTextEdit *textEdit;
    QPushButton *send;
    QTextBrowser *textBrowser;
    QPushButton *delBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MeiZhuangWall)
    {
        if (MeiZhuangWall->objectName().isEmpty())
            MeiZhuangWall->setObjectName(QString::fromUtf8("MeiZhuangWall"));
        MeiZhuangWall->resize(852, 672);
        MeiZhuangWall->setStyleSheet(QString::fromUtf8("*{\n"
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
""));
        centralwidget = new QWidget(MeiZhuangWall);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 40, 711, 581));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 30, 140, 51));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(140, 510, 121, 31));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 440, 471, 41));
        send = new QPushButton(frame);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(570, 450, 71, 31));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 100, 581, 311));
        textBrowser->setLineWidth(1);
        delBtn = new QPushButton(frame);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(410, 510, 111, 31));
        MeiZhuangWall->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MeiZhuangWall);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MeiZhuangWall->setStatusBar(statusbar);

        retranslateUi(MeiZhuangWall);

        QMetaObject::connectSlotsByName(MeiZhuangWall);
    } // setupUi

    void retranslateUi(QMainWindow *MeiZhuangWall)
    {
        MeiZhuangWall->setWindowTitle(QApplication::translate("MeiZhuangWall", "MainWindow", nullptr));
        label->setText(QApplication::translate("MeiZhuangWall", "\347\276\216\345\246\206\344\270\223\346\240\217", nullptr));
        back->setText(QApplication::translate("MeiZhuangWall", "\350\277\224\345\233\236", nullptr));
        textEdit->setHtml(QApplication::translate("MeiZhuangWall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        send->setText(QApplication::translate("MeiZhuangWall", "\345\217\221\350\241\250", nullptr));
        textBrowser->setHtml(QApplication::translate("MeiZhuangWall", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:15px;\"><br /></p></body></html>", nullptr));
        delBtn->setText(QApplication::translate("MeiZhuangWall", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeiZhuangWall: public Ui_MeiZhuangWall {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEIZHUANGWALL_H
