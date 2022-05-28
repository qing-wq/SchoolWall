/********************************************************************************
** Form generated from reading UI file 'meishi.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEISHI_H
#define UI_MEISHI_H

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

class Ui_MeiShi
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *back;
    QPushButton *Delete;
    QPushButton *sent;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MeiShi)
    {
        if (MeiShi->objectName().isEmpty())
            MeiShi->setObjectName(QString::fromUtf8("MeiShi"));
        MeiShi->resize(933, 660);
        MeiShi->setStyleSheet(QString::fromUtf8("*{\n"
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
        centralwidget = new QWidget(MeiShi);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(80, 20, 771, 581));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 30, 131, 61));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(190, 520, 111, 31));
        Delete = new QPushButton(frame);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(470, 520, 121, 31));
        sent = new QPushButton(frame);
        sent->setObjectName(QString::fromUtf8("sent"));
        sent->setGeometry(QRect(580, 460, 81, 31));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(90, 90, 591, 341));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 450, 451, 41));
        MeiShi->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MeiShi);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MeiShi->setStatusBar(statusbar);

        retranslateUi(MeiShi);

        QMetaObject::connectSlotsByName(MeiShi);
    } // setupUi

    void retranslateUi(QMainWindow *MeiShi)
    {
        MeiShi->setWindowTitle(QApplication::translate("MeiShi", "MainWindow", nullptr));
        label->setText(QApplication::translate("MeiShi", "\347\276\216\351\243\237\345\210\206\344\272\253", nullptr));
        back->setText(QApplication::translate("MeiShi", "\350\277\224\345\233\236", nullptr));
        Delete->setText(QApplication::translate("MeiShi", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
        sent->setText(QApplication::translate("MeiShi", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeiShi: public Ui_MeiShi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEISHI_H
