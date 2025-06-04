/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "dataReceived",
    "",
    "decodeData",
    "uint8_t*",
    "datosRx",
    "uint8_t",
    "source",
    "sendDataSerial",
    "timeOut",
    "sendDataUDP",
    "OnUdpRxData",
    "on_pushButton_connectSerial_clicked",
    "on_pushButton_sendSerial_clicked",
    "on_pushButton_connectUdp_clicked",
    "on_pushButton_sendUdp_clicked",
    "sendSerial",
    "buf",
    "length",
    "sendUdp",
    "getData",
    "eventFilter",
    "watched",
    "QEvent*",
    "event",
    "on_pushButton_actRadar_clicked",
    "radar",
    "carStatus",
    "onTimer4",
    "onTimer5",
    "onTimer7",
    "resizeEvent",
    "QResizeEvent*",
    "paintEvent",
    "QPaintEvent*"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[9];
    char stringdata5[8];
    char stringdata6[8];
    char stringdata7[7];
    char stringdata8[15];
    char stringdata9[8];
    char stringdata10[12];
    char stringdata11[12];
    char stringdata12[36];
    char stringdata13[33];
    char stringdata14[33];
    char stringdata15[30];
    char stringdata16[11];
    char stringdata17[4];
    char stringdata18[7];
    char stringdata19[8];
    char stringdata20[8];
    char stringdata21[12];
    char stringdata22[8];
    char stringdata23[8];
    char stringdata24[6];
    char stringdata25[31];
    char stringdata26[6];
    char stringdata27[10];
    char stringdata28[9];
    char stringdata29[9];
    char stringdata30[9];
    char stringdata31[12];
    char stringdata32[14];
    char stringdata33[11];
    char stringdata34[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 12),  // "dataReceived"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 10),  // "decodeData"
        QT_MOC_LITERAL(36, 8),  // "uint8_t*"
        QT_MOC_LITERAL(45, 7),  // "datosRx"
        QT_MOC_LITERAL(53, 7),  // "uint8_t"
        QT_MOC_LITERAL(61, 6),  // "source"
        QT_MOC_LITERAL(68, 14),  // "sendDataSerial"
        QT_MOC_LITERAL(83, 7),  // "timeOut"
        QT_MOC_LITERAL(91, 11),  // "sendDataUDP"
        QT_MOC_LITERAL(103, 11),  // "OnUdpRxData"
        QT_MOC_LITERAL(115, 35),  // "on_pushButton_connectSerial_c..."
        QT_MOC_LITERAL(151, 32),  // "on_pushButton_sendSerial_clicked"
        QT_MOC_LITERAL(184, 32),  // "on_pushButton_connectUdp_clicked"
        QT_MOC_LITERAL(217, 29),  // "on_pushButton_sendUdp_clicked"
        QT_MOC_LITERAL(247, 10),  // "sendSerial"
        QT_MOC_LITERAL(258, 3),  // "buf"
        QT_MOC_LITERAL(262, 6),  // "length"
        QT_MOC_LITERAL(269, 7),  // "sendUdp"
        QT_MOC_LITERAL(277, 7),  // "getData"
        QT_MOC_LITERAL(285, 11),  // "eventFilter"
        QT_MOC_LITERAL(297, 7),  // "watched"
        QT_MOC_LITERAL(305, 7),  // "QEvent*"
        QT_MOC_LITERAL(313, 5),  // "event"
        QT_MOC_LITERAL(319, 30),  // "on_pushButton_actRadar_clicked"
        QT_MOC_LITERAL(350, 5),  // "radar"
        QT_MOC_LITERAL(356, 9),  // "carStatus"
        QT_MOC_LITERAL(366, 8),  // "onTimer4"
        QT_MOC_LITERAL(375, 8),  // "onTimer5"
        QT_MOC_LITERAL(384, 8),  // "onTimer7"
        QT_MOC_LITERAL(393, 11),  // "resizeEvent"
        QT_MOC_LITERAL(405, 13),  // "QResizeEvent*"
        QT_MOC_LITERAL(419, 10),  // "paintEvent"
        QT_MOC_LITERAL(430, 12)   // "QPaintEvent*"
    },
    "MainWindow",
    "dataReceived",
    "",
    "decodeData",
    "uint8_t*",
    "datosRx",
    "uint8_t",
    "source",
    "sendDataSerial",
    "timeOut",
    "sendDataUDP",
    "OnUdpRxData",
    "on_pushButton_connectSerial_clicked",
    "on_pushButton_sendSerial_clicked",
    "on_pushButton_connectUdp_clicked",
    "on_pushButton_sendUdp_clicked",
    "sendSerial",
    "buf",
    "length",
    "sendUdp",
    "getData",
    "eventFilter",
    "watched",
    "QEvent*",
    "event",
    "on_pushButton_actRadar_clicked",
    "radar",
    "carStatus",
    "onTimer4",
    "onTimer5",
    "onTimer7",
    "resizeEvent",
    "QResizeEvent*",
    "paintEvent",
    "QPaintEvent*"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x08,    1 /* Private */,
       3,    2,  147,    2, 0x08,    2 /* Private */,
       8,    0,  152,    2, 0x08,    5 /* Private */,
       9,    0,  153,    2, 0x08,    6 /* Private */,
      10,    0,  154,    2, 0x08,    7 /* Private */,
      11,    0,  155,    2, 0x08,    8 /* Private */,
      12,    0,  156,    2, 0x08,    9 /* Private */,
      13,    0,  157,    2, 0x08,   10 /* Private */,
      14,    0,  158,    2, 0x08,   11 /* Private */,
      15,    0,  159,    2, 0x08,   12 /* Private */,
      16,    2,  160,    2, 0x08,   13 /* Private */,
      19,    2,  165,    2, 0x08,   16 /* Private */,
      20,    0,  170,    2, 0x08,   19 /* Private */,
      21,    2,  171,    2, 0x08,   20 /* Private */,
      25,    0,  176,    2, 0x08,   23 /* Private */,
      26,    0,  177,    2, 0x08,   24 /* Private */,
      27,    0,  178,    2, 0x08,   25 /* Private */,
      28,    0,  179,    2, 0x08,   26 /* Private */,
      29,    0,  180,    2, 0x08,   27 /* Private */,
      30,    0,  181,    2, 0x08,   28 /* Private */,
      31,    1,  182,    2, 0x08,   29 /* Private */,
      33,    1,  185,    2, 0x08,   31 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,   17,   18,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,   17,   18,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 23,   22,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   24,
    QMetaType::Void, 0x80000000 | 34,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'dataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decodeData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'sendDataSerial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timeOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendDataUDP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnUdpRxData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connectSerial_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_sendSerial_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connectUdp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_sendUdp_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendSerial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'sendUdp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>,
        // method 'getData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eventFilter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>,
        // method 'on_pushButton_actRadar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'radar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'carStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTimer4'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTimer5'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTimer7'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resizeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QResizeEvent *, std::false_type>,
        // method 'paintEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPaintEvent *, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReceived(); break;
        case 1: _t->decodeData((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 2: _t->sendDataSerial(); break;
        case 3: _t->timeOut(); break;
        case 4: _t->sendDataUDP(); break;
        case 5: _t->OnUdpRxData(); break;
        case 6: _t->on_pushButton_connectSerial_clicked(); break;
        case 7: _t->on_pushButton_sendSerial_clicked(); break;
        case 8: _t->on_pushButton_connectUdp_clicked(); break;
        case 9: _t->on_pushButton_sendUdp_clicked(); break;
        case 10: _t->sendSerial((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 11: _t->sendUdp((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 12: _t->getData(); break;
        case 13: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->on_pushButton_actRadar_clicked(); break;
        case 15: _t->radar(); break;
        case 16: _t->carStatus(); break;
        case 17: _t->onTimer4(); break;
        case 18: _t->onTimer5(); break;
        case 19: _t->onTimer7(); break;
        case 20: _t->resizeEvent((*reinterpret_cast< std::add_pointer_t<QResizeEvent*>>(_a[1]))); break;
        case 21: _t->paintEvent((*reinterpret_cast< std::add_pointer_t<QPaintEvent*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
