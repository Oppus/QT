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
