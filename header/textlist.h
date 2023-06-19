#ifndef TEXTLIST_H
#define TEXTLIST_H

#include <QWidget>
#include <QListWidget>
#include "keyboard.h"
#include "gradewidget.h"
#include "regardtable.h"
#include "warning.h"

namespace Ui {
class TextList;
}

class TextList : public QWidget
{
    Q_OBJECT
public:
    KeyBoard* key_widget;           //键盘类
    GradeWidget* grade_widget;      //最终成绩类
    RegardTable* regard;            //排名类
    Warning* ky_warning;
    QString exe_path;               //应用程序路径
public:
    explicit TextList(QWidget *parent = 0);
    ~TextList();

private:
    Ui::TextList *ui;
};

#endif // TEXTLIST_H
