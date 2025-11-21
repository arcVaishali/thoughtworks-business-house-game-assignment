#ifndef BUSINESS_HOUSE_GAME
#define BUSINESS_HOUSE_GAME

#include <vector>
#include "Board.h"
#include "Player.h"

class Game{
    int noOfPlayers ;
    int noOfChances ;
    std::vector<Player> players ;
    Board board ;
    std::vector<int> dice ;

    public :
    Game( int n = 0 , int c = 0 ) ;

    void createGame( std::vector<char> , std::vector<int> , const int , const int , const int , const int , const int ) ;
    void startGame() ;
    void endGame() ;
};

#endif