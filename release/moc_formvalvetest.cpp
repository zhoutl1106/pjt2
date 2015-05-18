/****************************************************************************
** Meta object code from reading C++ file 'formvalvetest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../forms/formvalvetest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formvalvetest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormValveTest_t {
    QByteArrayData data[19];
    char stringdata[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormValveTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormValveTest_t qt_meta_stringdata_FormValveTest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FormValveTest"
QT_MOC_LITERAL(1, 14, 12), // "switchToPage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 10), // "updateData"
QT_MOC_LITERAL(5, 45, 7), // "onTimer"
QT_MOC_LITERAL(6, 53, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(7, 75, 15), // "onCameraClicked"
QT_MOC_LITERAL(8, 91, 32), // "on_toolButton_singleTest_clicked"
QT_MOC_LITERAL(9, 124, 30), // "on_toolButton_autoTest_clicked"
QT_MOC_LITERAL(10, 155, 29), // "on_toolButton_valveOn_clicked"
QT_MOC_LITERAL(11, 185, 24), // "on_toolButton_OK_clicked"
QT_MOC_LITERAL(12, 210, 27), // "on_toolButton_reset_clicked"
QT_MOC_LITERAL(13, 238, 35), // "on_doubleSpinBox_delay_valueC..."
QT_MOC_LITERAL(14, 274, 4), // "arg1"
QT_MOC_LITERAL(15, 279, 40), // "on_doubleSpinBox_pulseWidth_v..."
QT_MOC_LITERAL(16, 320, 30), // "on_spinBoxChannel_valueChanged"
QT_MOC_LITERAL(17, 351, 28), // "on_spinBoxGroup_valueChanged"
QT_MOC_LITERAL(18, 380, 26) // "on_spinBoxPos_valueChanged"

    },
    "FormValveTest\0switchToPage\0\0index\0"
    "updateData\0onTimer\0on_toolButton_clicked\0"
    "onCameraClicked\0on_toolButton_singleTest_clicked\0"
    "on_toolButton_autoTest_clicked\0"
    "on_toolButton_valveOn_clicked\0"
    "on_toolButton_OK_clicked\0"
    "on_toolButton_reset_clicked\0"
    "on_doubleSpinBox_delay_valueChanged\0"
    "arg1\0on_doubleSpinBox_pulseWidth_valueChanged\0"
    "on_spinBoxChannel_valueChanged\0"
    "on_spinBoxGroup_valueChanged\0"
    "on_spinBoxPos_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormValveTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   92,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,
      17,    1,  110,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void FormValveTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormValveTest *_t = static_cast<FormValveTest *>(_o);
        switch (_id) {
        case 0: _t->switchToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateData(); break;
        case 2: _t->onTimer(); break;
        case 3: _t->on_toolButton_clicked(); break;
        case 4: _t->onCameraClicked(); break;
        case 5: _t->on_toolButton_singleTest_clicked(); break;
        case 6: _t->on_toolButton_autoTest_clicked(); break;
        case 7: _t->on_toolButton_valveOn_clicked(); break;
        case 8: _t->on_toolButton_OK_clicked(); break;
        case 9: _t->on_toolButton_reset_clicked(); break;
        case 10: _t->on_doubleSpinBox_delay_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->on_doubleSpinBox_pulseWidth_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->on_spinBoxChannel_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_spinBoxGroup_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_spinBoxPos_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FormValveTest::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FormValveTest::switchToPage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FormValveTest::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormValveTest.data,
      qt_meta_data_FormValveTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormValveTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormValveTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormValveTest.stringdata))
        return static_cast<void*>(const_cast< FormValveTest*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormValveTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void FormValveTest::switchToPage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
