#include "textlist.h"
#include "ui_textlist.h"
#include "textitemwidget.h"

#include <QDebug>
#include <QDir>

TextList::TextList(QWidget *parent) :
    QWidget(parent),
    key_widget(nullptr),
    grade_widget(nullptr),
    regard(nullptr),
    exe_path(),
    ui(new Ui::TextList)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());   //固定窗口大小
    this->setWindowTitle("选择界面");
    // 遍历文件夹
    exe_path = QDir::cleanPath(QCoreApplication::applicationDirPath());  //应用程序所在路径
    // qDebug()<<"应用程序路径为："<<exe_path;
    // exe_path = "/home/lj/my_TypeWriting";
    QDir dir(exe_path+"/files/text_file");
    if(!dir.exists()) {
        qDebug() << "it is not true path";
        return ;
    }
    /* 设置过滤配置,只匹配文件 */
    dir.setFilter(QDir::Files);

    /* 返回目录中所有文件和目录的QFileInfo对象列表 */
    QFileInfoList file_list = dir.entryInfoList();
    //遍历files文件夹中的所有文件
    foreach(const QFileInfo &fileInfo, file_list) {
        QString fileName = fileInfo.fileName();                             // 检索到的一个文件名字
        QListWidgetItem* item = new QListWidgetItem(ui->listWidget, 0);     //在ui->listWidget中插入一个小条目QlistWidgetItem
        item->setSizeHint(QSize(385,42));                                   //设置小条目的大小
        QWidget* w = new TextItemWidget(fileName, ui->listWidget);          //创建新的textitemWidget目录框，files文件夹中的文件名称作为text,
        w->show();
        ui->listWidget->setItemWidget(item, w);                             //使w在item中展示

        //qDebug() << fileName;
    }
}

TextList::~TextList()
{
    delete ui;
}
