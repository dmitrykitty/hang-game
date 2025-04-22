#include <QApplication>
#include "mainwindow.h"
#include <QWidget>




int main(int argc, char *argv[]) {

    QGuiApplication::setHighDpiScaleFactorRoundingPolicy(
        Qt::HighDpiScaleFactorRoundingPolicy::RoundPreferFloor
        );

    QApplication app(argc, argv);

    MainWindow w;
    w.setWindowTitle("HangMan");
    w.show();



    return app.exec();  ;
}
