/********************************************************************************
** Form generated from reading UI file 'keyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARD_H
#define UI_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyBoard
{
public:
    QWidget *centralWidget;
    QTextEdit *view0;
    QFrame *frame0;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label0;
    QLineEdit *lineEdit0;
    QLabel *label1;
    QLineEdit *lineEdit1;
    QLabel *label2;
    QLineEdit *lineEdit2;
    QLabel *label3;
    QLineEdit *lineEdit3;
    QLabel *labe4;
    QLineEdit *lineEdit4;
    QPushButton *pushButton_Tab;
    QPushButton *pushButton_Caps;
    QPushButton *pushButton_Shift;
    QPushButton *pushButton_Space;
    QPushButton *pushButton_Shift_2;
    QPushButton *pushButton_Enter;
    QPushButton *pushButton_rev;
    QPushButton *pushButton_Back;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *pushButton_lang;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_Q;
    QPushButton *pushButton_W;
    QPushButton *pushButton_E;
    QPushButton *pushButton_R;
    QPushButton *pushButton_T;
    QPushButton *pushButton_Y;
    QPushButton *pushButton_U;
    QPushButton *pushButton_I;
    QPushButton *pushButton_O;
    QPushButton *pushButton_P;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;
    QPushButton *pushButton_A;
    QPushButton *pushButton_S;
    QPushButton *pushButton_D;
    QPushButton *pushButton_F;
    QPushButton *pushButton_G;
    QPushButton *pushButton_H;
    QPushButton *pushButton_J;
    QPushButton *pushButton_K;
    QPushButton *pushButton_L;
    QPushButton *pushButton_semi;
    QPushButton *pushButton_quo;
    QPushButton *pushButton_Z;
    QPushButton *pushButton_X;
    QPushButton *pushButton_C;
    QPushButton *pushButton_V;
    QPushButton *pushButton_B;
    QPushButton *pushButton_N;
    QPushButton *pushButton_M;
    QPushButton *pushButton_comma;
    QPushButton *pushButton_full;
    QPushButton *pushButton_div;
    QPushButton *pushButton_Ctrl_l;
    QPushButton *pushButton_Fn_l;
    QPushButton *pushButton_Win;
    QPushButton *pushButton_Alt_l;
    QPushButton *pushButton_Alt_r;
    QPushButton *pushButton_PrtSc;
    QPushButton *pushButton_Fn_r;
    QPushButton *pushButton_Ctrl_r;
    QLineEdit *view1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KeyBoard)
    {
        if (KeyBoard->objectName().isEmpty())
            KeyBoard->setObjectName(QString::fromUtf8("KeyBoard"));
        KeyBoard->resize(1198, 683);
        KeyBoard->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"background-image: url(:/new/prefix1/images/background/240453-13020215052969.jpg);\n"
"}\n"
"\n"
"QPushButton {\n"
"	border-radius:10px;\n"
"	\n"
"	background-color: rgb(85, 0, 0);\n"
"}"));
        centralWidget = new QWidget(KeyBoard);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        view0 = new QTextEdit(centralWidget);
        view0->setObjectName(QString::fromUtf8("view0"));
        view0->setGeometry(QRect(170, 60, 836, 40));
        view0->setMinimumSize(QSize(836, 0));
        view0->setMaximumSize(QSize(836, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        view0->setFont(font);
        view0->setStyleSheet(QString::fromUtf8("font: 27px \"Courier New\";"));
        view0->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view0->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view0->setTextInteractionFlags(Qt::TextSelectableByMouse);
        frame0 = new QFrame(centralWidget);
        frame0->setObjectName(QString::fromUtf8("frame0"));
        frame0->setGeometry(QRect(320, 580, 560, 50));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame0->sizePolicy().hasHeightForWidth());
        frame0->setSizePolicy(sizePolicy);
        frame0->setMinimumSize(QSize(560, 50));
        frame0->setMaximumSize(QSize(560, 50));
        frame0->setStyleSheet(QString::fromUtf8("#frame0{\n"
"	border: 2px dashed gray;\n"
"	/*background: white;*/\n"
"}\n"
"\n"
"\n"
"#label0{\n"
"	background-image:url(\":/images/tool/right.png\");\n"
"}\n"
"#label1{\n"
"	background-image:url(\":/images/tool/error.png\");\n"
"}\n"
"#label2{\n"
"	background-image:url(\":/images/tool/correct_rate1.jpg\");\n"
"}\n"
"#label3{\n"
"	background-image:url(\":/images/tool/speed1.jpg\");\n"
"}\n"
"#label4{\n"
"	background-image:url(\":/images/tool/clock.png\");\n"
"}\n"
"\n"
"QLineEdit{\n"
"	background-color:rgb(255, 255, 255);\n"
"	font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font-size:16px;\n"
"	font-color::rgb(0, 0, 0);\n"
"	height:20px;\n"
"	border-radius:40px\n"
"}"));
        frame0->setFrameShape(QFrame::StyledPanel);
        frame0->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame0);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label0 = new QLabel(frame0);
        label0->setObjectName(QString::fromUtf8("label0"));
        label0->setStyleSheet(QString::fromUtf8(""));
        label0->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/tool/right.png")));

        horizontalLayout_9->addWidget(label0);

        lineEdit0 = new QLineEdit(frame0);
        lineEdit0->setObjectName(QString::fromUtf8("lineEdit0"));
        lineEdit0->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit0);

        label1 = new QLabel(frame0);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/tool/error.png")));

        horizontalLayout_9->addWidget(label1);

        lineEdit1 = new QLineEdit(frame0);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit1);

        label2 = new QLabel(frame0);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/tool/correct_rate1.jpg")));

        horizontalLayout_9->addWidget(label2);

        lineEdit2 = new QLineEdit(frame0);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
        lineEdit2->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit2);

        label3 = new QLabel(frame0);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/tool/speed1.jpg")));

        horizontalLayout_9->addWidget(label3);

        lineEdit3 = new QLineEdit(frame0);
        lineEdit3->setObjectName(QString::fromUtf8("lineEdit3"));
        lineEdit3->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit3);

        labe4 = new QLabel(frame0);
        labe4->setObjectName(QString::fromUtf8("labe4"));

        horizontalLayout_9->addWidget(labe4);

        lineEdit4 = new QLineEdit(frame0);
        lineEdit4->setObjectName(QString::fromUtf8("lineEdit4"));
        lineEdit4->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit4);

        pushButton_Tab = new QPushButton(centralWidget);
        pushButton_Tab->setObjectName(QString::fromUtf8("pushButton_Tab"));
        pushButton_Tab->setEnabled(false);
        pushButton_Tab->setGeometry(QRect(100, 250, 91, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Tab->setFont(font1);
        pushButton_Tab->setStyleSheet(QString::fromUtf8(""));
        pushButton_Caps = new QPushButton(centralWidget);
        pushButton_Caps->setObjectName(QString::fromUtf8("pushButton_Caps"));
        pushButton_Caps->setEnabled(false);
        pushButton_Caps->setGeometry(QRect(100, 320, 111, 61));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_Caps->setFont(font2);
        pushButton_Caps->setStyleSheet(QString::fromUtf8(""));
        pushButton_Shift = new QPushButton(centralWidget);
        pushButton_Shift->setObjectName(QString::fromUtf8("pushButton_Shift"));
        pushButton_Shift->setEnabled(false);
        pushButton_Shift->setGeometry(QRect(100, 390, 141, 61));
        pushButton_Shift->setFont(font2);
        pushButton_Shift->setStyleSheet(QString::fromUtf8(""));
        pushButton_Space = new QPushButton(centralWidget);
        pushButton_Space->setObjectName(QString::fromUtf8("pushButton_Space"));
        pushButton_Space->setEnabled(false);
        pushButton_Space->setGeometry(QRect(410, 460, 321, 61));
        pushButton_Space->setFont(font2);
        pushButton_Space->setStyleSheet(QString::fromUtf8(""));
        pushButton_Shift_2 = new QPushButton(centralWidget);
        pushButton_Shift_2->setObjectName(QString::fromUtf8("pushButton_Shift_2"));
        pushButton_Shift_2->setEnabled(false);
        pushButton_Shift_2->setGeometry(QRect(950, 390, 171, 61));
        pushButton_Shift_2->setFont(font2);
        pushButton_Shift_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_Enter = new QPushButton(centralWidget);
        pushButton_Enter->setObjectName(QString::fromUtf8("pushButton_Enter"));
        pushButton_Enter->setEnabled(false);
        pushButton_Enter->setGeometry(QRect(990, 320, 131, 61));
        pushButton_Enter->setFont(font2);
        pushButton_Enter->setStyleSheet(QString::fromUtf8(""));
        pushButton_rev = new QPushButton(centralWidget);
        pushButton_rev->setObjectName(QString::fromUtf8("pushButton_rev"));
        pushButton_rev->setEnabled(false);
        pushButton_rev->setGeometry(QRect(1040, 250, 81, 61));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_rev->setFont(font3);
        pushButton_rev->setStyleSheet(QString::fromUtf8(""));
        pushButton_Back = new QPushButton(centralWidget);
        pushButton_Back->setObjectName(QString::fromUtf8("pushButton_Back"));
        pushButton_Back->setEnabled(false);
        pushButton_Back->setGeometry(QRect(1010, 180, 111, 61));
        pushButton_Back->setFont(font2);
        pushButton_Back->setStyleSheet(QString::fromUtf8(""));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(100, 160, 1021, 20));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1120, 180, 16, 341));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(80, 180, 16, 341));
        line_3->setLineWidth(3);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(100, 520, 1021, 16));
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_lang = new QPushButton(centralWidget);
        pushButton_lang->setObjectName(QString::fromUtf8("pushButton_lang"));
        pushButton_lang->setEnabled(false);
        pushButton_lang->setGeometry(QRect(100, 180, 61, 61));
        pushButton_lang->setFont(font1);
        pushButton_lang->setStyleSheet(QString::fromUtf8(""));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setEnabled(false);
        pushButton_1->setGeometry(QRect(170, 180, 61, 61));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(240, 180, 61, 61));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setGeometry(QRect(310, 180, 61, 61));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(380, 180, 61, 61));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(450, 180, 61, 61));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8(""));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(false);
        pushButton_6->setGeometry(QRect(520, 180, 61, 61));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8(""));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(false);
        pushButton_7->setGeometry(QRect(590, 180, 61, 61));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8(""));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setEnabled(false);
        pushButton_8->setGeometry(QRect(660, 180, 61, 61));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8(""));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setEnabled(false);
        pushButton_9->setGeometry(QRect(730, 180, 61, 61));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8(""));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setEnabled(false);
        pushButton_0->setGeometry(QRect(800, 180, 61, 61));
        pushButton_0->setFont(font2);
        pushButton_0->setStyleSheet(QString::fromUtf8(""));
        pushButton_sub = new QPushButton(centralWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setEnabled(false);
        pushButton_sub->setGeometry(QRect(870, 180, 61, 61));
        pushButton_sub->setFont(font2);
        pushButton_sub->setStyleSheet(QString::fromUtf8(""));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setEnabled(false);
        pushButton_equal->setGeometry(QRect(940, 180, 61, 61));
        pushButton_equal->setFont(font2);
        pushButton_equal->setStyleSheet(QString::fromUtf8(""));
        pushButton_Q = new QPushButton(centralWidget);
        pushButton_Q->setObjectName(QString::fromUtf8("pushButton_Q"));
        pushButton_Q->setEnabled(false);
        pushButton_Q->setGeometry(QRect(200, 250, 61, 61));
        pushButton_Q->setFont(font2);
        pushButton_Q->setStyleSheet(QString::fromUtf8(""));
        pushButton_W = new QPushButton(centralWidget);
        pushButton_W->setObjectName(QString::fromUtf8("pushButton_W"));
        pushButton_W->setEnabled(false);
        pushButton_W->setGeometry(QRect(270, 250, 61, 61));
        pushButton_W->setFont(font1);
        pushButton_W->setStyleSheet(QString::fromUtf8(""));
        pushButton_E = new QPushButton(centralWidget);
        pushButton_E->setObjectName(QString::fromUtf8("pushButton_E"));
        pushButton_E->setEnabled(false);
        pushButton_E->setGeometry(QRect(340, 250, 61, 61));
        pushButton_E->setFont(font2);
        pushButton_E->setStyleSheet(QString::fromUtf8(""));
        pushButton_R = new QPushButton(centralWidget);
        pushButton_R->setObjectName(QString::fromUtf8("pushButton_R"));
        pushButton_R->setEnabled(false);
        pushButton_R->setGeometry(QRect(410, 250, 61, 61));
        pushButton_R->setFont(font2);
        pushButton_R->setStyleSheet(QString::fromUtf8(""));
        pushButton_T = new QPushButton(centralWidget);
        pushButton_T->setObjectName(QString::fromUtf8("pushButton_T"));
        pushButton_T->setEnabled(false);
        pushButton_T->setGeometry(QRect(480, 250, 61, 61));
        pushButton_T->setFont(font2);
        pushButton_T->setStyleSheet(QString::fromUtf8(""));
        pushButton_Y = new QPushButton(centralWidget);
        pushButton_Y->setObjectName(QString::fromUtf8("pushButton_Y"));
        pushButton_Y->setEnabled(false);
        pushButton_Y->setGeometry(QRect(550, 250, 61, 61));
        pushButton_Y->setFont(font2);
        pushButton_Y->setStyleSheet(QString::fromUtf8(""));
        pushButton_U = new QPushButton(centralWidget);
        pushButton_U->setObjectName(QString::fromUtf8("pushButton_U"));
        pushButton_U->setEnabled(false);
        pushButton_U->setGeometry(QRect(620, 250, 61, 61));
        pushButton_U->setFont(font2);
        pushButton_U->setStyleSheet(QString::fromUtf8(""));
        pushButton_I = new QPushButton(centralWidget);
        pushButton_I->setObjectName(QString::fromUtf8("pushButton_I"));
        pushButton_I->setEnabled(false);
        pushButton_I->setGeometry(QRect(690, 250, 61, 61));
        pushButton_I->setFont(font2);
        pushButton_I->setStyleSheet(QString::fromUtf8(""));
        pushButton_O = new QPushButton(centralWidget);
        pushButton_O->setObjectName(QString::fromUtf8("pushButton_O"));
        pushButton_O->setEnabled(false);
        pushButton_O->setGeometry(QRect(760, 250, 61, 61));
        pushButton_O->setFont(font2);
        pushButton_O->setStyleSheet(QString::fromUtf8(""));
        pushButton_P = new QPushButton(centralWidget);
        pushButton_P->setObjectName(QString::fromUtf8("pushButton_P"));
        pushButton_P->setEnabled(false);
        pushButton_P->setGeometry(QRect(830, 250, 61, 61));
        pushButton_P->setFont(font2);
        pushButton_P->setStyleSheet(QString::fromUtf8(""));
        pushButton_left = new QPushButton(centralWidget);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        pushButton_left->setEnabled(false);
        pushButton_left->setGeometry(QRect(900, 250, 61, 61));
        pushButton_left->setFont(font2);
        pushButton_left->setStyleSheet(QString::fromUtf8(""));
        pushButton_right = new QPushButton(centralWidget);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        pushButton_right->setEnabled(false);
        pushButton_right->setGeometry(QRect(970, 250, 61, 61));
        pushButton_right->setFont(font2);
        pushButton_right->setStyleSheet(QString::fromUtf8(""));
        pushButton_A = new QPushButton(centralWidget);
        pushButton_A->setObjectName(QString::fromUtf8("pushButton_A"));
        pushButton_A->setEnabled(false);
        pushButton_A->setGeometry(QRect(220, 320, 61, 61));
        pushButton_A->setFont(font2);
        pushButton_A->setStyleSheet(QString::fromUtf8(""));
        pushButton_S = new QPushButton(centralWidget);
        pushButton_S->setObjectName(QString::fromUtf8("pushButton_S"));
        pushButton_S->setEnabled(false);
        pushButton_S->setGeometry(QRect(290, 320, 61, 61));
        pushButton_S->setFont(font2);
        pushButton_S->setStyleSheet(QString::fromUtf8(""));
        pushButton_D = new QPushButton(centralWidget);
        pushButton_D->setObjectName(QString::fromUtf8("pushButton_D"));
        pushButton_D->setEnabled(false);
        pushButton_D->setGeometry(QRect(360, 320, 61, 61));
        pushButton_D->setFont(font2);
        pushButton_D->setStyleSheet(QString::fromUtf8(""));
        pushButton_F = new QPushButton(centralWidget);
        pushButton_F->setObjectName(QString::fromUtf8("pushButton_F"));
        pushButton_F->setEnabled(false);
        pushButton_F->setGeometry(QRect(430, 320, 61, 61));
        pushButton_F->setFont(font2);
        pushButton_F->setStyleSheet(QString::fromUtf8(""));
        pushButton_G = new QPushButton(centralWidget);
        pushButton_G->setObjectName(QString::fromUtf8("pushButton_G"));
        pushButton_G->setEnabled(false);
        pushButton_G->setGeometry(QRect(500, 320, 61, 61));
        pushButton_G->setFont(font2);
        pushButton_G->setStyleSheet(QString::fromUtf8(""));
        pushButton_H = new QPushButton(centralWidget);
        pushButton_H->setObjectName(QString::fromUtf8("pushButton_H"));
        pushButton_H->setEnabled(false);
        pushButton_H->setGeometry(QRect(570, 320, 61, 61));
        pushButton_H->setFont(font2);
        pushButton_H->setStyleSheet(QString::fromUtf8(""));
        pushButton_J = new QPushButton(centralWidget);
        pushButton_J->setObjectName(QString::fromUtf8("pushButton_J"));
        pushButton_J->setEnabled(false);
        pushButton_J->setGeometry(QRect(640, 320, 61, 61));
        pushButton_J->setFont(font2);
        pushButton_J->setStyleSheet(QString::fromUtf8(""));
        pushButton_K = new QPushButton(centralWidget);
        pushButton_K->setObjectName(QString::fromUtf8("pushButton_K"));
        pushButton_K->setEnabled(false);
        pushButton_K->setGeometry(QRect(710, 320, 61, 61));
        pushButton_K->setFont(font2);
        pushButton_K->setStyleSheet(QString::fromUtf8(""));
        pushButton_L = new QPushButton(centralWidget);
        pushButton_L->setObjectName(QString::fromUtf8("pushButton_L"));
        pushButton_L->setEnabled(false);
        pushButton_L->setGeometry(QRect(780, 320, 61, 61));
        pushButton_L->setFont(font2);
        pushButton_L->setStyleSheet(QString::fromUtf8(""));
        pushButton_semi = new QPushButton(centralWidget);
        pushButton_semi->setObjectName(QString::fromUtf8("pushButton_semi"));
        pushButton_semi->setEnabled(false);
        pushButton_semi->setGeometry(QRect(850, 320, 61, 61));
        pushButton_semi->setFont(font2);
        pushButton_semi->setStyleSheet(QString::fromUtf8(""));
        pushButton_quo = new QPushButton(centralWidget);
        pushButton_quo->setObjectName(QString::fromUtf8("pushButton_quo"));
        pushButton_quo->setEnabled(false);
        pushButton_quo->setGeometry(QRect(920, 320, 61, 61));
        pushButton_quo->setFont(font2);
        pushButton_quo->setStyleSheet(QString::fromUtf8(""));
        pushButton_Z = new QPushButton(centralWidget);
        pushButton_Z->setObjectName(QString::fromUtf8("pushButton_Z"));
        pushButton_Z->setEnabled(false);
        pushButton_Z->setGeometry(QRect(250, 390, 61, 61));
        pushButton_Z->setFont(font2);
        pushButton_Z->setStyleSheet(QString::fromUtf8(""));
        pushButton_X = new QPushButton(centralWidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setEnabled(false);
        pushButton_X->setGeometry(QRect(320, 390, 61, 61));
        pushButton_X->setFont(font2);
        pushButton_X->setStyleSheet(QString::fromUtf8(""));
        pushButton_C = new QPushButton(centralWidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setEnabled(false);
        pushButton_C->setGeometry(QRect(390, 390, 61, 61));
        pushButton_C->setFont(font2);
        pushButton_C->setStyleSheet(QString::fromUtf8(""));
        pushButton_V = new QPushButton(centralWidget);
        pushButton_V->setObjectName(QString::fromUtf8("pushButton_V"));
        pushButton_V->setEnabled(false);
        pushButton_V->setGeometry(QRect(460, 390, 61, 61));
        pushButton_V->setFont(font2);
        pushButton_V->setStyleSheet(QString::fromUtf8(""));
        pushButton_B = new QPushButton(centralWidget);
        pushButton_B->setObjectName(QString::fromUtf8("pushButton_B"));
        pushButton_B->setEnabled(false);
        pushButton_B->setGeometry(QRect(530, 390, 61, 61));
        pushButton_B->setFont(font2);
        pushButton_B->setStyleSheet(QString::fromUtf8(""));
        pushButton_N = new QPushButton(centralWidget);
        pushButton_N->setObjectName(QString::fromUtf8("pushButton_N"));
        pushButton_N->setEnabled(false);
        pushButton_N->setGeometry(QRect(600, 390, 61, 61));
        pushButton_N->setFont(font1);
        pushButton_N->setStyleSheet(QString::fromUtf8(""));
        pushButton_M = new QPushButton(centralWidget);
        pushButton_M->setObjectName(QString::fromUtf8("pushButton_M"));
        pushButton_M->setEnabled(false);
        pushButton_M->setGeometry(QRect(670, 390, 61, 61));
        pushButton_M->setFont(font1);
        pushButton_M->setStyleSheet(QString::fromUtf8(""));
        pushButton_comma = new QPushButton(centralWidget);
        pushButton_comma->setObjectName(QString::fromUtf8("pushButton_comma"));
        pushButton_comma->setEnabled(false);
        pushButton_comma->setGeometry(QRect(740, 390, 61, 61));
        pushButton_comma->setFont(font2);
        pushButton_comma->setStyleSheet(QString::fromUtf8(""));
        pushButton_full = new QPushButton(centralWidget);
        pushButton_full->setObjectName(QString::fromUtf8("pushButton_full"));
        pushButton_full->setEnabled(false);
        pushButton_full->setGeometry(QRect(810, 390, 61, 61));
        pushButton_full->setFont(font2);
        pushButton_full->setStyleSheet(QString::fromUtf8(""));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setEnabled(false);
        pushButton_div->setGeometry(QRect(880, 390, 61, 61));
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QString::fromUtf8(""));
        pushButton_Ctrl_l = new QPushButton(centralWidget);
        pushButton_Ctrl_l->setObjectName(QString::fromUtf8("pushButton_Ctrl_l"));
        pushButton_Ctrl_l->setEnabled(false);
        pushButton_Ctrl_l->setGeometry(QRect(100, 460, 91, 61));
        pushButton_Ctrl_l->setFont(font2);
        pushButton_Ctrl_l->setStyleSheet(QString::fromUtf8(""));
        pushButton_Fn_l = new QPushButton(centralWidget);
        pushButton_Fn_l->setObjectName(QString::fromUtf8("pushButton_Fn_l"));
        pushButton_Fn_l->setEnabled(false);
        pushButton_Fn_l->setGeometry(QRect(200, 460, 61, 61));
        pushButton_Fn_l->setFont(font2);
        pushButton_Fn_l->setStyleSheet(QString::fromUtf8(""));
        pushButton_Win = new QPushButton(centralWidget);
        pushButton_Win->setObjectName(QString::fromUtf8("pushButton_Win"));
        pushButton_Win->setEnabled(false);
        pushButton_Win->setGeometry(QRect(270, 460, 61, 61));
        pushButton_Win->setFont(font2);
        pushButton_Win->setStyleSheet(QString::fromUtf8(""));
        pushButton_Alt_l = new QPushButton(centralWidget);
        pushButton_Alt_l->setObjectName(QString::fromUtf8("pushButton_Alt_l"));
        pushButton_Alt_l->setEnabled(false);
        pushButton_Alt_l->setGeometry(QRect(340, 460, 61, 61));
        pushButton_Alt_l->setFont(font2);
        pushButton_Alt_l->setStyleSheet(QString::fromUtf8(""));
        pushButton_Alt_r = new QPushButton(centralWidget);
        pushButton_Alt_r->setObjectName(QString::fromUtf8("pushButton_Alt_r"));
        pushButton_Alt_r->setEnabled(false);
        pushButton_Alt_r->setGeometry(QRect(740, 460, 61, 61));
        pushButton_Alt_r->setFont(font2);
        pushButton_Alt_r->setStyleSheet(QString::fromUtf8(""));
        pushButton_PrtSc = new QPushButton(centralWidget);
        pushButton_PrtSc->setObjectName(QString::fromUtf8("pushButton_PrtSc"));
        pushButton_PrtSc->setEnabled(false);
        pushButton_PrtSc->setGeometry(QRect(810, 460, 61, 61));
        pushButton_PrtSc->setFont(font2);
        pushButton_PrtSc->setStyleSheet(QString::fromUtf8(""));
        pushButton_Fn_r = new QPushButton(centralWidget);
        pushButton_Fn_r->setObjectName(QString::fromUtf8("pushButton_Fn_r"));
        pushButton_Fn_r->setEnabled(false);
        pushButton_Fn_r->setGeometry(QRect(880, 460, 61, 61));
        pushButton_Fn_r->setFont(font2);
        pushButton_Fn_r->setStyleSheet(QString::fromUtf8(""));
        pushButton_Ctrl_r = new QPushButton(centralWidget);
        pushButton_Ctrl_r->setObjectName(QString::fromUtf8("pushButton_Ctrl_r"));
        pushButton_Ctrl_r->setEnabled(false);
        pushButton_Ctrl_r->setGeometry(QRect(950, 460, 91, 61));
        pushButton_Ctrl_r->setFont(font2);
        pushButton_Ctrl_r->setStyleSheet(QString::fromUtf8(""));
        view1 = new QLineEdit(centralWidget);
        view1->setObjectName(QString::fromUtf8("view1"));
        view1->setGeometry(QRect(170, 100, 836, 40));
        view1->setStyleSheet(QString::fromUtf8("font: 27px \"Courier New\";"));
        KeyBoard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KeyBoard);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1198, 26));
        KeyBoard->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KeyBoard);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KeyBoard->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KeyBoard);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KeyBoard->setStatusBar(statusBar);

        retranslateUi(KeyBoard);

        QMetaObject::connectSlotsByName(KeyBoard);
    } // setupUi

    void retranslateUi(QMainWindow *KeyBoard)
    {
        KeyBoard->setWindowTitle(QCoreApplication::translate("KeyBoard", "KeyBoard", nullptr));
        view0->setHtml(QCoreApplication::translate("KeyBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier New'; font-size:27px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:72;\">When you are a child, you are good.</span></p></body></html>", nullptr));
        label0->setText(QString());
        lineEdit0->setText(QCoreApplication::translate("KeyBoard", "0", nullptr));
        label1->setText(QString());
        lineEdit1->setText(QCoreApplication::translate("KeyBoard", "0", nullptr));
        label2->setText(QString());
        lineEdit2->setText(QCoreApplication::translate("KeyBoard", "0", nullptr));
        label3->setText(QString());
        lineEdit3->setText(QCoreApplication::translate("KeyBoard", "0", nullptr));
        labe4->setText(QCoreApplication::translate("KeyBoard", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">\350\277\233\345\272\246</span></p></body></html>", nullptr));
        lineEdit4->setText(QCoreApplication::translate("KeyBoard", "0", nullptr));
        pushButton_Tab->setText(QCoreApplication::translate("KeyBoard", "Tab", nullptr));
        pushButton_Caps->setText(QCoreApplication::translate("KeyBoard", "CapsLock", nullptr));
        pushButton_Shift->setText(QCoreApplication::translate("KeyBoard", "Shift", nullptr));
        pushButton_Space->setText(QCoreApplication::translate("KeyBoard", "Space", nullptr));
        pushButton_Shift_2->setText(QCoreApplication::translate("KeyBoard", "Shift", nullptr));
        pushButton_Enter->setText(QCoreApplication::translate("KeyBoard", "Enter", nullptr));
        pushButton_rev->setText(QCoreApplication::translate("KeyBoard", "|\n"
"\n"
"\\", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("KeyBoard", "Backspace", nullptr));
        pushButton_lang->setText(QCoreApplication::translate("KeyBoard", "~\n"
"\n"
"`", nullptr));
        pushButton_1->setText(QCoreApplication::translate("KeyBoard", "!\n"
"\n"
"1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("KeyBoard", "@\n"
"\n"
"2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("KeyBoard", "#\n"
"\n"
"3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("KeyBoard", "$\n"
"\n"
"4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("KeyBoard", "%\n"
"\n"
"5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("KeyBoard", "^\n"
"\n"
"6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("KeyBoard", "&\n"
"\n"
"7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("KeyBoard", "*\n"
"\n"
"8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("KeyBoard", "(\n"
"\n"
"9", nullptr));
        pushButton_0->setText(QCoreApplication::translate("KeyBoard", ")\n"
"\n"
"0", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("KeyBoard", "\342\200\224\n"
"\n"
"-", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("KeyBoard", "+\n"
"\n"
"=", nullptr));
        pushButton_Q->setText(QCoreApplication::translate("KeyBoard", "Q", nullptr));
        pushButton_W->setText(QCoreApplication::translate("KeyBoard", "W", nullptr));
        pushButton_E->setText(QCoreApplication::translate("KeyBoard", "E", nullptr));
        pushButton_R->setText(QCoreApplication::translate("KeyBoard", "R", nullptr));
        pushButton_T->setText(QCoreApplication::translate("KeyBoard", "T", nullptr));
        pushButton_Y->setText(QCoreApplication::translate("KeyBoard", "Y", nullptr));
        pushButton_U->setText(QCoreApplication::translate("KeyBoard", "U", nullptr));
        pushButton_I->setText(QCoreApplication::translate("KeyBoard", "I", nullptr));
        pushButton_O->setText(QCoreApplication::translate("KeyBoard", "O", nullptr));
        pushButton_P->setText(QCoreApplication::translate("KeyBoard", "P", nullptr));
        pushButton_left->setText(QCoreApplication::translate("KeyBoard", "{\n"
"\n"
"[", nullptr));
        pushButton_right->setText(QCoreApplication::translate("KeyBoard", "}\n"
"\n"
"]", nullptr));
        pushButton_A->setText(QCoreApplication::translate("KeyBoard", "A", nullptr));
        pushButton_S->setText(QCoreApplication::translate("KeyBoard", "S", nullptr));
        pushButton_D->setText(QCoreApplication::translate("KeyBoard", "D", nullptr));
        pushButton_F->setText(QCoreApplication::translate("KeyBoard", "F", nullptr));
        pushButton_G->setText(QCoreApplication::translate("KeyBoard", "G", nullptr));
        pushButton_H->setText(QCoreApplication::translate("KeyBoard", "H", nullptr));
        pushButton_J->setText(QCoreApplication::translate("KeyBoard", "J", nullptr));
        pushButton_K->setText(QCoreApplication::translate("KeyBoard", "K", nullptr));
        pushButton_L->setText(QCoreApplication::translate("KeyBoard", "L", nullptr));
        pushButton_semi->setText(QCoreApplication::translate("KeyBoard", ":\n"
"\n"
";", nullptr));
        pushButton_quo->setText(QCoreApplication::translate("KeyBoard", "\"\n"
"\n"
"'", nullptr));
        pushButton_Z->setText(QCoreApplication::translate("KeyBoard", "Z", nullptr));
        pushButton_X->setText(QCoreApplication::translate("KeyBoard", "X", nullptr));
        pushButton_C->setText(QCoreApplication::translate("KeyBoard", "C", nullptr));
        pushButton_V->setText(QCoreApplication::translate("KeyBoard", "V", nullptr));
        pushButton_B->setText(QCoreApplication::translate("KeyBoard", "B", nullptr));
        pushButton_N->setText(QCoreApplication::translate("KeyBoard", "N", nullptr));
        pushButton_M->setText(QCoreApplication::translate("KeyBoard", "M", nullptr));
        pushButton_comma->setText(QCoreApplication::translate("KeyBoard", "<\n"
"\n"
",", nullptr));
        pushButton_full->setText(QCoreApplication::translate("KeyBoard", ">\n"
"\n"
".", nullptr));
        pushButton_div->setText(QCoreApplication::translate("KeyBoard", "?\n"
"\n"
"/", nullptr));
        pushButton_Ctrl_l->setText(QCoreApplication::translate("KeyBoard", "Ctrl", nullptr));
        pushButton_Fn_l->setText(QCoreApplication::translate("KeyBoard", "Fn", nullptr));
        pushButton_Win->setText(QCoreApplication::translate("KeyBoard", "Win", nullptr));
        pushButton_Alt_l->setText(QCoreApplication::translate("KeyBoard", "Alt", nullptr));
        pushButton_Alt_r->setText(QCoreApplication::translate("KeyBoard", "Alt", nullptr));
        pushButton_PrtSc->setText(QCoreApplication::translate("KeyBoard", "PrtSc", nullptr));
        pushButton_Fn_r->setText(QCoreApplication::translate("KeyBoard", "Fn", nullptr));
        pushButton_Ctrl_r->setText(QCoreApplication::translate("KeyBoard", "Ctrl", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyBoard: public Ui_KeyBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARD_H
