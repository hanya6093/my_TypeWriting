/********************************************************************************
** Form generated from reading UI file 'textitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTITEMWIDGET_H
#define UI_TEXTITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextItemWidget
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *TextItemWidget)
    {
        if (TextItemWidget->objectName().isEmpty())
            TextItemWidget->setObjectName(QString::fromUtf8("TextItemWidget"));
        TextItemWidget->resize(385, 42);
        TextItemWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(218, 153, 255);\n"
"	border-radius:10px;\n"
"}"));
        label = new QLabel(TextItemWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 21));
        pushButton_2 = new QPushButton(TextItemWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 10, 75, 23));
        pushButton = new QPushButton(TextItemWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 10, 75, 23));

        retranslateUi(TextItemWidget);

        QMetaObject::connectSlotsByName(TextItemWidget);
    } // setupUi

    void retranslateUi(QWidget *TextItemWidget)
    {
        TextItemWidget->setWindowTitle(QCoreApplication::translate("TextItemWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("TextItemWidget", "test.txt", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TextItemWidget", "\346\234\200\351\253\230\350\256\260\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("TextItemWidget", "\345\274\200\345\247\213\346\214\221\346\210\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextItemWidget: public Ui_TextItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTITEMWIDGET_H
