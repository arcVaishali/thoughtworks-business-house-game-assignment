#include <iostream>
#include <string>
#include <vector>

#include "Game.h"

const int initialMoney = 1000 ;
const int hotelWorth = 200 ;
const int hotelRent = 50 ;
const int jailFine = 150 ;
const int treasureValue = 200 ;

std::vector<char> processInputCells( std::string inputCells ) {
    std::vector<char> res ;
    char cellType ; 
    for ( auto a : inputCells ) {
        if ( a == ',') {
            res.push_back( cellType ) ;
        } else {
            cellType = a ;
        }
    }
    res.push_back( cellType );
    return res ;
}

std::vector<int> processDiceOutput( std::string diceOutputs ) {
    std::vector<int> res ;
    int diceOutput ; 
    for ( auto a : diceOutputs ) {
        if ( a == ',') {
            res.push_back( diceOutput ) ;
        } else {
            diceOutput = a - '0' ;
        }
    }
    res.push_back( diceOutput ) ;
    return res ;
}

int main() {
    std::cout << "===========BUSINESS HOUSE GAME============\n" ;
    int n = 3 ;
    int c = 10 ;
    /*
    std::cout << "Enter number of Players :: " << "\n" ;
    std::cin >> n ;
    */

    std::string inputCells = "E,E,J,H,E,T,J,T,E,E,H,J,T,H,E,E,J,H,E,T,J,T,E,E,H,J,T,H,J,E,E,J,H,E,T,J,T,E,E,H,J,T,E,H,E";
    /*
    std::cout << "Enter Input Cell Positions and Types :: " << "\n" ;
    std::cin >> inputCells ;
    */

    std::vector<char> ch = processInputCells( inputCells ) ;

    std::string diceInputs = "4,4,4,6,7,8,5,11,10,12,2,3,5,6,7,8,5,11,10,12,2,3,5,6,7,8,5,11,10,12" ;
    /* 
    std::cout << "Enter Dice Output :: " << "\n" ;
    std::cin >> diceInputs ;
    */
    std::vector<int> di = processDiceOutput( diceInputs );


    Game g = Game( n , c ) ;
    g.createGame(ch , di , initialMoney , hotelWorth , hotelRent , jailFine , treasureValue) ; 
    
}