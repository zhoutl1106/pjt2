/****************************************************************************
** Meta object code from reading C++ file 'formsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../forms/formsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormSystem_t {
    QByteArrayData data[10];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormSystem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormSystem_t qt_meta_stringdata_FormSystem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FormSystem"
QT_MOC_LITERAL(1, 11, 12), // "switchToPage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "index"
QT_MOC_LITERAL(4, 31, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(5, 53, 23), // "on_toolButton_7_clicked"
QT_MOC_LITERAL(6, 77, 23), // "on_toolButton_5_clicked"
QT_MOC_LITERAL(7, 101, 23), // "on_toolButton_8_clicked"
QT_MOC_LITERAL(8, 125, 23), // "on_toolButton_4_clicked"
QT_MOC_LITERAL(9, 149, 23) // "on_toolButton_9_clicked"

    },
    "FormSystem\0switchToPage\0\0index\0"
    "on_toolButton_clicked\0on_toolButton_7_clicked\0"
    "on_toolButton_5_clicked\0on_toolButton_8_clicked\0"
    "on_toolButton_4_clicked\0on_toolButton_9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormSystem[] = {

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
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormSystem *_t = static_cast<FormSystem *>(_o);
        switch (_id) {
        case 0: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_toolButton_clicked(); break;
        case 2: _t->on_toolButton_7_clicked(); break;
        case 3: _t->on_toolButton_5_clicked(); break;
        case 4: _t->on_toolButton_8_clicked(); break;
        case 5: _t->on_toolButton_4_clicked(); break;
        case 6: _t->on_toolButton_9_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormSystem::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormSystem::switchToPage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormSystem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormSystem.data,
      qt_meta_data_FormSystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormSystem.stringdata))
        return static_cast<void*>(const_cast< FormSystem*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FormSystem::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
