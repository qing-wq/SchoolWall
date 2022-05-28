/********************************************************************************
** Form generated from reading UI file 'shiwu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHIWU_H
#define UI_SHIWU_H

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

class Ui_ShiWU
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

    void setupUi(QMainWindow *ShiWU)
    {
        if (ShiWU->objectName().isEmpty())
            ShiWU->setObjectName(QString::fromUtf8("ShiWU"));
        ShiWU->resize(830, 666);
        ShiWU->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/211111.jpg);\n"
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
        centralwidget = new QWidget(ShiWU);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 60, 671, 541));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 140, 61));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(150, 470, 111, 31));
        Delete = new QPushButton(frame);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(360, 470, 111, 31));
        sent = new QPushButton(frame);
        sent->setObjectName(QString::fromUtf8("sent"));
        sent->setGeometry(QRect(520, 420, 71, 31));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 90, 511, 291));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 410, 421, 41));
        ShiWU->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ShiWU);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ShiWU->setStatusBar(statusbar);

        retranslateUi(ShiWU);

        QMetaObject::connectSlotsByName(ShiWU);
    } // setupUi

    void retranslateUi(QMainWindow *ShiWU)
    {
        ShiWU->setWindowTitle(QApplication::translate("ShiWU", "MainWindow", nullptr));
        label->setText(QApplication::translate("ShiWU", "\345\244\261\347\211\251\346\213\233\351\242\206\345\242\231", nullptr));
        back->setText(QApplication::translate("ShiWU", "\350\277\224\345\233\236", nullptr));
        Delete->setText(QApplication::translate("ShiWU", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
        sent->setText(QApplication::translate("ShiWU", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShiWU: public Ui_ShiWU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHIWU_H
