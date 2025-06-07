/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../GUI/Source/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "changeDifficultyRequested",
        "",
        "startGameClicked",
        "difficultyClicked",
        "settingsClicked",
        "statisticsClicked",
        "exitClicked",
        "backClicked",
        "pauseClicked",
        "newGameClicked",
        "showDefinitionClicked",
        "onLetterClicked",
        "ch",
        "updateGameImage",
        "errorCount",
        "updateGameLabel",
        "newDisplay",
        "updateDescriptionLabel",
        "newDescription",
        "beginNewGame",
        "onGameLost",
        "secretWord",
        "updateAttemptsLabel",
        "remaining"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'changeDifficultyRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'startGameClicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'difficultyClicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'settingsClicked'
        QtMocHelpers::SlotData<void() const>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'statisticsClicked'
        QtMocHelpers::SlotData<void() const>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exitClicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'backClicked'
        QtMocHelpers::SlotData<void() const>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pauseClicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newGameClicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showDefinitionClicked'
        QtMocHelpers::SlotData<void() const>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLetterClicked'
        QtMocHelpers::SlotData<void(QChar)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QChar, 13 },
        }}),
        // Slot 'updateGameImage'
        QtMocHelpers::SlotData<void(int) const>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'updateGameLabel'
        QtMocHelpers::SlotData<void(const QString &) const>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'updateDescriptionLabel'
        QtMocHelpers::SlotData<void(const QString &) const>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'beginNewGame'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGameLost'
        QtMocHelpers::SlotData<void(const QString &) const>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 22 },
        }}),
        // Slot 'updateAttemptsLabel'
        QtMocHelpers::SlotData<void(int) const>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changeDifficultyRequested(); break;
        case 1: _t->startGameClicked(); break;
        case 2: _t->difficultyClicked(); break;
        case 3: _t->settingsClicked(); break;
        case 4: _t->statisticsClicked(); break;
        case 5: _t->exitClicked(); break;
        case 6: _t->backClicked(); break;
        case 7: _t->pauseClicked(); break;
        case 8: _t->newGameClicked(); break;
        case 9: _t->showDefinitionClicked(); break;
        case 10: _t->onLetterClicked((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 11: _t->updateGameImage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->updateGameLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->updateDescriptionLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->beginNewGame(); break;
        case 15: _t->onGameLost((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->updateAttemptsLabel((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::changeDifficultyRequested, 0))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::changeDifficultyRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
