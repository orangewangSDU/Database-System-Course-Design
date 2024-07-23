/****************************************************************************
** Meta object code from reading C++ file 'selectselfgrade.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/Users/wyc/Desktop/student_system/student_system/selectselfgrade.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectselfgrade.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectSelfGrade_t {
    QByteArrayData data[9];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectSelfGrade_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectSelfGrade_t qt_meta_stringdata_SelectSelfGrade = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SelectSelfGrade"
QT_MOC_LITERAL(1, 16, 10), // "TableExcel"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "QTableView*"
QT_MOC_LITERAL(4, 40, 9), // "tableview"
QT_MOC_LITERAL(5, 50, 5), // "title"
QT_MOC_LITERAL(6, 56, 18), // "on_btnBack_clicked"
QT_MOC_LITERAL(7, 75, 20), // "on_btnSelect_clicked"
QT_MOC_LITERAL(8, 96, 14) // "on_out_clicked"

    },
    "SelectSelfGrade\0TableExcel\0\0QTableView*\0"
    "tableview\0title\0on_btnBack_clicked\0"
    "on_btnSelect_clicked\0on_out_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectSelfGrade[] = {

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
       1,    2,   34,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectSelfGrade::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectSelfGrade *_t = static_cast<SelectSelfGrade *>(_o);
        switch (_id) {
        case 0: _t->TableExcel((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_btnBack_clicked(); break;
        case 2: _t->on_btnSelect_clicked(); break;
        case 3: _t->on_out_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTableView* >(); break;
            }
            break;
        }
    }
}

const QMetaObject SelectSelfGrade::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelectSelfGrade.data,
      qt_meta_data_SelectSelfGrade,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectSelfGrade::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectSelfGrade::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectSelfGrade.stringdata))
        return static_cast<void*>(const_cast< SelectSelfGrade*>(this));
    return QWidget::qt_metacast(_clname);
}

int SelectSelfGrade::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
