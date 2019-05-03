//
//  Card.hpp
//  CECS282_Program1
//
//  Created by Jasmin Agustin on 1/25/17.
//  Copyright © 2017 Jasmin Agustin. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp
#include <string>
using namespace std;

class Card{
private:
    string rank;
    char suit;
    int value;
    
public:
    Card();
    Card(string r, char s);
    void setCard(string r, char s);
    int getValue();
    void display();
};

#endif
