/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxUnderline;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(572, 531);
        verticalLayout = new QVBoxLayout(QWDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBoxUnderline = new QCheckBox(groupBox);
        checkBoxUnderline->setObjectName(QStringLiteral("checkBoxUnderline"));

        horizontalLayout_3->addWidget(checkBoxUnderline);

        checkBoxItalic = new QCheckBox(groupBox);
        checkBoxItalic->setObjectName(QStringLiteral("checkBoxItalic"));

        horizontalLayout_3->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(groupBox);
        checkBoxBold->setObjectName(QStringLiteral("checkBoxBold"));

        horizontalLayout_3->addWidget(checkBoxBold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));

        horizontalLayout_4->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));

        horizontalLayout_4->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));

        horizontalLayout_4->addWidget(rBtnBlue);


        verticalLayout->addWidget(groupBox_2);

        plainTextEdit = new QPlainTextEdit(QWDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font;
        font.setPointSize(20);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        groupBox_3 = new QGroupBox(QWDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(107, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btnOK = new QPushButton(groupBox_3);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout_5->addWidget(btnOK);

        btnCancel = new QPushButton(groupBox_3);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_5->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(106, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(groupBox_3);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_5->addWidget(btnClose);


        verticalLayout->addWidget(groupBox_3);

        QWidget::setTabOrder(checkBoxItalic, rBtnBlack);
        QWidget::setTabOrder(rBtnBlack, rBtnRed);
        QWidget::setTabOrder(rBtnRed, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnClose);

        retranslateUi(QWDialog);
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "QWDialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        checkBoxUnderline->setText(QApplication::translate("QWDialog", "Underline", Q_NULLPTR));
        checkBoxItalic->setText(QApplication::translate("QWDialog", "Italic", Q_NULLPTR));
        checkBoxBold->setText(QApplication::translate("QWDialog", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QApplication::translate("QWDialog", "Black", Q_NULLPTR));
        rBtnRed->setText(QApplication::translate("QWDialog", "Red", Q_NULLPTR));
        rBtnBlue->setText(QApplication::translate("QWDialog", "Blue", Q_NULLPTR));
        plainTextEdit->setPlainText(QString());
        groupBox_3->setTitle(QString());
        btnOK->setText(QApplication::translate("QWDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QWDialog", "\345\217\226\346\266\210", Q_NULLPTR));
        btnClose->setText(QApplication::translate("QWDialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
