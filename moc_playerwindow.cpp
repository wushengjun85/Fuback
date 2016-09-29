/****************************************************************************
** Meta object code from reading C++ file 'playerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playerwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlayerWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      32,   26,   13,   13, 0x0a,
      50,   13,   13,   13, 0x0a,
      65,   13,   13,   13, 0x0a,
      77,   13,   13,   13, 0x0a,
      90,   26,   13,   13, 0x08,
     111,   13,   13,   13, 0x08,
     126,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlayerWindow[] = {
    "PlayerWindow\0\0openMedia()\0value\0"
    "seekBySlider(int)\0seekBySlider()\0"
    "playPause()\0playReturn()\0updateSlider(qint64)\0"
    "updateSlider()\0updateSliderUnit()\0"
};

void PlayerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlayerWindow *_t = static_cast<PlayerWindow *>(_o);
        switch (_id) {
        case 0: _t->openMedia(); break;
        case 1: _t->seekBySlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->seekBySlider(); break;
        case 3: _t->playPause(); break;
        case 4: _t->playReturn(); break;
        case 5: _t->updateSlider((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->updateSlider(); break;
        case 7: _t->updateSliderUnit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlayerWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlayerWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayerWindow,
      qt_meta_data_PlayerWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlayerWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlayerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlayerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerWindow))
        return static_cast<void*>(const_cast< PlayerWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlayerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
