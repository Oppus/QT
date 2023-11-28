#ifndef QMYWIDGET_H
#define QMYWIDGET_H

#include <QWidget>
#include "qperson.h"

namespace Ui {
class qmywidget;
}

class qmywidget : public QWidget
{
    Q_OBJECT

private:
    QPerson *boy;
    QPerson *girl;

public:
    explicit qmywidget(QWidget *parent = 0);
    ~qmywidget();

private slots:

    void on_btnBoyInc_clicked();
    void on_btnGirlInc_clicked();
    void on_btnClassInfo_clicked();
    void on_btnClear_clicked();

    void on_spinBoxBoy_valueChanged(int arg1);

private:
    Ui::qmywidget *ui;
};

#endif // QMYWIDGET_H