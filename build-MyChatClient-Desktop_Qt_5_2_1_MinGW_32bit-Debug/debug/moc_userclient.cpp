/****************************************************************************
** Meta object code from reading C++ file 'userclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyChatClient/userclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserClient_t {
    QByteArrayData data[9];
    char stringdata[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UserClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UserClient_t qt_meta_stringdata_UserClient = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 15),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 12),
QT_MOC_LITERAL(4, 41, 14),
QT_MOC_LITERAL(5, 56, 10),
QT_MOC_LITERAL(6, 67, 14),
QT_MOC_LITERAL(7, 82, 21),
QT_MOC_LITERAL(8, 104, 7)
    },
    "UserClient\0registerSuccess\0\0loginSuccess\0"
    "loginNoAccount\0loginExist\0receiveMessage\0"
    "QMap<QString,QString>\0message\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06,
       3,    0,   40,    2, 0x06,
       4,    0,   41,    2, 0x06,
       5,    0,   42,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void UserClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserClient *_t = static_cast<UserClient *>(_o);
        switch (_id) {
        case 0: _t->registerSuccess(); break;
        case 1: _t->loginSuccess(); break;
        case 2: _t->loginNoAccount(); break;
        case 3: _t->loginExist(); break;
        case 4: _t->receiveMessage((*reinterpret_cast< QMap<QString,QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserClient::registerSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (UserClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserClient::loginSuccess)) {
                *result = 1;
            }
        }
        {
            typedef void (UserClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserClient::loginNoAccount)) {
                *result = 2;
            }
        }
        {
            typedef void (UserClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserClient::loginExist)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject UserClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserClient.data,
      qt_meta_data_UserClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *UserClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserClient.stringdata))
        return static_cast<void*>(const_cast< UserClient*>(this));
    return QObject::qt_metacast(_clname);
}

int UserClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UserClient::registerSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UserClient::loginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void UserClient::loginNoAccount()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void UserClient::loginExist()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
