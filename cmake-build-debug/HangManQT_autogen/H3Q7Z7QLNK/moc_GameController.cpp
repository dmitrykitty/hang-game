/****************************************************************************
** Meta object code from reading C++ file 'GameController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GameController/GameController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
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
struct qt_meta_tag_ZN14GameControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto GameController::qt_create_metaobjectdata<qt_meta_tag_ZN14GameControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GameController",
        "displayUpdated",
        "",
        "newDisplay",
        "descriptionUpdate",
        "newDescription",
        "imageUpdated",
        "errorCount",
        "gameWon",
        "gameLost",
        "secretWord",
        "attemptsLeft",
        "remainingAttempts",
        "startNewGame",
        "difficulty",
        "guessLetter",
        "letter"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'displayUpdated'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'descriptionUpdate'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Signal 'imageUpdated'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Signal 'gameWon'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'gameLost'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Signal 'attemptsLeft'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'startNewGame'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'guessLetter'
        QtMocHelpers::SlotData<void(QChar)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QChar, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GameController, qt_meta_tag_ZN14GameControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GameController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GameControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GameControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14GameControllerE_t>.metaTypes,
    nullptr
} };

void GameController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->displayUpdated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->descriptionUpdate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->imageUpdated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->gameWon(); break;
        case 4: _t->gameLost((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->attemptsLeft((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->startNewGame((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->guessLetter((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GameController::*)(const QString & )>(_a, &GameController::displayUpdated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameController::*)(const QString & )>(_a, &GameController::descriptionUpdate, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameController::*)(int )>(_a, &GameController::imageUpdated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameController::*)()>(_a, &GameController::gameWon, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameController::*)(const QString & )>(_a, &GameController::gameLost, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GameController::*)(int )>(_a, &GameController::attemptsLeft, 5))
            return;
    }
}

const QMetaObject *GameController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GameControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void GameController::displayUpdated(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GameController::descriptionUpdate(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void GameController::imageUpdated(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void GameController::gameWon()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GameController::gameLost(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void GameController::attemptsLeft(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
