#include "qwdlgmanual.h"

void QWDlgManual::on_chkBoxUnderline(bool checked)
{
    QFont font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxItalic(bool checked)
{
    QFont font = txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxBold(bool checked)
{
    QFont font = txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::setTextFontColor()
{
    QPalette plt = txtEdit->
}

QWDlgManual::QWDlgManual(QWidget *parent)
    : QDialog(parent)
{
}

QWDlgManual::~QWDlgManual()
{

}
