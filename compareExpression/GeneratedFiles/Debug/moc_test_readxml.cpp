/****************************************************************************
** Meta object code from reading C++ file 'test_readxml.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_readxml.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_readxml.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_test_readXML_t {
    QByteArrayData data[11];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_test_readXML_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_test_readXML_t qt_meta_stringdata_test_readXML = {
    {
QT_MOC_LITERAL(0, 0, 12), // "test_readXML"
QT_MOC_LITERAL(1, 13, 24), // "XMLNotHaveLatinCharacter"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "XMLNotFullElement"
QT_MOC_LITERAL(4, 57, 25), // "XMLValueNotRangeOrNotType"
QT_MOC_LITERAL(5, 83, 26), // "XMLValueRangeNotSameAsType"
QT_MOC_LITERAL(6, 110, 24), // "XMLIntervalValueNotLogic"
QT_MOC_LITERAL(7, 135, 16), // "XMLValuesNotSame"
QT_MOC_LITERAL(8, 152, 20), // "XMLAssignMentNotTrue"
QT_MOC_LITERAL(9, 173, 25), // "XMLExpressionsNotValuable"
QT_MOC_LITERAL(10, 199, 26) // "XMLExpressionsHaveValuable"

    },
    "test_readXML\0XMLNotHaveLatinCharacter\0"
    "\0XMLNotFullElement\0XMLValueNotRangeOrNotType\0"
    "XMLValueRangeNotSameAsType\0"
    "XMLIntervalValueNotLogic\0XMLValuesNotSame\0"
    "XMLAssignMentNotTrue\0XMLExpressionsNotValuable\0"
    "XMLExpressionsHaveValuable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_test_readXML[] = {

 // content:
       7,       // revision
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

void test_readXML::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        test_readXML *_t = static_cast<test_readXML *>(_o);
        switch (_id) {
        case 0: _t->XMLNotHaveLatinCharacter(); break;
        case 1: _t->XMLNotFullElement(); break;
        case 2: _t->XMLValueNotRangeOrNotType(); break;
        case 3: _t->XMLValueRangeNotSameAsType(); break;
        case 4: _t->XMLIntervalValueNotLogic(); break;
        case 5: _t->XMLValuesNotSame(); break;
        case 6: _t->XMLAssignMentNotTrue(); break;
        case 7: _t->XMLExpressionsNotValuable(); break;
        case 8: _t->XMLExpressionsHaveValuable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject test_readXML::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_test_readXML.data,
      qt_meta_data_test_readXML,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *test_readXML::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *test_readXML::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_test_readXML.stringdata))
        return static_cast<void*>(const_cast< test_readXML*>(this));
    return QObject::qt_metacast(_clname);
}

int test_readXML::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
