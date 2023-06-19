/********************************************************************************
** Form generated from reading UI file 'regardtable.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGARDTABLE_H
#define UI_REGARDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegardTable
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *RegardTable)
    {
        if (RegardTable->objectName().isEmpty())
            RegardTable->setObjectName(QString::fromUtf8("RegardTable"));
        RegardTable->resize(540, 450);
        tableWidget = new QTableWidget(RegardTable);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 100, 501, 331));
        tableWidget->setMinimumSize(QSize(0, 331));
        label = new QLabel(RegardTable);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 221, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\345\275\251\344\272\221\";"));
        label_2 = new QLabel(RegardTable);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 50, 141, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::SizeVerCursor));
        label_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(RegardTable);

        QMetaObject::connectSlotsByName(RegardTable);
    } // setupUi

    void retranslateUi(QWidget *RegardTable)
    {
        RegardTable->setWindowTitle(QCoreApplication::translate("RegardTable", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RegardTable", "\346\211\223\345\255\227\351\200\237\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("RegardTable", "\350\256\260\345\275\225\346\216\222\350\241\214", nullptr));
        label_2->setText(QCoreApplication::translate("RegardTable", "\350\256\260\345\275\225\346\216\222\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegardTable: public Ui_RegardTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGARDTABLE_H
