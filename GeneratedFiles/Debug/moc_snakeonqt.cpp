/****************************************************************************
** Meta object code from reading C++ file 'snakeonqt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../snakeonqt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snakeonqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SnakeOnQT_t {
    QByteArrayData data[7];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SnakeOnQT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SnakeOnQT_t qt_meta_stringdata_SnakeOnQT = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SnakeOnQT"
QT_MOC_LITERAL(1, 10, 27), // "on_actionOpenFile_triggered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "on_actionDoSnake_triggered"
QT_MOC_LITERAL(4, 66, 29), // "on_actionClearSnake_triggered"
QT_MOC_LITERAL(5, 96, 16), // "on_label_clicked"
QT_MOC_LITERAL(6, 113, 1) // "p"

    },
    "SnakeOnQT\0on_actionOpenFile_triggered\0"
    "\0on_actionDoSnake_triggered\0"
    "on_actionClearSnake_triggered\0"
    "on_label_clicked\0p"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SnakeOnQT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,

       0        // eod
};

void SnakeOnQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SnakeOnQT *_t = static_cast<SnakeOnQT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOpenFile_triggered(); break;
        case 1: _t->on_actionDoSnake_triggered(); break;
        case 2: _t->on_actionClearSnake_triggered(); break;
        case 3: _t->on_label_clicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SnakeOnQT::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SnakeOnQT.data,
      qt_meta_data_SnakeOnQT,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SnakeOnQT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SnakeOnQT::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SnakeOnQT.stringdata0))
        return static_cast<void*>(const_cast< SnakeOnQT*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SnakeOnQT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
