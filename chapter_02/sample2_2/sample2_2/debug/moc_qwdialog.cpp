/****************************************************************************
** Meta object code from reading C++ file 'qwdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWDialog_t {
    QByteArrayData data[7];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWDialog_t qt_meta_stringdata_QWDialog = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QWDialog"
QT_MOC_LITERAL(1, 9, 28), // "on_checkBoxUnderline_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "checked"
QT_MOC_LITERAL(4, 47, 25), // "on_checkBoxItalic_clicked"
QT_MOC_LITERAL(5, 73, 23), // "on_checkBoxBold_clicked"
QT_MOC_LITERAL(6, 97, 16) // "setTextFontColor"

    },
    "QWDialog\0on_checkBoxUnderline_clicked\0"
    "\0checked\0on_checkBoxItalic_clicked\0"
    "on_checkBoxBold_clicked\0setTextFontColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void QWDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWDialog *_t = static_cast<QWDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBoxUnderline_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_checkBoxItalic_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkBoxBold_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTextFontColor(); break;
        default: ;
        }
    }
}

const QMetaObject QWDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QWDialog.data,
      qt_meta_data_QWDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWDialog.stringdata0))
        return static_cast<void*>(const_cast< QWDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QWDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
