#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTableView>
#include <QStandardItemModel>
#include <QTimer>
#include "Dependencies/guiModel.h"

using namespace std;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;

    guiModel animation(&window);
    animation.show();

    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, [&animation] () {
        animation.updateGrid();
        animation.update();
    });
    
    timer.start(500);

    return app.exec();
}