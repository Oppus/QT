/********************************************************************************
** Form generated from reading UI file 'qmywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYWIDGET_H
#define UI_QMYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qmywidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelBoy;
    QSpinBox *spinBoxBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnClassInfo;
    QLabel *labelGirl;
    QSpinBox *spinBoxGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *txtEdit;

    void setupUi(QWidget *qmywidget)
    {
        if (qmywidget->objectName().isEmpty())
            qmywidget->setObjectName(QStringLiteral("qmywidget"));
        qmywidget->resize(400, 300);
        gridLayout_2 = new QGridLayout(qmywidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelBoy = new QLabel(qmywidget);
        labelBoy->setObjectName(QStringLiteral("labelBoy"));

        gridLayout->addWidget(labelBoy, 0, 0, 1, 1);

        spinBoxBoy = new QSpinBox(qmywidget);
        spinBoxBoy->setObjectName(QStringLiteral("spinBoxBoy"));

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(qmywidget);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnClassInfo = new QPushButton(qmywidget);
        btnClassInfo->setObjectName(QStringLiteral("btnClassInfo"));

        gridLayout->addWidget(btnClassInfo, 0, 3, 1, 1);

        labelGirl = new QLabel(qmywidget);
        labelGirl->setObjectName(QStringLiteral("labelGirl"));

        gridLayout->addWidget(labelGirl, 1, 0, 1, 1);

        spinBoxGirl = new QSpinBox(qmywidget);
        spinBoxGirl->setObjectName(QStringLiteral("spinBoxGirl"));

        gridLayout->addWidget(spinBoxGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(qmywidget);
        btnGirlInc->setObjectName(QStringLiteral("btnGirlInc"));

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(qmywidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        txtEdit = new QPlainTextEdit(qmywidget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));

        gridLayout_2->addWidget(txtEdit, 1, 0, 1, 1);


        retranslateUi(qmywidget);
        QObject::connect(btnClear, SIGNAL(clicked()), txtEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(qmywidget);
    } // setupUi

    void retranslateUi(QWidget *qmywidget)
    {
        qmywidget->setWindowTitle(QApplication::translate("qmywidget", "qmywidget", Q_NULLPTR));
        labelBoy->setText(QApplication::translate("qmywidget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("qmywidget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClassInfo->setText(QApplication::translate("qmywidget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        labelGirl->setText(QApplication::translate("qmywidget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", Q_NULLPTR));
        btnGirlInc->setText(QApplication::translate("qmywidget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnClear->setText(QApplication::translate("qmywidget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qmywidget: public Ui_qmywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYWIDGET_H














