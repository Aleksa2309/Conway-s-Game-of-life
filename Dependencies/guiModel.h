#ifndef GUIMODEL_H
#define GUIMODEL_H

#include <QWidget>
#include "cell.h"
#include "grid.h"

class guiModel : public QWidget {
public:
    guiModel(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
private:
    int cellSize; //Used for drawing
    Grid grid;
};


#endif