/********************************************************************************
** Form generated from reading UI file 'mycomment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCOMMENT_H
#define UI_MYCOMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyComment
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QListView *listView;
    QLabel *label;
    QPushButton *back;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyComment)
    {
        if (MyComment->objectName().isEmpty())
            MyComment->setObjectName(QString::fromUtf8("MyComment"));
        MyComment->resize(879, 650);
        MyComment->setStyleSheet(QString::fromUtf8("*{\n"
"background-image:url(:/img/211111.jpg);\n"
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
"font-size:23px;\n"
"color:black;\n"
"background:rgb(255,255,255,0.8);\n"
"\n"
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
"background:rgba(255,255,255,0.8);\n"
"color:#717072;\n"
"border-radius:15px;\n"
"}\n"
"QTextBrowser{\n"
"	font-size:15px;\n"
"}"));
        centralwidget = new QWidget(MyComment);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 50, 761, 511));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        listView = new QListView(frame);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(100, 100, 561, 301));
        listView->setContextMenuPolicy(Qt::CustomContextMenu);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 40, 181, 31));
        label->setStyleSheet(QString::fromUtf8("QLable{\n"
"background:rgb(0,0,0);\n"
"border:soild 10px\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(320, 440, 91, 31));
        MyComment->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MyComment);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MyComment->setStatusBar(statusbar);

        retranslateUi(MyComment);

        QMetaObject::connectSlotsByName(MyComment);
    } // setupUi

    void retranslateUi(QMainWindow *MyComment)
    {
        MyComment->setWindowTitle(QApplication::translate("MyComment", "MainWindow", nullptr));
        label->setText(QApplication::translate("MyComment", "\346\210\221\347\232\204\350\257\204\350\256\272", nullptr));
        back->setText(QApplication::translate("MyComment", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyComment: public Ui_MyComment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCOMMENT_H
