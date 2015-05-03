/****************************************************************************
** Meta object code from reading C++ file 'formkeyboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../formkeyboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formkeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormKeyboard_t {
    QByteArrayData data[15];
    char stringdata[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormKeyboard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormKeyboard_t qt_meta_stringdata_FormKeyboard = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FormKeyboard"
QT_MOC_LITERAL(1, 13, 8), // "sendText"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 23), // "on_pushButton_C_clicked"
QT_MOC_LITERAL(4, 47, 24), // "on_pushButton_OK_clicked"
QT_MOC_LITERAL(5, 72, 23), // "on_pushButton_0_clicked"
QT_MOC_LITERAL(6, 96, 23), // "on_pushButton_1_clicked"
QT_MOC_LITERAL(7, 120, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 144, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 168, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(10, 192, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(11, 216, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(12, 240, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(13, 264, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(14, 288, 23) // "on_pushButton_9_clicked"

    },
    "FormKeyboard\0sendText\0\0on_pushButton_C_clicked\0"
    "on_pushButton_OK_clicked\0"
    "on_pushButton_0_clicked\0on_pushButton_1_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormKeyboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   82,    2, 0x08 /* Private */,
       4,    0,   83,    2, 0x08 /* Private */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormKeyboard *_t = static_cast<FormKeyboard *>(_o);
        switch (_id) {
        case 0: _t->sendText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_C_clicked(); break;
        case 2: _t->on_pushButton_OK_clicked(); break;
        case 3: _t->on_pushButton_0_clicked(); break;
        case 4: _t->on_pushButton_1_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        case 10: _t->on_pushButton_7_clicked(); break;
        case 11: _t->on_pushButton_8_clicked(); break;
        case 12: _t->on_pushButton_9_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormKeyboard::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormKeyboard::sendText)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormKeyboard::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FormKeyboard.data,
      qt_meta_data_FormKeyboard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormKeyboard.stringdata))
        return static_cast<void*>(const_cast< FormKeyboard*>(this));
    return QDialog::qt_metacast(_clname);
}

int FormKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FormKeyboard::sendText(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
