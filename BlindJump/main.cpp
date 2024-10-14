// this program is going to be a small video game. You start in a ship that has made a blind jump into unknown space. You don't know the Ship that you were using, you only find that out when you spawn in. You don't know the enemy, you just know that you are outnumbered. Your ship may be large and have lots of sub weaponry such as infantry tanks or aircraft and artillery or it may be a small Corvette or destroyer, which only has guns and lasers maybe some missiles. You may be lucky enough to be a carrier or a cruiser and actually have some of the sub weaponry and can use them for offensive missions on the ground. There is land battle to this game, but there's also space battle you can as you progress through the game, upgrade your likelihood of getting better weapons, and better ships in the future overtime.
// for now, I will start with making a Corvette, and making it face off versus one single enemy. Getting together its weapons, HP, Damage.

#include <iostream>
#include "ShipCharacteristics.h"
using namespace std;



int main()
{
    int GAMERUNNING = 1;
    while(GAMERUNNING == 1)
    {
        Corvette pirannah;
        pirannah.printStatusReport();
        GAMERUNNING = 0;
    }
    return 0;
}