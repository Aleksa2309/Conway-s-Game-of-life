#include "grid.h"
#include "cell.h"
#include <QDebug>

Grid::Grid(): fieldSize(40) {
    field.assign(fieldSize, std::vector<Cell>(fieldSize));

    for(int row = 0; row < fieldSize; row++) {
        for(int col = 0; col < fieldSize; col++) {
            field[row][col] = Cell();
        }
    }
}

Grid::~Grid() = default;

void Grid::loadInitialState() {
    
    // o o o o o   o o o o o
    // o x o x x   o o x o o 
    // o x o o o   o x o o o
    // o o x x x   o x o x x
    // o x o x o   o o o x x

    field[1][1].setState(true);
    field[1][3].setState(true);
    field[1][4].setState(true);
    field[2][1].setState(true);
    field[3][2].setState(true);
    field[3][3].setState(true);
    field[3][4].setState(true);
    field[4][1].setState(true);
    field[4][3].setState(true);
}

void Grid::loadNextGeneration() {
    Grid nextGen = calculateNextGeneration(this);
    
    for(int row = 0; row < fieldSize; row++) {
        for(int col = 0; col < fieldSize; col++) {
            field[row][col].setState(nextGen.field[row][col].getState());
        }
    }
}

Grid Grid::calculateNextGeneration(Grid *currentGrid) {
    Grid nextGen;
    int aliveNeighbours;

    for(int row = 0; row < fieldSize; row++) {
        for(int col = 0; col < fieldSize; col++) {
            nextGen.field[row][col].setState(currentGrid->field[row][col].getState());
        }
    }

    // o o o
    // o x o
    // o o o
    for(int row = 1; row < fieldSize - 1; row++) {
        for(int col = 1; col < fieldSize - 1; col++) {
            aliveNeighbours = currentGrid->field[row - 1][col - 1].getState()
                    + currentGrid->field[row - 1][col].getState()
                    + currentGrid->field[row - 1][col + 1].getState()
                    + currentGrid->field[row][col - 1].getState()
                    + currentGrid->field[row][col + 1].getState()
                    + currentGrid->field[row + 1][col - 1].getState()
                    + currentGrid->field[row + 1][col].getState()
                    + currentGrid->field[row + 1][col + 1].getState();

            if(currentGrid->field[row][col].getState() == true) {
                if (aliveNeighbours < 2 || aliveNeighbours > 3)
                    nextGen.field[row][col].setState(false);
            }   
            else if(currentGrid->field[row][col].getState() == false && aliveNeighbours == 3) {
                nextGen.field[row][col].setState(true);
            }
        }
    }

    qDebug() << "Next generation" << "\n"; 
    return nextGen;
}

int Grid::getFieldSize() {
    return fieldSize;
}

bool Grid::getCell(int row, int col) {
    return field[row][col].getState();
}