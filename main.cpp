//
//  main.cpp
//  CECS282_Program1: War
//
//  Created by Jasmin Agustin on 1/25/17.
//  Copyright © 2017 Jasmin Agustin. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Deck.hpp"
#include "Card.hpp"

int menu(){
    int userInput;
    cout << "Menu:\n"
    << "1) Get A New Deck\n"
    << "2) Show All Remaining Cards In Deck\n"
    << "3) Shuffle\n"
    << "4) Play WAR\n"
    << "5) Exit\n";
    cin >> userInput;
    return userInput;
}

int main() {
    int choice = 0;
    char play;
    Deck stack;
    Deck newdeck;
    Card P1;
    Card P2;
    while (choice != 5){
        choice = menu();
        switch(choice){
            case 1:
                stack = newdeck;
                break;
            case 2:
                stack.displayDeck();
                break;
            case 3:
                stack.shuffle();
                break;
            case 4:
                play = 'y';
                while(play == 'y'){
                    if (stack.cardsLeft() == 0){
                        cout << "You have 0 cards left. Please create a new deck.\n";
                        play = 'n';
                    }
                    else{
                        cout << "There are " << stack.cardsLeft() << " cards in the deck.\n";
                        cout << "Player 1:\n";
                        P1 = stack.deal();
                        P1.display();
                        cout << "Player 2:\n";
                        P2 = stack.deal();
                        P2.display();
                        if (P1.getValue() > P2.getValue())
                            cout << "Player 1 wins!!\n";
                        else if (P1.getValue() < P2.getValue())
                            cout << "Player 2 wins!!\n";
                        else
                            cout << "It's a tie!!\n";
                        cout << "Do you want to play again? (y/n)";
                        cin >> play;
                    } 
                }
                break;
            case 5:
                cout << "You chose to exit. Thanks for playing.\n";
                break;
            default:
                cout << "Invalid input. Please enter another number.\n";
                break;
        }
    }
    return 0;
}

