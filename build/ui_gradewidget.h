/********************************************************************************
** Form generated from reading UI file 'gradewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADEWIDGET_H
#define UI_GRADEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GradeWidget
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *GradeWidget)
    {
        if (GradeWidget->objectName().isEmpty())
            GradeWidget->setObjectName(QString::fromUtf8("GradeWidget"));
        GradeWidget->resize(280, 147);
        label = new QLabel(GradeWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 231, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Agency FB\";"));
        pushButton = new QPushButton(GradeWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 90, 100, 31));

        retranslateUi(GradeWidget);

        QMetaObject::connectSlotsByName(GradeWidget);
    } // setupUi

    void retranslateUi(QWidget *GradeWidget)
    {
        GradeWidget->setWindowTitle(QCoreApplication::translate("GradeWidget", "grade", nullptr));
        label->setText(QCoreApplication::translate("GradeWidget", "\344\275\240\347\232\204\346\234\254\346\254\241\346\210\220\347\273\251\344\270\272 \345\210\206\351\222\237", nullptr));
        pushButton->setText(QCoreApplication::translate("GradeWidget", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GradeWidget: public Ui_GradeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADEWIDGET_H
