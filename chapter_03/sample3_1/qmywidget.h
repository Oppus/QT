#ifndef QMYWIDGET_H
#define QMYWIDGET_H

#include <QWidget>

namespace Ui {
class qmywidget;
}

class qmywidget : public QWidget
{
    Q_OBJECT

public:
    explicit qmywidget(QWidget *parent = 0);
    ~qmywidget();

private:
    Ui::qmywidget *ui;
};

#endif // QMYWIDGET_H
