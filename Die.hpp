/********************************************************************* 
** Author: Shawn Berg
** Date: 7/12/17
** Description: This class creates a Die to be used in War.
*********************************************************************/

#ifndef LAB3_DIE_HPP
#define LAB3_DIE_HPP

#include <iostream>
#include "random.hpp"

using namespace std;

class Die
{
private:


public:
    int sides;

    // Overload Constructor
    Die(int sides);

    // Default Constructor
    Die();


    // Destructor
    ~Die();

    // Getters
    int getSides();

    // Setters
    void setSides(int);


    // Methods
    int roll();

};


class LoadedDie : public Die
{

private:


public:

    int roll();

};

#endif //LAB3_DIE_HPP
