#include <QApplication>
#include <QWidget>
#include <QMessageBox>
#include "GUI/Source/mainwindow.h"
#include "DataBase/DataBaseManager.h"
#include <QDir>

int main(int argc, char *argv[]) {
    QGuiApplication::setHighDpiScaleFactorRoundingPolicy(
        Qt::HighDpiScaleFactorRoundingPolicy::RoundPreferFloor
        );

    QApplication app(argc, argv);
    QCoreApplication::addLibraryPath(QCoreApplication::applicationDirPath());

    QString exeDir = QCoreApplication::applicationDirPath();
    // jeżeli Twój .exe trafia do cmake-build-debug/ to poniżej jest to samo
    QString dbPath  = QDir(exeDir).absoluteFilePath("hangman.db");

    if (!DataBaseManager::instance().openDatabase("hangman.db")) {
        QMessageBox::critical(nullptr, "Error", "Cannot open database");
        return 1;
    }

    MainWindow w;
    w.setWindowTitle("HangMan");
    w.show();
    return app.exec();
}
