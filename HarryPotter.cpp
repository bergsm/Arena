/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Class file for Harry Potter creature
*********************************************************************/

#include <iostream>
#include "HarryPotter.hpp"

using namespace std;

HarryPotter::HarryPotter()
{
    name = "Harry Potter";
    lives = 2;
    strength = 10;
    armor = 0;
    numAttackDie = 2;
    numAttackDieSides = 6;
    numDefDie = 2;
    numDefDieSides = 6;
}

void HarryPotter::revive()
{
    // revive special ability
    cout << "Harry uses the power of Hogwarts to revive more powerful!" << endl << endl;
    lives -= 1;
    strength = 20;
}

bool HarryPotter::isDead()
{
    // if lives are remaining, activate revive ability
    if (lives == 2 && strength <= 0)
    {
        revive();
        return false;
    }

    else if (lives < 2 && strength <=0)
        return true;
    else
        return false;
}


