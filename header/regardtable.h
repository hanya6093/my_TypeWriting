#ifndef REGARDTABLE_H
#define REGARDTABLE_H

#include <QWidget>
#include <QVector>
#include <qmap.h>
#include "recordkeeping.h"

namespace Ui {
class RegardTable;
}

class RegardTable : public QWidget      //排名记录
{
    Q_OBJECT

public:
    explicit RegardTable(QWidget *parent = 0);
    ~RegardTable();

    void set_table(const QMap<double,Recordkeeping*>& m);
    void set_lable(const QString str);

private:
    Ui::RegardTable *ui;
};

#endif // REGARDTABLE_H
