/****************************************************************************
** Meta object code from reading C++ file 'page5_client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telegram/page5_client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page5_client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_page5_client_t {
    QByteArrayData data[12];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_page5_client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_page5_client_t qt_meta_stringdata_page5_client = {
    {
QT_MOC_LITERAL(0, 0, 12), // "page5_client"
QT_MOC_LITERAL(1, 13, 10), // "newMessage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "readSocket"
QT_MOC_LITERAL(4, 36, 13), // "discardSocket"
QT_MOC_LITERAL(5, 50, 12), // "displayError"
QT_MOC_LITERAL(6, 63, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(7, 92, 11), // "socketError"
QT_MOC_LITERAL(8, 104, 14), // "displayMessage"
QT_MOC_LITERAL(9, 119, 3), // "str"
QT_MOC_LITERAL(10, 123, 33), // "on_pushButton_sendMessage_cli..."
QT_MOC_LITERAL(11, 157, 36) // "on_pushButton_sendAttachment_..."

    },
    "page5_client\0newMessage\0\0readSocket\0"
    "discardSocket\0displayError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "displayMessage\0str\0on_pushButton_sendMessage_clicked\0"
    "on_pushButton_sendAttachment_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_page5_client[] = {

 // content:
       8,       // revision
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
       3,    0,   52,    2, 0x08 /* Private */,
       4,    0,   53,    2, 0x08 /* Private */,
       5,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void page5_client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<page5_client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->readSocket(); break;
        case 2: _t->discardSocket(); break;
        case 3: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->displayMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_sendMessage_clicked(); break;
        case 6: _t->on_pushButton_sendAttachment_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (page5_client::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page5_client::newMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject page5_client::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_page5_client.data,
    qt_meta_data_page5_client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *page5_client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *page5_client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_page5_client.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int page5_client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void page5_client::newMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
