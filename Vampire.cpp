/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Class file for the vampire creature
*********************************************************************/

#include <iostream>
#include "Vampire.hpp"

using namespace std;

Vampire::Vampire()
{
    name = "Vampire";
    strength = 18;
    armor = 1;
    numAttackDie = 1;
    numAttackDieSides = 12;
    numDefDie = 1;
    numDefDieSides = 6;
}

void Vampire::defend(int oppAttack)
{
    // Charm special ability
    bool charm = randInt(0, 1);

    if (charm == true)
    {
        cout << "Vampire uses charm!" << endl;
        oppAttack = 0;
    }

    // Create die for vampire
    Die defendDie(numDefDieSides);
    int defense = 0;

    // roll die
    for (int i=0; i<numDefDie; i++)
        defense += defendDie.roll();

    // Display defense info to user
    cout << name << " defense: " << defense << endl;
    cout << name << " armor: " << armor << endl;
    cout << name << " total defense: " << defense + armor << endl;

    // Decrease strength
    if ((oppAttack - armor) - defense > 0)
        strength -= ((oppAttack - armor) - defense);
}
