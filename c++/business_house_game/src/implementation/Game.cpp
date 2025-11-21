#include "Game.h"
#include "Empty.h"
#include "Hotel.h"
#include "Jail.h"
#include "Treasure.h"

Game::Game( int n = 0 , int c = 0 ) : noOfPlayers( n ) , noOfChances( c ) {}

void Game::createGame( std::vector<char> cellTypes , std::vector<int> di , int initialMoney , int hotelWorth , int hotelRent , int jailFine , int treasureValue) {
    std::vector<Cell*> cells ;
    for ( int i = 0 ; i < cellTypes.size() ; i++ ) {
        Cell *cell = nullptr ;
        switch( cellTypes[ i ] ) {
            case 'H' :
               cell = new Hotel( hotelRent , hotelWorth ) ;
               break ;
            case 'J' :
               cell = new Jail( jailFine ) ;
               break ;
            case 'T' :
               cell = new Treasure( treasureValue ) ;
               break ;
            default :
               cell = new Empty() ;
               break ;
        }
        cells.push_back( cell ) ;
    }
    board = Board( cells ) ;

    for ( int i = 0 ; i < noOfPlayers ; i++ ) {
        players.push_back( Player(i , initialMoney ) ) ;
    }

    for (int i = 0 ; i < di.size() ; i++ ) {
        dice.push_back( di[ i ] ) ;
    }
}


void Game::startGame(){
    int n = dice.size() ;
    int i = 0 ;
    for ( int i = 0 )
}