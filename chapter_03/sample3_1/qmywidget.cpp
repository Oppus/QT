#include "qmywidget.h"
#include "ui_qmywidget.h"

qmywidget::qmywidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qmywidget)
{
    ui->setupUi(this);
}

qmywidget::~qmywidget()
{
    delete ui;
}

void qmywidget::on_btnBoyInc_clicked()
{
    boy->incAge();
}

void qmywidget::on_btnGirlInc_clicked()
{
    girl->incAge();
}

void qmywidget::on_btnClassInfo_clicked()
{

}

void qmywidget::on_btnClear_clicked()
{

}

void qmywidget::on_spinBoxBoy_valueChanged(int arg1)
{

}
