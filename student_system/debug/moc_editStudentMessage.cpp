/****************************************************************************
** Meta object code from reading C++ file 'editStudentMessage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/Users/wyc/Desktop/student_system/student_system/editStudentMessage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editStudentMessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_editStudentMessage_t {
    QByteArrayData data[4];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_editStudentMessage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_editStudentMessage_t qt_meta_stringdata_editStudentMessage = {
    {
QT_MOC_LITERAL(0, 0, 18), // "editStudentMessage"
QT_MOC_LITERAL(1, 19, 19), // "on_noButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20) // "on_yesButton_clicked"

    },
    "editStudentMessage\0on_noButton_clicked\0"
    "\0on_yesButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_editStudentMessage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void editStudentMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        editStudentMessage *_t = static_cast<editStudentMessage *>(_o);
        switch (_id) {
        case 0: _t->on_noButton_clicked(); break;
        case 1: _t->on_yesButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject editStudentMessage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_editStudentMessage.data,
      qt_meta_data_editStudentMessage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *editStudentMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *editStudentMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_editStudentMessage.stringdata))
        return static_cast<void*>(const_cast< editStudentMessage*>(this));
    return QWidget::qt_metacast(_clname);
}

int editStudentMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
