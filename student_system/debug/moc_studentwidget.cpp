/****************************************************************************
** Meta object code from reading C++ file 'studentwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/Users/wyc/Desktop/student_system/student_system/studentwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_studentWidget_t {
    QByteArrayData data[8];
    char stringdata[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_studentWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_studentWidget_t qt_meta_stringdata_studentWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "studentWidget"
QT_MOC_LITERAL(1, 14, 22), // "on_btnbackhome_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "on_btnEidtMessage_clicked"
QT_MOC_LITERAL(4, 64, 20), // "on_btnManage_clicked"
QT_MOC_LITERAL(5, 85, 25), // "on_btnSelectGrage_clicked"
QT_MOC_LITERAL(6, 111, 25), // "on_btnSetPassword_clicked"
QT_MOC_LITERAL(7, 137, 15) // "showCurrentTime"

    },
    "studentWidget\0on_btnbackhome_clicked\0"
    "\0on_btnEidtMessage_clicked\0"
    "on_btnManage_clicked\0on_btnSelectGrage_clicked\0"
    "on_btnSetPassword_clicked\0showCurrentTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void studentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        studentWidget *_t = static_cast<studentWidget *>(_o);
        switch (_id) {
        case 0: _t->on_btnbackhome_clicked(); break;
        case 1: _t->on_btnEidtMessage_clicked(); break;
        case 2: _t->on_btnManage_clicked(); break;
        case 3: _t->on_btnSelectGrage_clicked(); break;
        case 4: _t->on_btnSetPassword_clicked(); break;
        case 5: _t->showCurrentTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject studentWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_studentWidget.data,
      qt_meta_data_studentWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *studentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_studentWidget.stringdata))
        return static_cast<void*>(const_cast< studentWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int studentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
