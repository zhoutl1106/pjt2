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
    QByteArrayData data[12];
    char stringdata[178];
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
QT_MOC_LITERAL(8, 68, 30), // "on_toolButton_SetRange_clicked"
QT_MOC_LITERAL(9, 99, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(10, 121, 30), // "on_toolButton_seperate_clicked"
QT_MOC_LITERAL(11, 152, 25) // "on_toolButton_all_clicked"

    },
    "FormCCDCurve\0switchToPage\0\0index\0"
    "updateData\0updateRange\0upper\0lower\0"
    "on_toolButton_SetRange_clicked\0"
    "on_toolButton_clicked\0"
    "on_toolButton_seperate_clicked\0"
    "on_toolButton_all_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormCCDCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    2,   53,    2, 0x0a /* Public */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
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
        case 3: _t->on_toolButton_SetRange_clicked(); break;
        case 4: _t->on_toolButton_clicked(); break;
        case 5: _t->on_toolButton_seperate_clicked(); break;
        case 6: _t->on_toolButton_all_clicked(); break;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
