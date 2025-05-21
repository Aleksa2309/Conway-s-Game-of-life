#include "guiModel.h"
#include <QPainter>
#include <QRect>
#include <QDebug>
#include "grid.h"

guiModel::guiModel(QWidget *parent): cellSize(15) {
    grid.loadInitialState();
    setFixedSize(cellSize * grid.getFieldSize(), cellSize * grid.getFieldSize());
}

void guiModel::mousePressEvent(QMouseEvent *event) {
    // Your implementation code here
}

void guiModel::paintEvent(QPaintEvent *event) {
    QPainter painter(this);

    int x = 0;
    int y = 0;
    for(int row = 0; row < grid.getFieldSize(); row++) {
        for(int col = 0; col < grid.getFieldSize(); col++) {
            QRect cell(x, y, cellSize, cellSize);

            if(grid.getCell(row, col) == true) {
                qDebug() << "Alive cell at grid pos:" 
                    << row << col << "pixel pos:" << x << y;

                painter.setBrush(QBrush(QColor(63, 125, 224)));
                painter.setPen(QPen(QColor(47, 75, 120)));    
            }
            else {
                painter.setBrush(QBrush(QColor(221, 227, 237)));
                painter.setPen(QPen(QColor(180, 185, 194)));
            }
            painter.drawRect(cell);
            x += cellSize;
        }
        x = 0;
        y += cellSize;
    }
}