/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_warning
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *warning)
    {
        if (warning->objectName().isEmpty())
            warning->setObjectName(QString::fromUtf8("warning"));
        warning->resize(266, 147);
        label = new QLabel(warning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 181, 31));
        pushButton = new QPushButton(warning);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 90, 101, 31));

        retranslateUi(warning);

        QMetaObject::connectSlotsByName(warning);
    } // setupUi

    void retranslateUi(QWidget *warning)
    {
        warning->setWindowTitle(QCoreApplication::translate("warning", "Form", nullptr));
        label->setText(QCoreApplication::translate("warning", "warning\357\274\201\350\276\223\345\205\245\351\200\237\345\272\246\350\277\207\345\277\253", nullptr));
        pushButton->setText(QCoreApplication::translate("warning", "\347\273\247\347\273\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class warning: public Ui_warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
