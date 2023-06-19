#ifndef WARNING_H
#define WARNING_H

#include <QWidget>
#include "keyboard.h"
namespace Ui {
class warning;
}

class Warning : public QWidget
{
    Q_OBJECT

public:
    explicit Warning(KeyBoard* kb, QWidget *parent = nullptr);
    ~Warning();
    KeyBoard* kb;
private slots:
    void on_pushButton_clicked();
public:
    Ui::warning *ui;
};

#endif // WARNING_H
