/****************************************************************************
** Meta object code from reading C++ file 'formcntcheck.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../forms/formcntcheck.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formcntcheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormCntCheck_t {
    QByteArrayData data[14];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormCntCheck_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormCntCheck_t qt_meta_stringdata_FormCntCheck = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FormCntCheck"
QT_MOC_LITERAL(1, 13, 7), // "sendCmd"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 1), // "i"
QT_MOC_LITERAL(4, 24, 5), // "array"
QT_MOC_LITERAL(5, 30, 12), // "switchToPage"
QT_MOC_LITERAL(6, 43, 5), // "index"
QT_MOC_LITERAL(7, 49, 9), // "cntUpload"
QT_MOC_LITERAL(8, 59, 7), // "channel"
QT_MOC_LITERAL(9, 67, 3), // "pos"
QT_MOC_LITERAL(10, 71, 5), // "value"
QT_MOC_LITERAL(11, 77, 6), // "askCnt"
QT_MOC_LITERAL(12, 84, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(13, 106, 23) // "on_toolButton_2_clicked"

    },
    "FormCntCheck\0sendCmd\0\0i\0array\0"
    "switchToPage\0index\0cntUpload\0channel\0"
    "pos\0value\0askCnt\0on_toolButton_clicked\0"
    "on_toolButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormCntCheck[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   52,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x08 /* Private */,
      12,    0,   60,    2, 0x08 /* Private */,
      13,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormCntCheck::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormCntCheck *_t = static_cast<FormCntCheck *>(_o);
        switch (_id) {
        case 0: _t->sendCmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cntUpload((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->askCnt(); break;
        case 4: _t->on_toolButton_clicked(); break;
        case 5: _t->on_toolButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormCntCheck::*_t)(int , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormCntCheck::sendCmd)) {
                *result = 0;
            }
        }
        {
            typedef void (FormCntCheck::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormCntCheck::switchToPage)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject FormCntCheck::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FormCntCheck.data,
      qt_meta_data_FormCntCheck,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormCntCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormCntCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormCntCheck.stringdata))
        return static_cast<void*>(const_cast< FormCntCheck*>(this));
    return QDialog::qt_metacast(_clname);
}

int FormCntCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FormCntCheck::sendCmd(int _t1, QByteArray _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormCntCheck::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
