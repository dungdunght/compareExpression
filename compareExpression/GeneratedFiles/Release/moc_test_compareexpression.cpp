/****************************************************************************
** Meta object code from reading C++ file 'test_compareexpression.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_compareexpression.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_compareexpression.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_test_compareExpression_t {
    QByteArrayData data[9];
    char stringdata[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_test_compareExpression_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_test_compareExpression_t qt_meta_stringdata_test_compareExpression = {
    {
QT_MOC_LITERAL(0, 0, 22), // "test_compareExpression"
QT_MOC_LITERAL(1, 23, 39), // "twoExpressionsNotHaveValueAnd..."
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 42), // "twoExpressionsNotHaveValueAnd..."
QT_MOC_LITERAL(4, 107, 36), // "twoExpressionsHaveValueAndEqu..."
QT_MOC_LITERAL(5, 144, 39), // "twoExpressionsHaveValueAndNot..."
QT_MOC_LITERAL(6, 184, 27), // "twoExpressionsHaveOnlyValue"
QT_MOC_LITERAL(7, 212, 45), // "twoExpressionsNotEquivalentAt..."
QT_MOC_LITERAL(8, 258, 44) // "twoExpressionsNotEquivalentAt..."

    },
    "test_compareExpression\0"
    "twoExpressionsNotHaveValueAndEquivalent\0"
    "\0twoExpressionsNotHaveValueAndNotEquivalent\0"
    "twoExpressionsHaveValueAndEquivalent\0"
    "twoExpressionsHaveValueAndNotEquivalent\0"
    "twoExpressionsHaveOnlyValue\0"
    "twoExpressionsNotEquivalentAtFirstCombination\0"
    "twoExpressionsNotEquivalentAtLastCombination"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_test_compareExpression[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void test_compareExpression::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        test_compareExpression *_t = static_cast<test_compareExpression *>(_o);
        switch (_id) {
        case 0: _t->twoExpressionsNotHaveValueAndEquivalent(); break;
        case 1: _t->twoExpressionsNotHaveValueAndNotEquivalent(); break;
        case 2: _t->twoExpressionsHaveValueAndEquivalent(); break;
        case 3: _t->twoExpressionsHaveValueAndNotEquivalent(); break;
        case 4: _t->twoExpressionsHaveOnlyValue(); break;
        case 5: _t->twoExpressionsNotEquivalentAtFirstCombination(); break;
        case 6: _t->twoExpressionsNotEquivalentAtLastCombination(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject test_compareExpression::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_test_compareExpression.data,
      qt_meta_data_test_compareExpression,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *test_compareExpression::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *test_compareExpression::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_test_compareExpression.stringdata))
        return static_cast<void*>(const_cast< test_compareExpression*>(this));
    return QObject::qt_metacast(_clname);
}

int test_compareExpression::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
