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
    QByteArrayData data[11];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormCntCheck_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormCntCheck_t qt_meta_stringdata_FormCntCheck = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FormCntCheck"
QT_MOC_LITERAL(1, 13, 12), // "switchToPage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 9), // "cntUpload"
QT_MOC_LITERAL(5, 43, 7), // "channel"
QT_MOC_LITERAL(6, 51, 3), // "pos"
QT_MOC_LITERAL(7, 55, 5), // "value"
QT_MOC_LITERAL(8, 61, 6), // "askCnt"
QT_MOC_LITERAL(9, 68, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(10, 90, 12) // "onAllClicked"

    },
    "FormCntCheck\0switchToPage\0\0index\0"
    "cntUpload\0channel\0pos\0value\0askCnt\0"
    "on_toolButton_clicked\0onAllClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormCntCheck[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   42,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x08 /* Private */,
       9,    0,   50,    2, 0x08 /* Private */,
      10,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,
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
        case 0: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cntUpload((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->askCnt(); break;
        case 3: _t->on_toolButton_clicked(); break;
        case 4: _t->onAllClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormCntCheck::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormCntCheck::switchToPage)) {
                *result = 0;
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

// SIGNAL 0
void FormCntCheck::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
