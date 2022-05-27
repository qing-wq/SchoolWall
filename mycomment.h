#ifndef MYCOMMENT_H
#define MYCOMMENT_H

#include <QListView>
#include <QMainWindow>
#include <QMenu>
#include <QStandardItemModel>
#include <QStringListModel>

namespace Ui {
class MyComment;
}

class MyComment : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyComment(QWidget *parent = nullptr);
    ~MyComment();


private slots:
    void show_listView(const QPoint &pos);
    void onDelete();

    void on_back_clicked();

private:
    Ui::MyComment *ui;
};

#endif // MYCOMMENT_H
