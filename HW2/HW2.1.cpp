/*TASK:

    Make example of this code implementation
    Add lines into WHILE section
    Place code in different files*/

#include <iostream>
#include "infantryClass.h"
using namespace std;

struct Pos
{
    float x, y, z;
    Pos()
    {
        x = y = z = 0.0f;
    }
};

//Removed class def, and put it in infantryClass.h

int main()
{
    int msg=1;

    int decision = 0;

    while (1)
    {
        std::cout << "TAKE DECISION: \n";
        std::cin >> decision;

        if (decision == 0)
        {
            break;
        }
        if (decision == 1)
        {
            // unit takes simple damage
        }

        // if unit's health is < 0 
        // post message
        // quit programm
    }
    return 0;
};