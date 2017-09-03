/********************************************************************* 
** Author: Shawn Berg
** Date: 7/7/17
** Description: Header file for random_number.cpp. Requires two numbers
 * to choose between. Must use setSeed function at beginning of program!
*********************************************************************/

#ifndef RANDOM_NUMBER_HPP
#define RANDOM_NUMBER_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

void setSeed();

int randInt(int low, int high); // Function prototype

double randDouble(double low, double high); //TODO


#endif //RANDOM_NUMBER_HPP