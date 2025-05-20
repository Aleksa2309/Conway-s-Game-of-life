#ifndef CELL_H
#define CELL_H

#include <string>

class Cell {
private:
    bool state;

public:
    Cell();

    ~Cell();

    bool getState();

    void setState(const bool newState);
};


#endif

