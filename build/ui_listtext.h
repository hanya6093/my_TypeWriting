/********************************************************************************
** Form generated from reading UI file 'listtext.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTTEXT_H
#define UI_LISTTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListText
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *ListText)
    {
        if (ListText->objectName().isEmpty())
            ListText->setObjectName(QString::fromUtf8("ListText"));
        ListText->resize(345, 394);
        listWidget = new QListWidget(ListText);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 341, 391));

        retranslateUi(ListText);

        QMetaObject::connectSlotsByName(ListText);
    } // setupUi

    void retranslateUi(QWidget *ListText)
    {
        ListText->setWindowTitle(QCoreApplication::translate("ListText", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListText: public Ui_ListText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTTEXT_H
