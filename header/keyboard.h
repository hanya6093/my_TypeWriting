#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QMainWindow>
#include <QTimer>
#include <qevent.h>
#include <qpushbutton.h>
#include <qvector.h>
#include <QTextStream>
#include "recordkeeping.h"

#define LINE_NUMBER1 51                      //一行能够显示的英文字符个数
#define LINE_NUMBER2 30                     //一行能够显示的中文字符个数

namespace Ui {
class KeyBoard;
}

class KeyBoard : public QMainWindow         //软键盘创建
{
    Q_OBJECT

/*打字练习部分*/
private:
    /*==============================打字数据相关=====================================*/
    unsigned long total_charactors;   //文章总字符数量
    unsigned long cur_charactors;     //当前打字总数量
    unsigned long correct_num;        //当前正确量
    unsigned long error_num;          //当前错误量
    unsigned long cur_time;           //当前时间
    bool is_start;                    //表示是否开始打字
    QTimer* timer;                    //定时器
    double speed;                     //当时速度
    double speed_max;                 //最大速度
    double speed_min;                 //最小速度
    //int debug = 0;

    QString cur_show_str;             //当前展示框内容
    int cur_handled_pos;    //当前已经处理过的位置
    bool is_handling;       //表示是否正在处理中，防止修改样式触发槽函数形成递归
    bool is_backspace;      //表示当前键盘是否为回删事件
    bool is_chinese;        //表示当前文件为中文
    bool is_randomfile;     //表示当前文件为随机文件

    //用户相关
    int userid;

    /*============================按钮变色相关========================================*/
    /*变色按钮*/
    QVector<QPushButton*> red_btns;
    QVector<QPushButton*> greens;   //绿色的按钮

    /*核心：设置字符背景*/
    void set_char_background(unsigned int pos, QString color, int n);  //设置字符背景颜色
    void set_char_foreground(unsigned int pos, QString color, int n);  //设置字符颜色
    QPushButton* get_button(char ch);                    //获取按下字符实体按键的对应虚拟按钮
    void set_btn_color(QPushButton* button, int choice); //设置按键颜色
    void backspace();       //回删事件处理
    void set_btn_green();   //将按键置绿

    /*===============================文本导入相关====================================*/
    QFile* file;
    QTextStream* stream;
    QString file_name;
public:
    bool is_warning;        //表示是否正在警告
    void init_text(QString textpath ,QString text_name);       // 初始化文本
    void get_new_line();
    void update_grade(Recordkeeping &re);  //更新分数
    QString random_string();               //随机练习 生成字符串

public:
    explicit KeyBoard(QWidget *parent = 0);
    ~KeyBoard();

private slots:
    void timerHandleSlot();

    void on_view1_textChanged();

    bool eventFilter(QObject *,QEvent *);  //事件过滤器来监听文本框聚焦情况

    void closeEvent(QCloseEvent *event);

public:
    Ui::KeyBoard *ui;
};

#endif // KEYBOARD_H
