﻿#include "keyboard.h"
//#include "login.h"
#include <QApplication>
#include "textlist.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
#if 0           //进行了修改 0改1
    KeyBoard w;
    w.show();
    w.init_text("./files/test.txt");
#endif

#if 0           //进行了修改 0改1
    Login l;
    l.show();
#endif

#if 1           //进行了修改 1改0
    TextList* t = new TextList;
    t->show();
#endif


    return a.exec();
}
