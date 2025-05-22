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

    //Adding a query layout
    /*QLabel *label = new QLabel(
        QApplication::translate("toplevel", "Name: ")
    );

    QLineEdit *lineEdit = new QLineEdit();

    QPushButton *button = new QPushButton(
        QApplication::translate("toplevel", "Push me"), &window
    );

    QHBoxLayout *querylayout = new QHBoxLayout();
    querylayout->addWidget(label);
    querylayout->addWidget(lineEdit);
    querylayout->addWidget(button);
    
    //Adding and populatin a table
    QTableView *table = new QTableView();
    QStandardItemModel *model = new QStandardItemModel(10, 2);

    //Set header data
    for (int column = 0; column < 2; column++) {
        model->setHeaderData(column, Qt::Horizontal, QString("Column %1").arg(column + 1));
    }

    //Populate the cells
    for(int row = 0; row < 10; row++) {
        for(int column = 0; column < 2; column++) {
            QModelIndex index = model->index(row, column, QModelIndex());
            model->setData(index, QString("Cell (%1,%2)").arg(row + 1).arg(column + 1));
        }
    }
    table->setModel(model);

    //Packaging it together into one layout
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addLayout(querylayout);
    mainLayout->addWidget(table);
    
    window.setLayout(mainLayout);
    window.setWindowTitle(
        QApplication::translate("toplevel", "toplevelwidget")
    );
    window.resize(900, 500);
    window.show();*/

    return app.exec();
}