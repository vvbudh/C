/*TASK:

    Make example of this code implementation
    Add lines into WHILE section
    Place code in different files*/

#include <iostream>
#include "infantryClass.h"
using namespace std;

//Removed class def, and put it in infantryClass.h

int main()
{
    int msg=1;

    int decision = 0;

    while (1)
    {
        std::cout << "2 = Knockback ,3 = Damage, 0 = esc \n";
        std::cin >> decision;

        if (decision == 0)
        {
            break;
        }
        if (decision == 1)
        {
            void takeSpecialDamage();
        }
        if (decision == 2) //Knockback
        {
            void takeKnockbackDamage();
            void printCords();
        }
        if (decision == 3) //Damage
        {
            void takeStandardDamage();
            void printCords();
        }

        // if unit's health is < 0 
        // post message
        // quit programm
    }
    return 0;
};