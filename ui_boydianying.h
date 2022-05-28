/********************************************************************************
** Form generated from reading UI file 'boydianying.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOYDIANYING_H
#define UI_BOYDIANYING_H

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

class Ui_BoydianYing
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

    void setupUi(QMainWindow *BoydianYing)
    {
        if (BoydianYing->objectName().isEmpty())
            BoydianYing->setObjectName(QString::fromUtf8("BoydianYing"));
        BoydianYing->resize(869, 669);
        BoydianYing->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/1888888.jpg);\n"
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
        centralwidget = new QWidget(BoydianYing);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 40, 701, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 20, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        label->setFont(font);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 80, 571, 331));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 440, 451, 41));
        send = new QPushButton(frame);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(540, 450, 81, 31));
        send->setFont(font);
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(130, 510, 111, 31));
        delBtn = new QPushButton(frame);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(430, 510, 111, 31));
        BoydianYing->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BoydianYing);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BoydianYing->setStatusBar(statusbar);

        retranslateUi(BoydianYing);

        QMetaObject::connectSlotsByName(BoydianYing);
    } // setupUi

    void retranslateUi(QMainWindow *BoydianYing)
    {
        BoydianYing->setWindowTitle(QApplication::translate("BoydianYing", "MainWindow", nullptr));
        label->setText(QApplication::translate("BoydianYing", "\347\224\265\345\275\261\346\216\250\350\215\220", nullptr));
        send->setText(QApplication::translate("BoydianYing", "\345\217\221\351\200\201", nullptr));
        back->setText(QApplication::translate("BoydianYing", "\350\277\224\345\233\236", nullptr));
        delBtn->setText(QApplication::translate("BoydianYing", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoydianYing: public Ui_BoydianYing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOYDIANYING_H
