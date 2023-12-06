/****************************************************************************
** Meta object code from reading C++ file 'qmywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qmywidget_t {
    QByteArrayData data[9];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qmywidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qmywidget_t qt_meta_stringdata_qmywidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "qmywidget"
QT_MOC_LITERAL(1, 10, 20), // "on_btnBoyInc_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "on_btnGirlInc_clicked"
QT_MOC_LITERAL(4, 54, 23), // "on_btnClassInfo_clicked"
QT_MOC_LITERAL(5, 78, 23), // "on_spinBox_valueChanged"
QT_MOC_LITERAL(6, 102, 4), // "arg1"
QT_MOC_LITERAL(7, 107, 12), // "on_ageChaged"
QT_MOC_LITERAL(8, 120, 5) // "value"

    },
    "qmywidget\0on_btnBoyInc_clicked\0\0"
    "on_btnGirlInc_clicked\0on_btnClassInfo_clicked\0"
    "on_spinBox_valueChanged\0arg1\0on_ageChaged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qmywidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void qmywidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qmywidget *_t = static_cast<qmywidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnBoyInc_clicked(); break;
        case 1: _t->on_btnGirlInc_clicked(); break;
        case 2: _t->on_btnClassInfo_clicked(); break;
        case 3: _t->on_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_ageChaged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qmywidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qmywidget.data,
      qt_meta_data_qmywidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qmywidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qmywidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qmywidget.stringdata0))
        return static_cast<void*>(const_cast< qmywidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int qmywidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
