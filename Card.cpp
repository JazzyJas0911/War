//
//  Card.cpp
//  CECS282_Program1
//
//  Created by Jasmin Agustin on 1/25/17.
//  Copyright © 2017 Jasmin Agustin. All rights reserved.
//

#include "Card.hpp"
#include <iostream>
using namespace std;

Card:: Card(){
    rank = "X";
    suit = 'X';
}

Card:: Card(string r, char s){
    rank = r;
    suit = s;
}

void Card:: setCard(string r, char s){
    rank = r;
    suit = s;
}

int Card:: getValue(){//different ways to compare strings
    if (rank == " 2")
        value = 1;
    else if (rank == " 3")
        value = 2;
    else if (rank == " 4")
        value = 3;
    else if (rank == " 5")
        value = 4;
    else if (rank == " 6")
        value = 5;
    else if (rank.compare(" 7") == 0)
        value = 6;
    else if (rank.compare(" 8") == 0)
        value = 7;
    else if (rank.compare(" 9") == 0)
        value = 8;
    else if (rank.compare("10") == 0)
        value = 9;
    else if (!rank.compare(" J"))
        value = 10;
    else if (!rank.compare(" Q"))
        value = 11;
    else if (!rank.compare(" K"))
        value = 12;
    else if (!rank.compare(" A"))
        value = 13;
    return value;
}

void Card:: display(){
    if (suit == 'C'){
        cout << rank << " of Clubs\n"
        << " -----------\n"
        << "[" << rank << "         ]\n"
        << "[    ***    ]\n"
        << "[    ***    ]\n"
        << "[    ***    ]\n"
        << "[ *** * *** ]\n"
        << "[ ********* ]\n"
        << "[ *** * *** ]\n"
        << "[     *     ]\n"
        << "[    ***    ]\n"
        << "[ ********* ]\n"
        << "[         " << rank << "]\n"
        << " -----------\n";
    }
    else if (suit == 'D'){
        cout << rank << " of Diamonds\n"
        << " -----------\n"
        << "[" << rank << "         ]\n"
        << "[     *     ]\n"
        << "[    ***    ]\n"
        << "[   *****   ]\n"
        << "[  *******  ]\n"
        << "[ ********* ]\n"
        << "[  *******  ]\n"
        << "[   *****   ]\n"
        << "[    ***    ]\n"
        << "[     *     ]\n"
        << "[         " << rank << "]\n"
        << " -----------\n";
    }
    else if (suit == 'H'){
        cout << rank << " of Hearts\n"
        << " -----------\n"
        << "[" << rank << "         ]\n"
        << "[  **   **  ]\n"
        << "[ **** **** ]\n"
        << "[ ********* ]\n"
        << "[ ********* ]\n"
        << "[ ********* ]\n"
        << "[  *******  ]\n"
        << "[   *****   ]\n"
        << "[    ***    ]\n"
        << "[     *     ]\n"
        << "[         " << rank << "]\n"
        << " -----------\n";
    }
    else if (suit == 'S'){
        cout << rank << " of Spades\n"
        << " -----------\n"
        << "[" << rank << "         ]\n"
        << "[     *     ]\n"
        << "[    ***    ]\n"
        << "[   *****   ]\n"
        << "[  *******  ]\n"
        << "[ ********* ]\n"
        << "[ ********* ]\n"
        << "[ ** *** ** ]\n"
        << "[    ***    ]\n"
        << "[ ********* ]\n"
        << "[         " << rank << "]\n"
        << " -----------\n";
    }
}
