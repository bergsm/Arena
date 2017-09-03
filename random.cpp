/********************************************************************* 
** Author: Shawn Berg
** Date: 7/7/17
** Description: This function gives a random number between two numbers
*********************************************************************/

#include <iostream>
#include <ctime>
#include "random.hpp"

using namespace std;



void setSeed()
{
    unsigned seed = time(0);
    srand(seed);
}

int randInt(int low, int high)
{
    int number = 0;
    number = high - (rand() % (high - (low-1)));
    return number;
}