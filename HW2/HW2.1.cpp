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

    //Need to ask to get a class so we can actually access the functions below.
    Infantry sarge;

    while (1)
    {
        std::cout << "2 = Knockback ,3 = Damage, 0 = esc \n";
        std::cin >> decision;

        if (decision == 0)
        {
            std::cout << "0 chosen!\n";
            break;
        }
        if (decision == 1)
        {
            std::cout << "1 chosen!\n";
            sarge.takeSpecialDamage();
        }
        if (decision == 2) //Knockback
        {
            std::cout << "2 chosen!\n";
            sarge.takeKnockbackDamage();
            sarge.printCords();
        }
        if (decision == 3) //Damage
        {
            std::cout << "3 chosen!\n";
            sarge.takeStandardDamage();
            sarge.printCords();
        }

        // if unit's health is < 0 
        // post message
        // quit programm
    }
    return 0;
};