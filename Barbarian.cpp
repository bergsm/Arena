/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Class for the barbarian creature
*********************************************************************/

#include <iostream>
#include "Barbarian.hpp"

using namespace std;

Barbarian::Barbarian()
{
    name = "Barbarian";
    strength = 12;
    armor = 0;
    numAttackDie = 2;
    numAttackDieSides = 6;
    numDefDie = 2;
    numDefDieSides = 6;
}


