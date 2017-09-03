/********************************************************************* 
** Author: Shawn Berg
** Date: 7/6/17
** Description: Menu for programs
*********************************************************************/

#include <iostream>
#include "menu.hpp"
#include "input_validation.hpp"


using namespace std;

int menu1()
{

    int selection = 0;

    // Menu
    cout << endl << "Welcome to the Arena!" << endl << endl;

    // 1) Start program
        cout << "1) Fight!" << endl << endl;

    // 2) Change number of rounds
        cout << "2) Select combatant for Player 1" << endl << endl;


        cout << "3) Select combatant for Player 2" << endl << endl;


        cout << "4) Quit" << endl << endl;


        cout << "Select an option and press [enter]" << endl;

    selection = intValid(1, 4);


    return selection;
}

int menu2()
{
    int selection = 0;

    cout << endl << "Choose the combatant for Player 1!" << endl << endl;

    cout << "1) Barbarian" << endl << endl;

    cout << "2) Vampire" << endl << endl;

    cout << "3) BlueMen" << endl << endl;

    cout << "4) Medusa" << endl << endl;

    cout << "5) Harry Potter" << endl << endl;

    selection = intValid(1, 5);

    return selection;
}

