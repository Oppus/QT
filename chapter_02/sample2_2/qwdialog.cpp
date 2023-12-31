#include "qwdialog.h"
#include "ui_qwdialog.h"

QWDialog::QWDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QWDialog)
{
    ui->setupUi(this);
    QObject::connect(ui->rBtnBlack, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    QObject::connect(ui->rBtnBlue, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    QObject::connect(ui->rBtnRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
}

QWDialog::~QWDialog()
{
    delete ui;
}

void QWDialog::on_checkBoxUnderline_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}

void QWDialog::on_checkBoxItalic_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void QWDialog::on_checkBoxBold_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void QWDialog::setTextFontColor()
{
    QPalette palette = ui->plainTextEdit->palette();
    if(ui->rBtnBlack->isChecked())
        palette.setColor(QPalette::Text, Qt::black);
    else if(ui->rBtnBlue->isChecked())
        palette.setColor(QPalette::Text, Qt::blue);
    else if(ui->rBtnRed->isChecked())
        palette.setColor(QPalette::Text, Qt::red);
    else
        palette.setColor(QPalette::Text, Qt::black);

    ui->plainTextEdit->setPalette(palette);
}
