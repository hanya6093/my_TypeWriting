/********************************************************************************
** Form generated from reading UI file 'textlist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTLIST_H
#define UI_TEXTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextList
{
public:
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QWidget *TextList)
    {
        if (TextList->objectName().isEmpty())
            TextList->setObjectName(QString::fromUtf8("TextList"));
        TextList->resize(452, 506);
        label = new QLabel(TextList);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 291, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        listWidget = new QListWidget(TextList);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 431, 451));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        retranslateUi(TextList);

        QMetaObject::connectSlotsByName(TextList);
    } // setupUi

    void retranslateUi(QWidget *TextList)
    {
        TextList->setWindowTitle(QCoreApplication::translate("TextList", "Form", nullptr));
        label->setText(QCoreApplication::translate("TextList", "\350\257\267\351\200\211\346\213\251\346\226\207\346\234\254\345\274\200\345\247\213\347\273\203\344\271\240\345\220\247\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextList: public Ui_TextList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTLIST_H
