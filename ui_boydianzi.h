/********************************************************************************
** Form generated from reading UI file 'boydianzi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOYDIANZI_H
#define UI_BOYDIANZI_H

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

class Ui_BoyDianZi
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

    void setupUi(QMainWindow *BoyDianZi)
    {
        if (BoyDianZi->objectName().isEmpty())
            BoyDianZi->setObjectName(QString::fromUtf8("BoyDianZi"));
        BoyDianZi->resize(879, 668);
        BoyDianZi->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/100000.jpg);\n"
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
        centralwidget = new QWidget(BoyDianZi);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 50, 721, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 20, 121, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        label->setFont(font);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 90, 571, 321));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 450, 431, 41));
        send = new QPushButton(frame);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(550, 460, 81, 31));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(160, 520, 111, 31));
        delBtn = new QPushButton(frame);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(410, 520, 121, 31));
        BoyDianZi->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BoyDianZi);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BoyDianZi->setStatusBar(statusbar);

        retranslateUi(BoyDianZi);

        QMetaObject::connectSlotsByName(BoyDianZi);
    } // setupUi

    void retranslateUi(QMainWindow *BoyDianZi)
    {
        BoyDianZi->setWindowTitle(QApplication::translate("BoyDianZi", "MainWindow", nullptr));
        label->setText(QApplication::translate("BoyDianZi", "\347\224\265\345\255\220\344\272\247\345\223\201", nullptr));
        send->setText(QApplication::translate("BoyDianZi", "\345\217\221\351\200\201", nullptr));
        back->setText(QApplication::translate("BoyDianZi", "\350\277\224\345\233\236", nullptr));
        delBtn->setText(QApplication::translate("BoyDianZi", "\344\277\256\346\224\271\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoyDianZi: public Ui_BoyDianZi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOYDIANZI_H
