/****************************************************************************
** Meta object code from reading C++ file 'formmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../forms/formmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormMain_t {
    QByteArrayData data[13];
    char stringdata[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormMain_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormMain_t qt_meta_stringdata_FormMain = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FormMain"
QT_MOC_LITERAL(1, 9, 12), // "switchToPage"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "index"
QT_MOC_LITERAL(4, 29, 16), // "onLongPressTimer"
QT_MOC_LITERAL(5, 46, 25), // "on_toolButtonExit_pressed"
QT_MOC_LITERAL(6, 72, 26), // "on_toolButtonExit_released"
QT_MOC_LITERAL(7, 99, 23), // "on_toolButton_5_clicked"
QT_MOC_LITERAL(8, 123, 23), // "on_toolButton_6_clicked"
QT_MOC_LITERAL(9, 147, 23), // "on_toolButton_8_clicked"
QT_MOC_LITERAL(10, 171, 23), // "on_toolButton_3_clicked"
QT_MOC_LITERAL(11, 195, 26), // "on_toolButtonValve_clicked"
QT_MOC_LITERAL(12, 222, 29) // "on_toolButtonVibrator_clicked"

    },
    "FormMain\0switchToPage\0\0index\0"
    "onLongPressTimer\0on_toolButtonExit_pressed\0"
    "on_toolButtonExit_released\0"
    "on_toolButton_5_clicked\0on_toolButton_6_clicked\0"
    "on_toolButton_8_clicked\0on_toolButton_3_clicked\0"
    "on_toolButtonValve_clicked\0"
    "on_toolButtonVibrator_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

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

       0        // eod
};

void FormMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormMain *_t = static_cast<FormMain *>(_o);
        switch (_id) {
        case 0: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onLongPressTimer(); break;
        case 2: _t->on_toolButtonExit_pressed(); break;
        case 3: _t->on_toolButtonExit_released(); break;
        case 4: _t->on_toolButton_5_clicked(); break;
        case 5: _t->on_toolButton_6_clicked(); break;
        case 6: _t->on_toolButton_8_clicked(); break;
        case 7: _t->on_toolButton_3_clicked(); break;
        case 8: _t->on_toolButtonValve_clicked(); break;
        case 9: _t->on_toolButtonVibrator_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormMain::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormMain::switchToPage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormMain.data,
      qt_meta_data_FormMain,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormMain::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormMain.stringdata))
        return static_cast<void*>(const_cast< FormMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FormMain::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
