/********************************************************************* 
** Author: Shawn Berg
** Date: 7/12/17
** Description: This class holds the information for the Dice used in
 * War
*********************************************************************/

#include <iostream>
#include "Die.hpp"

using namespace std;

Die::Die()
{
    sides = 6;
}

Die::Die(int newSides)
{
    sides = newSides;
}

Die::~Die()
{}

int Die::getSides()
{
    return sides;
}

void Die::setSides(int newSides)
{
    sides = newSides;
}

int Die::roll()
{
    return randInt(1, sides);
}

int LoadedDie::roll()
{
    return randInt((sides - (sides/2)), sides);
}