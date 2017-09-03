/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Header file for CreatureBase.cpp
*********************************************************************/

#ifndef PROJECT3_CREATUREBASE_HPP
#define PROJECT3_CREATUREBASE_HPP

#include <iostream>
#include "Die.hpp"
#include <string>

using namespace std;

class CreatureBase
{
private:

protected:
    // Member Variables
    string name;
    int strength;
    int armor;
    int numAttackDie;
    int numAttackDieSides;
    int numDefDie;
    int numDefDieSides;

public:
    // Overload Constructor


    // Default Constructor
    CreatureBase();

    // Destructor
    virtual ~CreatureBase();

    // Getters
    int getStrength();
    string getName();
    int getArmor();

    // Setters


    // Methods
    virtual int attack();
    virtual void defend(int oppAttack);
    virtual bool isDead();

};

#endif //PROJECT3_CREATUREBASE_HPP
