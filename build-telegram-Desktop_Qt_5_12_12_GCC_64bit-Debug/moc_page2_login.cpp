/****************************************************************************
** Meta object code from reading C++ file 'page2_login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telegram client 2/page2_login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page2_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_page2_login_t {
    QByteArrayData data[11];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_page2_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_page2_login_t qt_meta_stringdata_page2_login = {
    {
QT_MOC_LITERAL(0, 0, 11), // "page2_login"
QT_MOC_LITERAL(1, 12, 28), // "on_signin_pushButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 30), // "on_showhide_pushButton_clicked"
QT_MOC_LITERAL(4, 73, 26), // "on_back_pushButton_clicked"
QT_MOC_LITERAL(5, 100, 28), // "on_capcha_pushButton_clicked"
QT_MOC_LITERAL(6, 129, 26), // "on_next_pushButton_clicked"
QT_MOC_LITERAL(7, 156, 32), // "on_Password_lineEdit_textChanged"
QT_MOC_LITERAL(8, 189, 4), // "arg1"
QT_MOC_LITERAL(9, 194, 45), // "on_Verification_Password_line..."
QT_MOC_LITERAL(10, 240, 32) // "on_username_lineEdit_textChanged"

    },
    "page2_login\0on_signin_pushButton_clicked\0"
    "\0on_showhide_pushButton_clicked\0"
    "on_back_pushButton_clicked\0"
    "on_capcha_pushButton_clicked\0"
    "on_next_pushButton_clicked\0"
    "on_Password_lineEdit_textChanged\0arg1\0"
    "on_Verification_Password_lineEdit_textChanged\0"
    "on_username_lineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_page2_login[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void page2_login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<page2_login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_signin_pushButton_clicked(); break;
        case 1: _t->on_showhide_pushButton_clicked(); break;
        case 2: _t->on_back_pushButton_clicked(); break;
        case 3: _t->on_capcha_pushButton_clicked(); break;
        case 4: _t->on_next_pushButton_clicked(); break;
        case 5: _t->on_Password_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_Verification_Password_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_username_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject page2_login::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_page2_login.data,
    qt_meta_data_page2_login,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *page2_login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *page2_login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_page2_login.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int page2_login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
