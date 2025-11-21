#ifndef BUSINESS_HOUSE_GAME_BOARD
#define BUSINESS_HOUSE_GAME_BOARD

#include <vector>
#include "Cell.h" 

class Board{
    std::vector<Cell*> cells ;

    public :
    Board() {}
    Board(std::vector<Cell*> c) {
        cells = c ;
    }
};

#endif 