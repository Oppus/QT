#ifndef QWDLGMANUAL_H
#define QWDLGMANUAL_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>

class QWDlgManual : public QDialog
{
    Q_OBJECT

private:
    QCheckBox   *chkBoxUnderline;
    QCheckBox   *chkBoxItalic;
    QCheckBox   *chkBoxBold;
    QRadioButton    *rBtnBlack;
    QRadioButton    *rBtnBlue;
    QRadioButton    *rBtnRed;
    QPlainTextEdit  *txtEdit;
    QPushButton     *btnOK;
    QPushButton     *btnClose;
    QPushButton     *btnCancel;
    void iniUI();
    void iniSinalSlots();

private slots:
    void on_chkBoxUnderline(bool checked);
    void on_chkBoxItalic(bool checked);
    void on_chkBoxBold(bool checked);
    void setTextFontColor();

public:
    QWDlgManual(QWidget *parent = 0);
    ~QWDlgManual();
};

#endif // QWDLGMANUAL_H
