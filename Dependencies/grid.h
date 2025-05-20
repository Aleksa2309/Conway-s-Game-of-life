#ifndef GRID_H
#define GRID_H

#include <vector>
#include "cell.h"

class Grid {
public:
    Grid();

    ~Grid();

private:
    std::vector<std::vector<Cell>> field;
    int fieldSize; //Detemines row & col size of the field

    void loadInitialState(Grid *initialGrid);

    void loadNextGeneration();

    void calculateNextGeneration(Grid* currentGrid);
};

#endif