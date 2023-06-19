#include "regardtable.h"
#include "ui_regardtable.h"

RegardTable::RegardTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegardTable)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);    //取消this这个ui界面的最大化按钮
    this->setFixedSize(this->width(),this->height());               //固定该窗口的，防止拖动大小
    this->ui->tableWidget->setColumnCount(5);                       //设置列数 添加表头
    this->ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"平均速度"<<"正确率"<<"打字时间"<<"最高速度"<<"最低速度");
    this->ui->tableWidget->setColumnWidth(0,100);   //设置每一列的宽度
    this->ui->tableWidget->setColumnWidth(1,80);
    this->ui->tableWidget->setColumnWidth(2,80);
    this->ui->tableWidget->setColumnWidth(3,100);
    this->ui->tableWidget->setColumnWidth(4,100);
}


RegardTable::~RegardTable()
{
    delete ui;
}


//更新成绩记录
void RegardTable::set_table(const QMap<double,Recordkeeping*>& m) {
    ui->tableWidget->setRowCount(m.size()); //设置成绩记录的行数
    int i = m.size() - 1;
    for(QMap<double,Recordkeeping*>::const_iterator it = m.begin(); it !=m.end(); it++){
        int col = 0;
        //添加内容
         ui->tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(it.value()->speed_arg) + "字/min"));
         ui->tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(it.value()->correct_rate*100, 'f', 2) + "%"));
         ui->tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(it.value()->typing_time) + "min"));
         ui->tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(it.value()->speed_max) + "字/min"));
         ui->tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(it.value()->speed_min) + "字/min"));
         i--;
    }
}


//显示成绩记录的标题
void RegardTable::set_lable(const QString str) {
    ui->label->setText(str);    //修改label中的文本内容
    //label_2使用默认值“打字排名”
}
