/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Base class for the creatures
*********************************************************************/

#include <iostream>
#include "CreatureBase.hpp"

using namespace std;

CreatureBase::CreatureBase()
{
    name = "Creature";
    strength = 10;
    armor = 1;
    numAttackDie = 2;
    numAttackDieSides = 6;
    numDefDie = 2;
    numDefDieSides = 6;
}

CreatureBase::~CreatureBase()
{}

int CreatureBase::getStrength()
{
    if (strength >= 0)
        return strength;
    else
        return 0;
}

string CreatureBase::getName()
{
    return name;
}

int CreatureBase::getArmor()
{
    return armor;
}


int CreatureBase::attack()
{
    Die attackDie(numAttackDieSides); // Create attack die for creature
    int attack = 0;

    // Roll die multiple times
    for (int i=0; i<numAttackDie; i++)
        attack += attackDie.roll();

    // Display the attack power
    cout << name << " attack: " << attack << endl;

    return attack;
}

void CreatureBase::defend(int oppAttack)
{
    Die defendDie(numDefDieSides); // Create defense die for creature
    int defense = 0;

    // Roll die multiple times
    for (int i=0; i<numDefDie; i++)
        defense += defendDie.roll();

    // Display defense info
    cout << name << " defense: " << defense << endl;
    cout << name << " armor: " << armor << endl;
    cout << name << " total defense: " << defense + armor << endl;

    // Subtract attack from strength
    if ((oppAttack - armor) - defense > 0)
        strength -= ((oppAttack - armor) - defense);
}

bool CreatureBase::isDead()
{
    if (strength <= 0)
        return true;
    else
        return false;
}