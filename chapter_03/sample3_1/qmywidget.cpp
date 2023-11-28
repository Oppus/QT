#include "qmywidget.h"
#include "ui_qmywidget.h"
#include <QMetaProperty>

qmywidget::qmywidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qmywidget)
{
    ui->setupUi(this);

    boy = new QPerson("王小明");
    boy->setProperty("score",95);
    boy->setProperty("age",17);
    boy->setProperty("sex","Boy");//动态属性
    //connect(boy,SIGNAL(ageChanged(int)),this,SLOT(on_ageChaged(int));
    connect(boy,&QPerson::ageChanged,this,&qmywidget::on_ageChaged);

    girl = new QPerson("张小丽");
    girl->setProperty("score","96");
    girl->setProperty("age",16);
    girl->setProperty("sex","Girl");//动态属性
    //connect(girl,SIGNAL(ageChanged(int)),this,SLOT(on_ageChaged(int)));
    connect(girl,&QPerson::ageChanged,this,&qmywidget::on_ageChaged);

    ui->spinBoxBoy->setProperty("isBoy",true);//动态属性
    ui->spinBoxGirl->setProperty("isBoy",false);

    connect(ui->spinBoxBoy,SIGNAL(valueChanged(int)),this,SLOT(on_spinBox_valueChanged(int)));
    connect(ui->spinBoxGirl,SIGNAL(valueChanged(int)),this,SLOT(on_spinBox_valueChanged(int)));
}

qmywidget::~qmywidget()
{
    delete ui;
}

void qmywidget::on_btnBoyInc_clicked()
{
    //"boy长大一岁"按钮
    boy->incAge();
}

void qmywidget::on_btnGirlInc_clicked()
{
    //"girl长大一岁"按钮
    girl->incAge();
}

void qmywidget::on_btnClassInfo_clicked()
{

}

void qmywidget::on_btnClear_clicked()
{

}

void qmywidget::on_spinBox_valueChanged(int arg1)
{

}

void qmywidget::on_ageChaged(int value)
{

}
