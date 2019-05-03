//
//  Deck.hpp
//  CECS282_Program1
//
//  Created by Jasmin Agustin on 1/25/17.
//  Copyright © 2017 Jasmin Agustin. All rights reserved.
//

#include "Card.hpp"

#ifndef Deck_hpp
#define Deck_hpp

class Deck{
private:
    Card pile [52];
    int count;
    
public:
    Deck();
    void resetDeck();
    Card deal();
    void shuffle();
    int cardsLeft();
    void displayDeck();
};

#endif
