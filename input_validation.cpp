/********************************************************************* 
** Author: Shawn Berg
** Date: 7/6/17
** Description: Validates input within a range.
*********************************************************************/

#include <iostream>
#include "input_validation.hpp"

using namespace std;

int intValid(int min, int max)
{
    int userInput;
    cin >> userInput;

    while ((userInput < min || userInput > max) || cin.fail())
    {
        cout << "Error. Please enter a number between " << min << " and " << max << "." << endl;
        cin.clear();
        cin.ignore();
        cin >> userInput;
    }

    cin.clear();
    cin.ignore();
    return userInput;
}

double doubleValid(double min, double max)
{
    double userInput;
    cin >> userInput;

    while ((userInput < min || userInput > max) || cin.fail())
    {
        cout << "Error. Please enter a number between " << min << " and " << max << "." << endl;
        cin.clear();
        cin.ignore();
        cin >> userInput;
    }

    cin.clear();
    cin.ignore();
    return userInput;
}



