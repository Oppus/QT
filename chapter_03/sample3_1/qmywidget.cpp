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
    //"类的元对象信息"按钮
    //const QMetaObject *meta = boy->metaObject();
    const QMetaObject *meta = girl->metaObject();
    //const QMetaObject *meta = ui->spinBoy->metaObject();
    ui->txtEdit->clear();

    ui->txtEdit->appendPlainText("==元对象信息==\n");
    ui->txtEdit->appendPlainText(QString("类名称：%1\n").arg(meta->className()));

    ui->txtEdit->appendPlainText("property");
    for(int i = meta->propertyOffset();i<meta->propertyCount();i++)
    {
        const char *proName = meta->property(i).name();
        ui->txtEdit->appendPlainText(QString("属性名称=%1，属性值=2%").arg(proName).arg(boy->property(proName).toString()));
    }

    ui->txtEdit->appendPlainText("");
    ui->txtEdit->appendPlainText("classInfo");
    for(int i = meta->classInfoOffset();i<meta->classInfoCount();++i)
    {
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->txtEdit->appendPlainText(QString("Name=%1; Value=%2").arg(classInfo.name()).arg(classInfo.value()));
    }

}

void qmywidget::on_spinBox_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    QSpinBox *spinBox = qobject_cast<QSpinBox *>(sender());
    if(spinBox->property("isBoy").toBool())
        boy->setAge(spinBox->value());
    else
        girl->setAge(spinBox->value());
}

void qmywidget::on_ageChaged(int value)
{
    //响应QPerson的ageChanged()信号
    Q_UNUSED(value);
    QPerson *aPerson = qobject_cast<QPerson *>(sender());//类型投射
    QString hisName = aPerson->property("name").toString();//姓名
    QString hisSex = aPerson->property("sex").toString();//动态属性 构造函数中定义
    int hisAge = aPerson->age();//通过接口函数获取年龄，上面的姓名只有m_name,没有name()

    ui->txtEdit->appendPlainText(hisName+','+hisSex+
                                 QString::asprintf(",年龄 = %d",hisAge));
}
