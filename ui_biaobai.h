/********************************************************************************
** Form generated from reading UI file 'biaobai.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIAOBAI_H
#define UI_BIAOBAI_H

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

class Ui_BiaoBai
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *back;
    QPushButton *Delete;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BiaoBai)
    {
        if (BiaoBai->objectName().isEmpty())
            BiaoBai->setObjectName(QString::fromUtf8("BiaoBai"));
        BiaoBai->resize(895, 657);
        QFont font;
        BiaoBai->setFont(font);
        BiaoBai->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/288888.jpg);\n"
"font-size:20px;\n"
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
        centralwidget = new QWidget(BiaoBai);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 40, 781, 581));
        frame->setFont(font);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 30, 121, 51));
        label->setFont(font);
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(180, 490, 121, 31));
        Delete = new QPushButton(frame);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(440, 490, 121, 31));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 90, 621, 301));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 430, 461, 41));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 440, 81, 31));
        BiaoBai->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BiaoBai);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BiaoBai->setStatusBar(statusbar);

        retranslateUi(BiaoBai);

        QMetaObject::connectSlotsByName(BiaoBai);
    } // setupUi

    void retranslateUi(QMainWindow *BiaoBai)
    {
        BiaoBai->setWindowTitle(QApplication::translate("BiaoBai", "MainWindow", nullptr));
        label->setText(QApplication::translate("BiaoBai", "\350\241\250\347\231\275\345\242\231", nullptr));
        back->setText(QApplication::translate("BiaoBai", "\350\277\224\345\233\236", nullptr));
        Delete->setText(QApplication::translate("BiaoBai", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
        pushButton->setText(QApplication::translate("BiaoBai", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BiaoBai: public Ui_BiaoBai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIAOBAI_H
