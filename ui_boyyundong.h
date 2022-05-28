/********************************************************************************
** Form generated from reading UI file 'boyyundong.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOYYUNDONG_H
#define UI_BOYYUNDONG_H

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

class Ui_BoyYunDong
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

    void setupUi(QMainWindow *BoyYunDong)
    {
        if (BoyYunDong->objectName().isEmpty())
            BoyYunDong->setObjectName(QString::fromUtf8("BoyYunDong"));
        BoyYunDong->resize(967, 664);
        BoyYunDong->setStyleSheet(QString::fromUtf8("*{\n"
"background-image: url(:/img/1444444.jpg);\n"
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
        centralwidget = new QWidget(BoyYunDong);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(100, 40, 791, 571));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 20, 121, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        label->setFont(font);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 90, 651, 321));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(110, 440, 481, 41));
        send = new QPushButton(frame);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(610, 450, 81, 31));
        back = new QPushButton(frame);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(190, 510, 121, 31));
        delBtn = new QPushButton(frame);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(460, 510, 121, 31));
        BoyYunDong->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BoyYunDong);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BoyYunDong->setStatusBar(statusbar);

        retranslateUi(BoyYunDong);

        QMetaObject::connectSlotsByName(BoyYunDong);
    } // setupUi

    void retranslateUi(QMainWindow *BoyYunDong)
    {
        BoyYunDong->setWindowTitle(QApplication::translate("BoyYunDong", "MainWindow", nullptr));
        label->setText(QApplication::translate("BoyYunDong", "\350\277\220\345\212\250\344\270\223\346\240\217", nullptr));
        send->setText(QApplication::translate("BoyYunDong", "\345\217\221\351\200\201", nullptr));
        back->setText(QApplication::translate("BoyYunDong", "\350\277\224\345\233\236", nullptr));
        delBtn->setText(QApplication::translate("BoyYunDong", "\345\210\240\351\231\244\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoyYunDong: public Ui_BoyYunDong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOYYUNDONG_H
