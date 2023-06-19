#include "warning.h"
#include "ui_warning.h"
#include "ui_keyboard.h"
Warning::Warning(KeyBoard* kbp, QWidget *parent) :
    QWidget(parent),
    kb(kbp),
    ui(new Ui::warning)
{
    ui->setupUi(this);
}

Warning::~Warning()
{
    delete ui;
}

void Warning::on_pushButton_clicked()
{
    this->hide();
    kb->ui->view1->setFocus();
    kb->is_warning = false;
}
