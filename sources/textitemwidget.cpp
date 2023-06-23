#include "textitemwidget.h"
#include "ui_textitemwidget.h"
#include <QDebug>
#include <QFile>
#include <QVector>
#include <QMap>
#include "textlist.h"
#include "regardtable.h"

TextItemWidget::TextItemWidget(QString text, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextItemWidget)
{
    // setupUi Qt 的用户界面设计器生成的函数，用于设置用户界面的布局和组件。
    ui->setupUi(this);
    ui->label->setText(text);
}

TextItemWidget::~TextItemWidget()
{
    delete ui;
}

/*按下按键，启动打字界面*/
void TextItemWidget::on_pushButton_clicked()
{
    TextList* tl = (TextList*)this->parent()->parent()->parent();
    /*测试父类 this是textitemwidget this的父类是Qwidget,接着是QlistWidget,最后是TextList
     * qDebug()<<this->parent()->parent()->parent();*/

    if (tl->key_widget) {
        tl->key_widget->close();    //关闭小部件
        tl->key_widget = nullptr;
    }
    tl->key_widget = new KeyBoard(tl);
    tl->key_widget->show();
    tl->key_widget->init_text(tl->exe_path + "/files/text_file/" + ui->label->text(), ui->label->text());
    //QString str = ui->label->text();
    //qDebug()<<str<<" "<<"路径的字符个数："<<str.size();
    tl->hide();         //隐藏文件选择初始界面
}


/*按下按键，启动成绩记录界面*/
void TextItemWidget::on_pushButton_2_clicked()
{
    TextList* tl = (TextList*)this->parent()->parent()->parent();
    if (tl->regard != nullptr) {
        tl->regard->close();
        tl->regard = nullptr;
    }
    QString file_name = (ui->label->text()).section(".",0,0);   //获取文件名称
    QString file_path = tl->exe_path + "/files/data_file/" + file_name + ".regard";   //读取的某个记录文件 名字为对应条目的名称

    //qDebug()<<file_name;
    bool is_chinese;
    is_chinese = file_name.contains(QRegExp("[\\x4e00-\\x9fa5]+"));
    RegardTable* rt = new RegardTable;
    tl->regard = rt;
    rt->setWindowTitle(file_name + "记录排行");
    rt->setWindowFlags(Qt::WindowStaysOnTopHint);

    QFile* f = new QFile(file_path);
    if (!f->open(QIODevice::ReadOnly)) {
        qDebug() << "can't open ：" + file_path;
    }
    QDataStream stream_read(f);
    QVector<unsigned> grades;
    QMap<double,Recordkeeping*>m;
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
            m.insert(key,record);
    }
    f->close();

    rt->set_lable(file_name);
    rt->set_table(m);
    rt->show();
}
