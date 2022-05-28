/********************************************************************************
** Form generated from reading UI file 'haowu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAOWU_H
#define UI_HAOWU_H

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

class Ui_HaoWu
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *back;
    QPushButton *Delete;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HaoWu)
    {
        if (HaoWu->objectName().isEmpty())
            HaoWu->setObjectName(QString::fromUtf8("HaoWu"));
        HaoWu->resize(881, 651);
        HaoWu->setStyleSheet(QString::fromUtf8("*{\n"
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
"}"));
        centralwidget = new QWidget(HaoWu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(100, 40, 691, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 30, 111, 51));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(140, 500, 101, 31));
        Delete = new QPushButton(frame);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(370, 500, 101, 31));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(530, 450, 81, 31));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 90, 561, 311));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 440, 431, 41));
        HaoWu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HaoWu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HaoWu->setStatusBar(statusbar);

        retranslateUi(HaoWu);

        QMetaObject::connectSlotsByName(HaoWu);
    } // setupUi

    void retranslateUi(QMainWindow *HaoWu)
    {
        HaoWu->setWindowTitle(QApplication::translate("HaoWu", "MainWindow", nullptr));
        label->setText(QApplication::translate("HaoWu", "\345\245\275\347\211\251\346\216\250\350\215\220", nullptr));
        back->setText(QApplication::translate("HaoWu", "\350\277\224\345\233\236", nullptr));
        Delete->setText(QApplication::translate("HaoWu", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
        pushButton->setText(QApplication::translate("HaoWu", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HaoWu: public Ui_HaoWu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAOWU_H
