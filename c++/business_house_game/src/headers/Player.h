#ifndef BUSINESS_HOUSE_GAME_PLAYER
#define BUSINESS_HOUSE_GAME_PLAYER

#include <vector>
#include "Cell.h"

class Player {
    int position ;
    int balance ;
    std::vector<Cell*> hotels;
    
    public :
    Player(int pos , int bal ) : position( pos ) , balance( bal ) {}
    void move( int np ) ;
    void payRent() ;
    void buyHotel() ;
    void addTreasure() ;

    std::vector<Cell*> getHotels() ;
    int getPosition() ;
    int getBalance() ;
};

#endif