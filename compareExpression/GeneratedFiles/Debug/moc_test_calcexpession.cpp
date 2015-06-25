/****************************************************************************
** Meta object code from reading C++ file 'test_calcexpession.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_calcexpession.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_calcexpession.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_test_calcExpession_t {
    QByteArrayData data[12];
    char stringdata[402];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_test_calcExpession_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_test_calcExpession_t qt_meta_stringdata_test_calcExpession = {
    {
QT_MOC_LITERAL(0, 0, 18), // "test_calcExpession"
QT_MOC_LITERAL(1, 19, 31), // "ExpressionHavePlusMinusAndMulti"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 38), // "ExpressionHaveDivideAsoluteAn..."
QT_MOC_LITERAL(4, 91, 47), // "ExpressionHavefindMaxfindMinM..."
QT_MOC_LITERAL(5, 139, 30), // "ExpressionHaveValueandConstant"
QT_MOC_LITERAL(6, 170, 41), // "ExpressionHavePrefixIncrement..."
QT_MOC_LITERAL(7, 212, 42), // "ExpressionHavePoctfixIncremen..."
QT_MOC_LITERAL(8, 255, 24), // "ExpressionHaveAssignment"
QT_MOC_LITERAL(9, 280, 35), // "ExpressionHaveAddAssignAndSub..."
QT_MOC_LITERAL(10, 316, 40), // "ExpressionHaveMultiAssignAndD..."
QT_MOC_LITERAL(11, 357, 44) // "ExpressionWithAssignmentHaveC..."

    },
    "test_calcExpession\0ExpressionHavePlusMinusAndMulti\0"
    "\0ExpressionHaveDivideAsoluteAndExponent\0"
    "ExpressionHavefindMaxfindMinModuleAndSquareroot\0"
    "ExpressionHaveValueandConstant\0"
    "ExpressionHavePrefixIncrementAndDecrement\0"
    "ExpressionHavePoctfixIncrementAndDecrement\0"
    "ExpressionHaveAssignment\0"
    "ExpressionHaveAddAssignAndSubAssign\0"
    "ExpressionHaveMultiAssignAndDivideAssign\0"
    "ExpressionWithAssignmentHaveConstantAtLValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_test_calcExpession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void test_calcExpession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        test_calcExpession *_t = static_cast<test_calcExpession *>(_o);
        switch (_id) {
        case 0: _t->ExpressionHavePlusMinusAndMulti(); break;
        case 1: _t->ExpressionHaveDivideAsoluteAndExponent(); break;
        case 2: _t->ExpressionHavefindMaxfindMinModuleAndSquareroot(); break;
        case 3: _t->ExpressionHaveValueandConstant(); break;
        case 4: _t->ExpressionHavePrefixIncrementAndDecrement(); break;
        case 5: _t->ExpressionHavePoctfixIncrementAndDecrement(); break;
        case 6: _t->ExpressionHaveAssignment(); break;
        case 7: _t->ExpressionHaveAddAssignAndSubAssign(); break;
        case 8: _t->ExpressionHaveMultiAssignAndDivideAssign(); break;
        case 9: _t->ExpressionWithAssignmentHaveConstantAtLValue(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject test_calcExpession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_test_calcExpession.data,
      qt_meta_data_test_calcExpession,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *test_calcExpession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *test_calcExpession::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_test_calcExpession.stringdata))
        return static_cast<void*>(const_cast< test_calcExpession*>(this));
    return QObject::qt_metacast(_clname);
}

int test_calcExpession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
