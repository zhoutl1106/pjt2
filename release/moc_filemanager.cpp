/****************************************************************************
** Meta object code from reading C++ file 'filemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../filemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileManager_t {
    QByteArrayData data[16];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileManager_t qt_meta_stringdata_FileManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileManager"
QT_MOC_LITERAL(1, 12, 12), // "updateConfig"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "str"
QT_MOC_LITERAL(4, 30, 5), // "index"
QT_MOC_LITERAL(5, 36, 7), // "sendCmd"
QT_MOC_LITERAL(6, 44, 4), // "type"
QT_MOC_LITERAL(7, 49, 3), // "cmd"
QT_MOC_LITERAL(8, 53, 19), // "updateInitialStatus"
QT_MOC_LITERAL(9, 73, 4), // "exit"
QT_MOC_LITERAL(10, 78, 12), // "switchToPage"
QT_MOC_LITERAL(11, 91, 7), // "bkgShow"
QT_MOC_LITERAL(12, 99, 9), // "checkDate"
QT_MOC_LITERAL(13, 109, 16), // "passwardReceived"
QT_MOC_LITERAL(14, 126, 3), // "ori"
QT_MOC_LITERAL(15, 130, 4) // "code"

    },
    "FileManager\0updateConfig\0\0str\0index\0"
    "sendCmd\0type\0cmd\0updateInitialStatus\0"
    "exit\0switchToPage\0bkgShow\0checkDate\0"
    "passwardReceived\0ori\0code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileManager[] = {

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
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,
       8,    2,   59,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,
      11,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   68,    2, 0x0a /* Public */,
      13,    2,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    6,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    9,    3,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   14,   15,

       0        // eod
};

void FileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileManager *_t = static_cast<FileManager *>(_o);
        switch (_id) {
        case 0: _t->updateConfig((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sendCmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->updateInitialStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->bkgShow(); break;
        case 5: { bool _r = _t->checkDate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->passwardReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileManager::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileManager::updateConfig)) {
                *result = 0;
            }
        }
        {
            typedef void (FileManager::*_t)(int , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileManager::sendCmd)) {
                *result = 1;
            }
        }
        {
            typedef void (FileManager::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileManager::updateInitialStatus)) {
                *result = 2;
            }
        }
        {
            typedef void (FileManager::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileManager::switchToPage)) {
                *result = 3;
            }
        }
        {
            typedef void (FileManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileManager::bkgShow)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject FileManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileManager.data,
      qt_meta_data_FileManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileManager.stringdata))
        return static_cast<void*>(const_cast< FileManager*>(this));
    return QObject::qt_metacast(_clname);
}

int FileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FileManager::updateConfig(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileManager::sendCmd(int _t1, QByteArray _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileManager::updateInitialStatus(bool _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileManager::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileManager::bkgShow()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
