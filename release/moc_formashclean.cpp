/****************************************************************************
** Meta object code from reading C++ file 'formashclean.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../forms/formashclean.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formashclean.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormAshClean_t {
    QByteArrayData data[15];
    char stringdata[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormAshClean_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormAshClean_t qt_meta_stringdata_FormAshClean = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FormAshClean"
QT_MOC_LITERAL(1, 13, 12), // "switchToPage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 10), // "updateData"
QT_MOC_LITERAL(5, 44, 8), // "cleanAsh"
QT_MOC_LITERAL(6, 53, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(7, 75, 28), // "on_toolButton_manual_clicked"
QT_MOC_LITERAL(8, 104, 38), // "on_spinBox_thresholdFront_val..."
QT_MOC_LITERAL(9, 143, 4), // "arg1"
QT_MOC_LITERAL(10, 148, 36), // "on_spinBox_thresholdEnd_value..."
QT_MOC_LITERAL(11, 185, 29), // "on_spinBox_delay_valueChanged"
QT_MOC_LITERAL(12, 215, 32), // "on_spinBox_interval_valueChanged"
QT_MOC_LITERAL(13, 248, 28), // "on_radioButtonTiming_clicked"
QT_MOC_LITERAL(14, 277, 26) // "on_radioButtonAuto_clicked"

    },
    "FormAshClean\0switchToPage\0\0index\0"
    "updateData\0cleanAsh\0on_toolButton_clicked\0"
    "on_toolButton_manual_clicked\0"
    "on_spinBox_thresholdFront_valueChanged\0"
    "arg1\0on_spinBox_thresholdEnd_valueChanged\0"
    "on_spinBox_delay_valueChanged\0"
    "on_spinBox_interval_valueChanged\0"
    "on_radioButtonTiming_clicked\0"
    "on_radioButtonAuto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormAshClean[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      11,    1,   82,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormAshClean::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormAshClean *_t = static_cast<FormAshClean *>(_o);
        switch (_id) {
        case 0: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateData(); break;
        case 2: _t->cleanAsh(); break;
        case 3: _t->on_toolButton_clicked(); break;
        case 4: _t->on_toolButton_manual_clicked(); break;
        case 5: _t->on_spinBox_thresholdFront_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinBox_thresholdEnd_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinBox_delay_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinBox_interval_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_radioButtonTiming_clicked(); break;
        case 10: _t->on_radioButtonAuto_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormAshClean::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormAshClean::switchToPage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormAshClean::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormAshClean.data,
      qt_meta_data_FormAshClean,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormAshClean::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormAshClean::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormAshClean.stringdata))
        return static_cast<void*>(const_cast< FormAshClean*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormAshClean::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FormAshClean::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
