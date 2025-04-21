#include <QApplication>
#include "mainwindow.h"
#include <QWidget>




int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    MainWindow w;
    w.setWindowTitle("HangMan");
    w.show();



    return app.exec();  ;
}
