#ifndef BUSINESS_HOUSE_GAME_HOTEL
#define BUSINESS_HOUSE_GAME_HOTEL

#include "Cell.h"
#include "Player.h"

class Hotel : public Cell{
    Player owner ;
    int rent ;
    int value ;
};

#endif