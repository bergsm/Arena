/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Class file for Medusa creature
*********************************************************************/

#include <iostream>
#include "Medusa.hpp"

using namespace std;

Medusa::Medusa()
{
    name = "Medusa";
    strength = 8;
    armor = 3;
    numAttackDie = 2;
    numAttackDieSides = 6;
    numDefDie = 1;
    numDefDieSides = 6;
}

int Medusa::attack()
{
    // Create attack die
    Die attackDie(numAttackDieSides);
    int attack = 0;

    // roll die
    for (int i=0; i<numAttackDie; i++)
        attack += attackDie.roll();

    // Glare special ability
    if (attack == 12)
    {
        cout << "Medusa uses glare!" << endl;
        attack = 1000;
    }

    // output attack info to user
    cout << name << " attack: " << attack << endl;

    return attack;
}
