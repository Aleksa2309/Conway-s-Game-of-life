#ifndef GRID_H
#define GRID_H

#include <vector>
#include "cell.h"

class Grid {
public:
    Grid();

    ~Grid();

    void loadInitialState();

    void loadNextGeneration();

    Grid calculateNextGeneration(Grid* currentGrid);

    int getFieldSize();

    bool getCell(int row, int col);

private:
    std::vector<std::vector<Cell>> field;
    int fieldSize; //Detemines row & col size of the field
};

#endif