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
    // cleanPath 路径归一化函数
    exe_path = QDir::cleanPath(QCoreApplication::applicationDirPath());  // 生成的可行文件所在路径
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
    foreach(const QFileInfo& fileInfo, file_list) {

        /*  1. 获取一个文件的名称,存储在 fileName 中
            2. 在 ui->listWidget 中创建一个新的 QListWidgetItem,赋值为 0
            3. 设置这个 QListWidgetItem 的大小为 385x42
            4. 创建一个新的 TextItemWidget,传入文件名 fileName 和 listWidget
            5. 显示这个 TextItemWidget
            6. 将小部件 w 附加到列表小部件的特定条目 item 上。这将使小部件在列表中显示，并与特定的条目相关联。
        */
        QString fileName = fileInfo.fileName();                             // 检索到的一个文件名字
        QListWidgetItem* item = new QListWidgetItem(ui->listWidget, 0);     //在ui->listWidget中插入一个小条目QlistWidgetItem
        item->setSizeHint(QSize(385,42));                                   //设置小条目的大小
        // TextItemWidget 传入参数为 名字和父类
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
