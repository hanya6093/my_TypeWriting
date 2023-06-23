#include "keyboard.h"
#include "ui_keyboard.h"
#include <QDebug>
#include <QDir>
#include <qfile.h>
#include <QTextStream>
#include <QPushButton>
#include <qpushbutton.h>
#include <qpalette.h>
#include <QPalette>
#include <qapplication.h>
#include <qvector.h>
#include <qalgorithms.h>
#include "textlist.h"
#include "ui_gradewidget.h"
#include "ui_warning.h"
#include <QTextCodec>
#include <qmap.h>
#include <QTime>
#include <QtGlobal>

// 参数列表初始化
KeyBoard::KeyBoard(QWidget *parent) :
    QMainWindow(parent),
    cur_charactors(0),
    correct_num(0),
    error_num(0),
    cur_time(0),
    is_start(false),
    speed(0),
    speed_max(0),
    speed_min(10),
    cur_show_str("When you are a child, you are good."),
    cur_handled_pos(-1),
    is_handling(false),
    is_backspace(false),
    is_chinese(false),
    is_randomfile(false),
    userid(-1),
    file(nullptr),
    file_name("./files/text_file/test.txt"),
    is_warning(false),
    ui(new Ui::KeyBoard)
{

    ui->setupUi(this);
    //需要打开文件初始化当前总字符量
    total_charactors = 100;
    this->setWindowTitle("打字界面");
    //定时器初始化
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerHandleSlot()));
    //设置窗口格式
    this->setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);//添加最大化按钮
    this->setFixedSize(this->width(), this->height());

    //设置view1为焦点
    ui->view1->setFocus();
    // 在 ui->view1 上安装了当前类作为事件过滤器,这样当前类将能够截获发送到 ui->view1 的所有事件,并进行处理
    ui->view1->installEventFilter(this);
}

KeyBoard::~KeyBoard()
{
    delete ui;
}


/*设置字符背景颜色 为输入框中的字符背景颜色
  修改：pos为设置字符的起始位置 n为起始位置选中的字符个数*/
void KeyBoard::set_char_background(unsigned int pos, QString color, int n)
{
    if(pos < 0){
        return;
    }
    QTextEdit* tempview = ui->view0;
    QTextCursor cursor = tempview->textCursor();    //copy一个虚拟的光标进行处理，最后需要调用setTextCursor()完成虚拟光标操作变成真实光标操作
    //行首
    cursor.movePosition( QTextCursor::StartOfLine );    //移动光标到首行
    //向右移动到Pos-n,即待修改的字符左边
    cursor.movePosition( QTextCursor::Right, QTextCursor::MoveAnchor, pos);//从开头移动光标pos-n次
    //qDebug()<<(pos-n);
    //选中这个字符
    cursor.movePosition( QTextCursor::Right, QTextCursor::KeepAnchor , n);
    // added,使选中生效,必须有这句
    tempview->setTextCursor(cursor);    //操作生效需要调用一下setTextCursor()函数 对应与textCursor()
    //修改前字符格式
    QTextCharFormat defcharfmt = tempview->currentCharFormat();
    //新增字符格式
    QTextCharFormat newcharfmt = defcharfmt ;
    //颜色
    newcharfmt.setBackground(QColor(color));    //设置格式类的背景颜色内容
    tempview->setCurrentCharFormat(newcharfmt); //给前面光标的选择设置格式
    //这时光标在行尾
    cursor.movePosition(QTextCursor::EndOfLine);    //将光标移动到行尾
    //added,使选中生效,必须有这句
    tempview->setTextCursor(cursor);
}


/*设置字符前景色，即字符颜色  修改：pos为设置字符的起始位置 n为起始位置选中的字符个数*/
void KeyBoard::set_char_foreground(unsigned int pos, QString color, int n)
{
    if(pos < 0){
        return ;
    }
    QTextEdit * tempview0 = ui->view0;
    //qDebug()<<"启动了";
    QTextCursor cursor = tempview0->textCursor();
    //行首
    cursor.movePosition( QTextCursor::StartOfLine );
    //向右移动到Pos-1,即待修改的字符左边
    cursor.movePosition( QTextCursor::Right, QTextCursor::MoveAnchor, pos);
    //选中这个字符
    cursor.movePosition( QTextCursor::Right, QTextCursor::KeepAnchor, n);
    //added,使选中生效,必须有这句
    tempview0->setTextCursor(cursor);
    //修改前字符格式
    QTextCharFormat defcharfmt = tempview0->currentCharFormat();
    //新增字符格式
    //QTextCharFormat newcharfmt = defcharfmt;//
    //字符颜色
    defcharfmt.setForeground(QColor(color));
    tempview0->setCurrentCharFormat(defcharfmt);
    //加上这句是为了去除光标selected，这时光标在字符左边
    cursor.movePosition(QTextCursor::PreviousCharacter);
   //这时光标在行尾
    cursor.movePosition(QTextCursor::EndOfLine);
    //added,使选中生效,必须有这句
    tempview0->setTextCursor(cursor);
}


/*获取键盘输入*/
QPushButton* KeyBoard::get_button(char ch) {
    switch(ch) {
    case '1':
        return ui->pushButton_1;
    case '2':
        return ui->pushButton_2;
    case '3':
        return ui->pushButton_3;
    case '4':
        return ui->pushButton_4;
    case '5':
        return ui->pushButton_5;
    case '6':
        return ui->pushButton_6;
    case '7':
        return ui->pushButton_7;
    case '8':
        return ui->pushButton_8;
    case '9':
        return ui->pushButton_9;
    case '0':
        return ui->pushButton_0;
    case 'a':
        return ui->pushButton_A;
    case 'b':
        return ui->pushButton_B;
    case 'c':
        return ui->pushButton_C;
    case 'd':
        return ui->pushButton_D;
    case 'e':
        return ui->pushButton_E;
    case 'f':
        return ui->pushButton_F;
    case 'g':
        return ui->pushButton_G;
    case 'h':
        return ui->pushButton_H;
    case 'i':
        return ui->pushButton_I;
    case 'j':
        return ui->pushButton_J;
    case 'k':
        return ui->pushButton_K;
    case 'l':
        return ui->pushButton_L;
    case 'm':
        return ui->pushButton_M;
    case 'n':
        return ui->pushButton_N;
    case 'o':
        return ui->pushButton_O;
    case 'p':
        return ui->pushButton_P;
    case 'q':
        return ui->pushButton_Q;
    case 'r':
        return ui->pushButton_R;
    case 's':
        return ui->pushButton_S;
    case 't':
        return ui->pushButton_T;
    case 'u':
        return ui->pushButton_U;
    case 'v':
        return ui->pushButton_V;
    case 'w':
        return ui->pushButton_W;
    case 'x':
        return ui->pushButton_X;
    case 'y':
        return ui->pushButton_Y;
    case 'z':
        return ui->pushButton_Z;
    case ';':
        return ui->pushButton_semi;
    case ':':
        return ui->pushButton_semi;
    case ' ':
        return ui->pushButton_Space;
    case '!':
        return ui->pushButton_1;
    case '@':
        return ui->pushButton_2;
    case '#':
        return ui->pushButton_3;
    case '$':
        return ui->pushButton_4;
    case '%':
        return ui->pushButton_5;
    case '^':
        return ui->pushButton_6;
    case '&':
        return ui->pushButton_7;
    case '*':
        return ui->pushButton_8;
    case '(':
        return ui->pushButton_9;
    case ')':
        return ui->pushButton_0;
    case '-':
        return ui->pushButton_sub;
    case '_':
        return ui->pushButton_sub;
    case '+':
        return ui->pushButton_equal;
    case '=':
        return ui->pushButton_equal;
    case '[':
        return ui->pushButton_left;
    case '{':
        return ui->pushButton_left;
    case ']':
        return ui->pushButton_right;
    case '}':
        return ui->pushButton_right;
    case '\\':
        return ui->pushButton_rev;
    case '|':
        return ui->pushButton_rev;
    case ',':
        return ui->pushButton_comma;
    case '<':
        return ui->pushButton_comma;
    case '.':
        return ui->pushButton_full;
    case '>':
        return ui->pushButton_full;
    case '\'':
        return ui->pushButton_quo;
    case '"':
        return ui->pushButton_quo;
    case '/':
        return ui->pushButton_div;
    case '?':
        return ui->pushButton_div;
    case 127:
        return ui->pushButton_Shift;
    case 126:
        return ui->pushButton_Shift_2;
    }
    return nullptr;
}


/*设置按键的背景*/
void KeyBoard::set_btn_color(QPushButton* button, int choice) {
    //默认颜色为：background-color: rgb(219, 207, 230);
    //background-color: rgb(85, 0, 0);//棕色
    if (choice == 0) {
        button->setStyleSheet("background-color: rgb(85, 0, 0);");  //默认未启动按键的背景颜色为棕色
    } else if (choice == 1) {
        button->setStyleSheet("background-color: rgb(85, 255, 0);");//待按下的按键为绿色
    } else if (choice == 2) {
        button->setStyleSheet("background-color: rgb(255, 0, 0);"); //按键错误为红色
    }
}



//=========================文本导入相关================================
/*初始化文本*/
void KeyBoard::init_text(QString textpath ,QString text_name)
{
    file_name = text_name.section(".",0,0);     //获取text文件名称
    //判断打字文件是否为中文
    is_chinese = file_name.contains(QRegExp("[\\x4e00-\\x9fa5]+"));     //使用正则表达式 含中文符号返回true
    if(file_name == "英文随机打字练习"){
        is_randomfile = true;
        is_chinese = false;
    }
    //qDebug()<<"这个字符是中文吗"<<" "<<is_chinese;

    //获取文件
    if(is_randomfile){
        get_new_line();
    }
    else{
        file = new QFile(textpath);
        if(!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << "can't open ：" + textpath;
        }
        //接受文件流
        stream = new QTextStream(file);
        //设置文件流的格式为UTf8
        QTextCodec * codec = QTextCodec::codecForName("utf8");
        stream->setCodec(codec);
        //获取新的一行内容
        get_new_line();
    }
}


/*从文件获取新一行，并给模板框设置字符串*/
void KeyBoard::get_new_line()
{
    cur_handled_pos = -1;   //cur_handled_pos:当前处理过的位置 未处理任何一个字符，所以取-1
    static int random_num = 0;
    //判断打开文件的类型：中文/英文
    if (is_chinese) {
        cur_show_str = stream->readLine(LINE_NUMBER2);  //从文件流中一次获取的中文个数
        //限制英文输入模式
        ui->view1->setAttribute(Qt::WA_InputMethodEnabled, true);
        QRegExp rx("^[\u4e00-\u9fa5，。、《》？！；‘：“、|{}]+$");
        QRegExpValidator *latitude = new QRegExpValidator(rx, this);
        ui->view1->setValidator(latitude);
    } else {
        if (is_randomfile) {
            cur_show_str = this->random_string();
            //限制中文输入模式：在 ui->view1 上设置了输入验证,要求其输入必须匹配给定的正则表达式 rx
            ui->view1->setAttribute(Qt::WA_InputMethodEnabled, false);      //默认关闭中文输入模式
            QRegExp rx("^[A-Za-z0-9`~!@#$%^&*()_ -+=<>,.?\\|:;'{}/]+$");    //配置正则表达式
            QRegExpValidator *latitude = new QRegExpValidator(rx, this);    //检测输入内容，仅可显示正则表达式中存在的符号
            ui->view1->setValidator(latitude);
            random_num++;
            qDebug() << "次数为：" << random_num;
        } else {
            cur_show_str = file->read(LINE_NUMBER1);     //读取文件的一行内容
            //限制中文输入模式
            ui->view1->setAttribute(Qt::WA_InputMethodEnabled, false);      //默认关闭中文输入模式
            QRegExp rx("^[A-Za-z0-9`~!@#$%^&*()_ -+=<>,.?\\|:;'{}/]+$");    //配置正则表达式
            QRegExpValidator *latitude = new QRegExpValidator(rx, this);    //检测输入内容，仅可显示正则表达式中存在的符号
            ui->view1->setValidator(latitude);
        }
    }

    //判断是否结束 cur_show_str获取的字符为空时结束
    if (cur_show_str.isEmpty() || random_num > 30) {
        timer->stop();
        //结束处理，弹出成绩
        Recordkeeping re;
        TextList* tl = (TextList*)this->parent();
        tl->grade_widget = new GradeWidget(this);
        tl->grade_widget->setWindowFlags(tl->grade_widget->windowFlags() |Qt::Dialog);  //设置窗口属性
        this->speed = correct_num * 60 / cur_time;
        tl->grade_widget->ui->label->setText("本次成绩为：" + QString::number(speed) + "字/分钟");
        tl->grade_widget->show();
        //获得此轮数据
        re.speed_arg = (double)this->speed;
        re.speed_max = (double)this->speed_max;
        re.speed_min = (double)this->speed_min;
        re.typing_time = this->cur_time/60;
        re.correct_rate = (double)correct_num/(double)cur_charactors;
        //将成绩更新至记录中
        update_grade(re);
        if(is_randomfile){
            is_randomfile = false;
            return;
        }
        file->close();
        return;
    }
    //给view0窗口赋值
    ui->view0->setText(cur_show_str);
    //设置字符颜色
    set_char_background(cur_handled_pos+1,"#FFFFFF",cur_show_str.size());
    set_char_foreground(cur_handled_pos+1, "#32CD32",cur_show_str.size());
    ui->view1->setText("");
    ui->view1->setFocus();  //将view1设置为焦点 打开打字键盘界面后输入的文字内容默认在view1上
    //亮出第一个按钮
    QPushButton* btn = get_button(cur_show_str[0].toLower().toLatin1());    //tolower()返回字符串的小写 tolatin1转换QString为QByteArray
    if (btn) {
        greens.push_back(btn); // 加入绿色列表尾部
        set_btn_color(btn, 1);
    } 
}


/*将成绩更新*/
void KeyBoard::update_grade(Recordkeeping &re)
{
    TextList * tl = (TextList*)this->parent();
    QString cur_file_name = file_name + ".regard";
    //在文件夹中查找对应名称的文件 不存在该文件创建新文件；存在文件返回
    QDir dir(tl->exe_path + "/files/data_file");
    if (!dir.exists(cur_file_name)){
         QFile *file = new QFile(this);
         file->setFileName(tl->exe_path + "/files/data_file/" + cur_file_name);
         bool ret = file->open(QIODevice::WriteOnly);
         if(!ret){
             qDebug()<<"打开失败";
             return;
         }
         file->close();
    }

    //读取文件中的排名数据
    QFile* f1 = new QFile(tl->exe_path + "/files/data_file/" + cur_file_name);
    if (!f1->open(QIODevice::ReadOnly)) {
        qDebug() << "can't open ：" + cur_file_name;
        return;
    }
    QDataStream stream_read(f1);
    QMap<double,Recordkeeping*>map;
    qDebug()<<"运行到此";
    while (!stream_read.atEnd()) {
        double  cur1;   //平均速度
        double  cur2;   //最高速度
        double  cur3;   //最低速度
        double  cur4;   //正确率
        unsigned  cur;  //打字时间
        double key;
        stream_read >> cur1 >>cur2 >>cur3 >>cur4 >>cur;
        Recordkeeping* record = new Recordkeeping(cur1,cur2,cur3,cur4,cur,is_chinese);
        key = record->Com_index();
        map.insert(key,record);
    }
    f1->close();

    //插入新值
    double new_key;
    new_key = re.Com_index();
    map.insert(new_key,&re);
    //保留前十
    if(map.size()>10){
         map.erase(map.begin());
    }

    //将新排序的名次更新到文件中
    QFile* f2 = new QFile(tl->exe_path + "/files/data_file/" + cur_file_name);
    if (!f2->open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qDebug() << "can't open ：" + cur_file_name;
        return;
    }
    QDataStream stream_write(f2);
    for (QMap<double,Recordkeeping*>::iterator it = map.begin(); it !=map.end(); it++) {
        qDebug()<<it.key()<<"内容"<<it.value()->speed_arg;
        stream_write<<it.value()->speed_arg<<it.value()->speed_max<<it.value()->speed_min
                   <<it.value()->correct_rate<<it.value()->typing_time;
    }
    f2->close();
}


/*随机文本生成函数*/
QString KeyBoard::random_string()
{
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    qrand();
    QString str;
    QChar c;
    for(int i = 0; i < 51; i++){
        c = 'a' + qrand() % 26;
        str.push_back(c);
    }
    int sp_num = qrand() % 5 + 10;
    for(int j = 0; j < sp_num; j++){
        int sp_pos = qrand() % 51;
        while(true){
            if(str[sp_pos] != ' '){
                break;
            }
            sp_pos = qrand() % 51;
        }
        str[sp_pos] = ' ';
    }
    return str;
}


//=========================以下为槽函数的定义================================
/*定时器到时槽函数  定时0.1s,更新打字速度*/
void KeyBoard::timerHandleSlot()
{
    cur_time += 1;
    //计算打字速度
    unsigned long speed_1 = cur_charactors * 60 / cur_time;
    if(!is_warning){
        if(speed_1 >= 200){

            qDebug()<<"加时前的速度："<<speed_1<<" "<<"加时前的时间"<<cur_time;
            cur_time += 5;
            unsigned long speed_2 = cur_charactors * 60 / cur_time;
            qDebug()<<"加时后的速度："<<speed_2<<" "<<"加时后的时间"<<cur_time;
            TextList* tl = (TextList*)this->parent();
            tl->ky_warning = new Warning(this);
            tl->ky_warning->setWindowTitle("警告");
            tl->ky_warning->setWindowFlags(tl->ky_warning->windowFlags()|Qt::Dialog);
            tl->ky_warning->setWindowFlag(Qt::WindowStaysOnTopHint,true);
            ui->view1->clearFocus();
            this->ui->view1->clearFocus();
            tl->ky_warning->show();
            is_warning = true;
         }
    }
    this->speed = correct_num * 60 / cur_time;
    //给界面更新数据(打字速度)
    ui->lineEdit3->setText(QString::number(speed));
    if(speed > speed_max){
        speed_max = speed;
    }
    if( speed_min > speed ){
        speed_min = speed;
    }
}


/*用户输入框槽函数:文本改变  view1中文本改变和keybroad的回删键按下触发*/
void KeyBoard::on_view1_textChanged()                   //采用无connect的信号与槽连接 其中格式为 on_对象名_信号
{
    //特别注意的点：因为在做字符样式的修改也会触发到这个槽函数，就会形成一个递归
    if (is_handling) {
        return;
    }
    is_handling = true;

    //只要文本改变，按钮就需要重新改变
    //取消之前的绿色按钮
    for (auto& e : greens) {    //for新形式：e遍历greens中的每一个元素，auto推测出e为QpushButton*类型，
        set_btn_color(e, 0);
    } 
    greens.clear();              //文本改变的就清理greens中的内容  vector.clear()的作用是：把size设置成0，capacity不变
    //取消之前的红色按钮
    for(auto& r : red_btns){
        set_btn_color(r,0); //将之前的按钮重置为棕色
    }
    red_btns.clear();

    //如果是backspace事件
    if (is_backspace) {
        backspace();
        return;
    }

    //如果未开始，则开始计时
    if (!is_start) {
        is_start = true;
        timer->start(1000);
    }

    //本事件为键盘事件，因此每次有按下键盘就会调用该槽函数
    QString str = ui->view1->text();     //str是view1中已经输入的字符
    int len = str.length();
    int num_new = len - cur_handled_pos - 1;
    int num_last = cur_show_str.length() - cur_handled_pos - 1;
    int num = num_new;                   //num：新输入的字符长度（input_str的长度）
    if(num_new > num_last)
    {
        num = num_last;
    }
    //分别获取接收和对比字符串
    QString input_str = str.mid(cur_handled_pos + 1, num);
    //处理cur_handled_pos开始到结束的字符  //cur_handled_pos此时处在上一次输入字符后的最有一个字符的左侧=len-1或者-1
    for (int i = 0; i < num; ++i) {
        if (input_str[i] == cur_show_str[cur_handled_pos + 1 + i]) {
            //正确背景色白，倒数第num-i个字符
            set_char_background(cur_handled_pos+1+i, "#FFFFFF", 1);
            ++correct_num;
        } else {
            //错误，背景色红色
            set_char_background(cur_handled_pos+1+i, "#FF0000", 1);
            QApplication::beep();   //使用系统的音量进行提醒
            ++error_num;
            //做最后按钮的改变 计算len-1位置是否正确，不正确则按钮置红
            QPushButton* new_redbtn = get_button(input_str[i].toLower().toLatin1());
            if (new_redbtn) {
                red_btns.push_back(new_redbtn);
                set_btn_color(new_redbtn, 2);
            }
        }
    }

    //进度更新，并设置几个窗口数据
    cur_charactors += num;
    //更新处理位置
    cur_handled_pos = len - 1;
    ui->lineEdit0->setText(QString::number(correct_num));
    ui->lineEdit1->setText(QString::number(error_num));
    ui->lineEdit2->setText(QString::number((double)correct_num / (double)cur_charactors * 100).mid(0, 4));
    ui->lineEdit4->setText(QString::number((double)cur_charactors / (double)total_charactors * 100).mid(0, 4));
    //如果到输入结尾了，则接收下一行，并将输入框置空
    if (str.size() >= cur_show_str.size()) {
        get_new_line();
        is_handling = false;
        return;
    }
    //将下一个字符的按钮置绿
    set_btn_green();
    //最后要将处理中标志置回
    is_handling = false;
}


/*回删时间处理*/
void KeyBoard::backspace()
{
    //核心处理回删
    --cur_charactors;
    QString cur_str = ui->view1->text(); //将view1中的已经输入的字符串传递给cur_str
    //判断最后一个被删除是正确还是错误
    //比较最后一个输入的字符与view0中的字符是否相同
    bool is_last_true = cur_str[cur_handled_pos] == cur_show_str[cur_handled_pos];
    if (is_last_true) {
        --correct_num;
        ui->lineEdit0->setText(QString::number(correct_num));   //number()返回一个Qstring,该字符串与correct_num相同
    } else {
        --error_num;
        ui->lineEdit1->setText(QString::number(error_num));
        this->set_char_background(cur_handled_pos,"#FFFF00",1);//将错误字符回删的红色背景的字符变为黄色
    }
    //qDebug()
    /*找到光标操作删除最后一个字符*/
    ui->view1->backspace();
    ui->view1->setFocus();
    --cur_handled_pos;

    //将下一个字符置为绿色
    //将键盘上左右两侧的字符的大小分给了不同的shift键
    set_btn_green();
    is_backspace = false;
    is_handling = false;
}


/*按键置绿*/
void KeyBoard::set_btn_green()
{
    //将下一个字符置为绿色
    //将键盘上左右两侧的字符的大小分给了不同的shift键
    char next = cur_show_str[cur_handled_pos + 1].toLatin1();
    if (next == '!' || next == '@' || next == '#' || next == '$' || next == '%' || next == '^' || next == 'Q' || next == 'W' || next == 'E' || next == 'R' || next == 'T'
            || next == 'A' || next == 'S' || next == 'D' || next == 'F' || next == 'G' || next == 'Z' || next == 'X' || next == 'C' || next == 'V' || next == 'B') {
        greens.push_back(ui->pushButton_Shift_2);
        set_btn_color(ui->pushButton_Shift_2, 1);
    } else if (next == '&' || next == '*' || next == '(' || next == ')' || next == '_' || next == '+' || next == '{' || next == '}' || next == '|' || next == ':' || next == '"' || next == '<' || next == '>' || next == '?' ||
               next == 'Y' || next == 'U' || next == 'I' || next == 'O' || next == 'P' || next == 'H' || next == 'J' || next == 'K' || next == 'L' || next == 'N' || next == 'M') {
        greens.push_back(ui->pushButton_Shift);
        set_btn_color(ui->pushButton_Shift, 1);
    }
    QPushButton* new_green = get_button(cur_show_str[cur_handled_pos + 1].toLower().toLatin1());
    if (new_green) {
        greens.push_back(new_green);
        set_btn_color(new_green, 1);
    }
}


/*事件过滤器：监听文本框聚焦情况*/
bool KeyBoard::eventFilter(QObject *watched, QEvent *event)
{
#if 0
    if (watched == ui->view1){                          //首先判断控件(这里指 VIEW1)
        if (event->type()==QEvent::FocusIn){             //然后再判断控件的具体事件 (这里指获得焦点事件)

        }
        if (event->type()==QEvent::FocusOut){            // 这里指 view1 控件的失去焦点事件

        }
    }
#endif
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *e = static_cast<QKeyEvent*>(event);  //使用强制类型转换，将QEvent*->QKeyEvent*类型
        switch (e->key()){
            //回删键信号触发
            case Qt::Key_Backspace  : {                 //过滤器监听到回删按键，然后再发送文本改变信号
                if (ui->view1->text().size() == 0) {
                return true;
                }
                is_backspace = true;
                emit on_view1_textChanged();
                return true;                        //必须有return ture否则backspace会产生效果。
             }
             case Qt::Key_Return     : return true; //屏蔽按键
             case Qt::Key_Enter      : return true;
             case Qt::Key_Delete     : return true;
             case Qt::Key_Tab        : return true;
             case Qt::Key_Escape     : {            //"Esc"按键
                QApplication::beep ();
                qDebug() << "Key_Escape";
                return true;
             }
         }
    }
    return QWidget::eventFilter(watched, event);         // 最后将事件交给上层对话框
}


void KeyBoard::closeEvent(QCloseEvent *event)
{
    event->accept();
    TextList* tl = (TextList*)this->parent();
    tl->show();
}

