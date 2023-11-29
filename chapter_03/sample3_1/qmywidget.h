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
    void on_ageChaged(int value);

    void on_btnBoyInc_clicked();
    void on_btnGirlInc_clicked();
    void on_btnClassInfo_clicked();

    void on_spinBox_valueChanged(int arg1);
    void on_ageChaged(int value);

private:
    Ui::qmywidget *ui;
};

#endif // QMYWIDGET_H
