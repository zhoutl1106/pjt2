/****************************************************************************
** Meta object code from reading C++ file 'formccdcurve.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../forms/formccdcurve.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formccdcurve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormCCDCurve_t {
    QByteArrayData data[26];
    char stringdata[474];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormCCDCurve_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormCCDCurve_t qt_meta_stringdata_FormCCDCurve = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FormCCDCurve"
QT_MOC_LITERAL(1, 13, 12), // "switchToPage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 10), // "updateData"
QT_MOC_LITERAL(5, 44, 11), // "updateRange"
QT_MOC_LITERAL(6, 56, 5), // "upper"
QT_MOC_LITERAL(7, 62, 5), // "lower"
QT_MOC_LITERAL(8, 68, 9), // "updateCCD"
QT_MOC_LITERAL(9, 78, 5), // "array"
QT_MOC_LITERAL(10, 84, 25), // "on_spinBox_f_valueChanged"
QT_MOC_LITERAL(11, 110, 4), // "arg1"
QT_MOC_LITERAL(12, 115, 27), // "on_toolButton_Clear_clicked"
QT_MOC_LITERAL(13, 143, 35), // "on_horizontalScrollBar_valueC..."
QT_MOC_LITERAL(14, 179, 5), // "value"
QT_MOC_LITERAL(15, 185, 31), // "on_spinBox_channel_valueChanged"
QT_MOC_LITERAL(16, 217, 7), // "onTimer"
QT_MOC_LITERAL(17, 225, 8), // "onPeriod"
QT_MOC_LITERAL(18, 234, 30), // "on_toolButton_SetRange_clicked"
QT_MOC_LITERAL(19, 265, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(20, 287, 30), // "on_toolButton_seperate_clicked"
QT_MOC_LITERAL(21, 318, 25), // "on_toolButton_all_clicked"
QT_MOC_LITERAL(22, 344, 31), // "on_toolButton_clockwise_clicked"
QT_MOC_LITERAL(23, 376, 35), // "on_toolButton_anticlockwise_c..."
QT_MOC_LITERAL(24, 412, 30), // "on_toolButton_transmit_clicked"
QT_MOC_LITERAL(25, 443, 30) // "on_toolButton_continue_clicked"

    },
    "FormCCDCurve\0switchToPage\0\0index\0"
    "updateData\0updateRange\0upper\0lower\0"
    "updateCCD\0array\0on_spinBox_f_valueChanged\0"
    "arg1\0on_toolButton_Clear_clicked\0"
    "on_horizontalScrollBar_valueChanged\0"
    "value\0on_spinBox_channel_valueChanged\0"
    "onTimer\0onPeriod\0on_toolButton_SetRange_clicked\0"
    "on_toolButton_clicked\0"
    "on_toolButton_seperate_clicked\0"
    "on_toolButton_all_clicked\0"
    "on_toolButton_clockwise_clicked\0"
    "on_toolButton_anticlockwise_clicked\0"
    "on_toolButton_transmit_clicked\0"
    "on_toolButton_continue_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormCCDCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  107,    2, 0x0a /* Public */,
       5,    2,  108,    2, 0x0a /* Public */,
       8,    1,  113,    2, 0x0a /* Public */,
      10,    1,  116,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    1,  120,    2, 0x08 /* Private */,
      15,    1,  123,    2, 0x08 /* Private */,
      16,    0,  126,    2, 0x08 /* Private */,
      17,    0,  127,    2, 0x08 /* Private */,
      18,    0,  128,    2, 0x08 /* Private */,
      19,    0,  129,    2, 0x08 /* Private */,
      20,    0,  130,    2, 0x08 /* Private */,
      21,    0,  131,    2, 0x08 /* Private */,
      22,    0,  132,    2, 0x08 /* Private */,
      23,    0,  133,    2, 0x08 /* Private */,
      24,    0,  134,    2, 0x08 /* Private */,
      25,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormCCDCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormCCDCurve *_t = static_cast<FormCCDCurve *>(_o);
        switch (_id) {
        case 0: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateData(); break;
        case 2: _t->updateRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->updateCCD((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->on_spinBox_f_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_toolButton_Clear_clicked(); break;
        case 6: _t->on_horizontalScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinBox_channel_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onTimer(); break;
        case 9: _t->onPeriod(); break;
        case 10: _t->on_toolButton_SetRange_clicked(); break;
        case 11: _t->on_toolButton_clicked(); break;
        case 12: _t->on_toolButton_seperate_clicked(); break;
        case 13: _t->on_toolButton_all_clicked(); break;
        case 14: _t->on_toolButton_clockwise_clicked(); break;
        case 15: _t->on_toolButton_anticlockwise_clicked(); break;
        case 16: _t->on_toolButton_transmit_clicked(); break;
        case 17: _t->on_toolButton_continue_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormCCDCurve::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormCCDCurve::switchToPage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormCCDCurve::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormCCDCurve.data,
      qt_meta_data_FormCCDCurve,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormCCDCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormCCDCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormCCDCurve.stringdata))
        return static_cast<void*>(const_cast< FormCCDCurve*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormCCDCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FormCCDCurve::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
