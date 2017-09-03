/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: Header file for HarryPotter.cpp
*********************************************************************/

#ifndef PROJECT3_HARRYPOTTER_HPP
#define PROJECT3_HARRYPOTTER_HPP

#include <iostream>
#include "CreatureBase.hpp"

using namespace std;

class HarryPotter : public CreatureBase
{
private:
    // Member Variables
    int lives;

public:
    // Overload Constructor


    // Default Constructor
    HarryPotter();

    // Destructor


    // Getters


    // Setters


    // Methods
    void revive();
    bool isDead();

};

#endif //PROJECT3_HARRYPOTTER_HPP
