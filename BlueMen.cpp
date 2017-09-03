/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Class file for BlueMen creature
*********************************************************************/

#include <iostream>
#include "BlueMen.hpp"

using namespace std;

BlueMen::BlueMen()
{
    name = "BlueMen";
    strength = 12;
    armor = 3;
    numAttackDie = 2;
    numAttackDieSides = 10;
    numDefDie = 3;
    numDefDieSides = 6;
}

void BlueMen::defend(int oppAttack)
{
    // Create a die for defense
    Die defendDie(numDefDieSides);
    int defense = 0;

    // If strength falls below 8, defense loses a die
    if (strength <= 8 && strength > 4)
    {
        cout << "BlueMen lose a man! Defense goes down!" << endl;
        numDefDie -= 1;
    }

    // If strength falls below 4, defense loses another die
    if (strength <= 4)
    {
        cout << "BlueMen lose a man! Defense goes down!" << endl;
        numDefDie -= 1;
    }

    // roll die
    for (int i=0; i<numDefDie; i++)
        defense += defendDie.roll();

    // output defense info to user
    cout << name << " defense: " << defense << endl;
    cout << name << " armor: " << armor << endl;
    cout << name << " total defense: " << defense + armor << endl;

    // Decrease strength
    if ((oppAttack - armor) - defense > 0)
        strength -= ((oppAttack - armor) - defense);
}
