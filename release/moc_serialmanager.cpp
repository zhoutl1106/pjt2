/****************************************************************************
** Meta object code from reading C++ file 'serialmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serialmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialManager_t {
    QByteArrayData data[17];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialManager_t qt_meta_stringdata_SerialManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SerialManager"
QT_MOC_LITERAL(1, 14, 9), // "updateCCD"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "array"
QT_MOC_LITERAL(4, 31, 9), // "finishBkg"
QT_MOC_LITERAL(5, 41, 15), // "cleanAshRequire"
QT_MOC_LITERAL(6, 57, 9), // "cntUpload"
QT_MOC_LITERAL(7, 67, 7), // "channel"
QT_MOC_LITERAL(8, 75, 3), // "pos"
QT_MOC_LITERAL(9, 79, 5), // "value"
QT_MOC_LITERAL(10, 85, 8), // "getMotor"
QT_MOC_LITERAL(11, 94, 5), // "motor"
QT_MOC_LITERAL(12, 100, 5), // "angle"
QT_MOC_LITERAL(13, 106, 10), // "comTimeOut"
QT_MOC_LITERAL(14, 117, 8), // "writeCmd"
QT_MOC_LITERAL(15, 126, 4), // "type"
QT_MOC_LITERAL(16, 131, 3) // "cmd"

    },
    "SerialManager\0updateCCD\0\0array\0finishBkg\0"
    "cleanAshRequire\0cntUpload\0channel\0pos\0"
    "value\0getMotor\0motor\0angle\0comTimeOut\0"
    "writeCmd\0type\0cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    0,   55,    2, 0x06 /* Public */,
       6,    3,   56,    2, 0x06 /* Public */,
      10,    2,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   68,    2, 0x0a /* Public */,
      14,    2,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,   15,   16,

       0        // eod
};

void SerialManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialManager *_t = static_cast<SerialManager *>(_o);
        switch (_id) {
        case 0: _t->updateCCD((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->finishBkg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cleanAshRequire(); break;
        case 3: _t->cntUpload((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->getMotor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->comTimeOut(); break;
        case 6: _t->writeCmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialManager::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialManager::updateCCD)) {
                *result = 0;
            }
        }
        {
            typedef void (SerialManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialManager::finishBkg)) {
                *result = 1;
            }
        }
        {
            typedef void (SerialManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialManager::cleanAshRequire)) {
                *result = 2;
            }
        }
        {
            typedef void (SerialManager::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialManager::cntUpload)) {
                *result = 3;
            }
        }
        {
            typedef void (SerialManager::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialManager::getMotor)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject SerialManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SerialManager.data,
      qt_meta_data_SerialManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialManager.stringdata))
        return static_cast<void*>(const_cast< SerialManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SerialManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SerialManager::updateCCD(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialManager::finishBkg(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialManager::cleanAshRequire()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SerialManager::cntUpload(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SerialManager::getMotor(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
