//
//  Deck.cpp
//  CECS282_Program1
//
//  Created by Jasmin Agustin on 1/25/17.
//  Copyright © 2017 Jasmin Agustin. All rights reserved.
//

#include "Deck.hpp"
#include <iostream>
using namespace std;

Deck:: Deck(){
    count = 52;
    pile[0].setCard(" A", 'C');
    pile[1].setCard(" 2", 'C');
    pile[2].setCard(" 3", 'C');
    pile[3].setCard(" 4", 'C');
    pile[4].setCard(" 5", 'C');
    pile[5].setCard(" 6", 'C');
    pile[6].setCard(" 7", 'C');
    pile[7].setCard(" 8", 'C');
    pile[8].setCard(" 9", 'C');
    pile[9].setCard("10", 'C');
    pile[10].setCard(" J", 'C');
    pile[11].setCard(" Q", 'C');
    pile[12].setCard(" K", 'C');
    pile[13].setCard(" A", 'D');
    pile[14].setCard(" 2", 'D');
    pile[15].setCard(" 3", 'D');
    pile[16].setCard(" 4", 'D');
    pile[17].setCard(" 5", 'D');
    pile[18].setCard(" 6", 'D');
    pile[19].setCard(" 7", 'D');
    pile[20].setCard(" 8", 'D');
    pile[21].setCard(" 9", 'D');
    pile[22].setCard("10", 'D');
    pile[23].setCard(" J", 'D');
    pile[24].setCard(" Q", 'D');
    pile[25].setCard(" K", 'D');
    pile[26].setCard(" A", 'H');
    pile[27].setCard(" 2", 'H');
    pile[28].setCard(" 3", 'H');
    pile[29].setCard(" 4", 'H');
    pile[30].setCard(" 5", 'H');
    pile[31].setCard(" 6", 'H');
    pile[32].setCard(" 7", 'H');
    pile[33].setCard(" 8", 'H');
    pile[34].setCard(" 9", 'H');
    pile[35].setCard("10", 'H');
    pile[36].setCard(" J", 'H');
    pile[37].setCard(" Q", 'H');
    pile[38].setCard(" K", 'H');
    pile[39].setCard(" A", 'S');
    pile[40].setCard(" 2", 'S');
    pile[41].setCard(" 3", 'S');
    pile[42].setCard(" 4", 'S');
    pile[43].setCard(" 5", 'S');
    pile[44].setCard(" 6", 'S');
    pile[45].setCard(" 7", 'S');
    pile[46].setCard(" 8", 'S');
    pile[47].setCard(" 9", 'S');
    pile[48].setCard("10", 'S');
    pile[49].setCard(" J", 'S');
    pile[50].setCard(" Q", 'S');
    pile[51].setCard(" K", 'S');
}

void Deck:: resetDeck(){
    count = 52;
}

Card Deck:: deal(){
    count = count - 1;
    return pile[count];
}

void Deck:: shuffle(){
    if (count == 52){
        for (int i = 0; i < 52; i++){
            int index = rand() % 52;//generates random numbers 0-51
            Card A = pile[index];
            pile[index] = pile[i];
            pile[i] = A;
        }
    }
    else
        cout << "You cannot shuffle a partial deck.\n";
}

int Deck:: cardsLeft(){
    return count;
}

void Deck:: displayDeck(){
    for (int i = 0; i < count; i++)
        pile[i].display();
}
