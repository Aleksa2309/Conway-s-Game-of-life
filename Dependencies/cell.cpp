#include "cell.h"

Cell::Cell(): state(false){}

Cell::~Cell() = default;

bool Cell::getState() {
    return state;
}

void Cell::setState(const bool newState) {
    state = newState;
}