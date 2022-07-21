/****************************************************************************
** Meta object code from reading C++ file 'qteststudy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../practice_writeQTests/qteststudy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qteststudy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTestStudy_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTestStudy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTestStudy_t qt_meta_stringdata_QTestStudy = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QTestStudy"
QT_MOC_LITERAL(1, 11, 7), // "toUpper"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 18), // "toUpperUpdate_data"
QT_MOC_LITERAL(4, 39, 13), // "toUpperUpdate"
QT_MOC_LITERAL(5, 53, 7), // "guiTest"
QT_MOC_LITERAL(6, 61, 13), // "guiTestUpdate"
QT_MOC_LITERAL(7, 75, 18), // "guiTestUpdate_data"
QT_MOC_LITERAL(8, 94, 13), // "testBenchmark"
QT_MOC_LITERAL(9, 108, 10), // "testString"
QT_MOC_LITERAL(10, 119, 15) // "testString_data"

    },
    "QTestStudy\0toUpper\0\0toUpperUpdate_data\0"
    "toUpperUpdate\0guiTest\0guiTestUpdate\0"
    "guiTestUpdate_data\0testBenchmark\0"
    "testString\0testString_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTestStudy[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

void QTestStudy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTestStudy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toUpper(); break;
        case 1: _t->toUpperUpdate_data(); break;
        case 2: _t->toUpperUpdate(); break;
        case 3: _t->guiTest(); break;
        case 4: _t->guiTestUpdate(); break;
        case 5: _t->guiTestUpdate_data(); break;
        case 6: _t->testBenchmark(); break;
        case 7: _t->testString(); break;
        case 8: _t->testString_data(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject QTestStudy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QTestStudy.data,
    qt_meta_data_QTestStudy,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QTestStudy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTestStudy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTestStudy.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTestStudy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
