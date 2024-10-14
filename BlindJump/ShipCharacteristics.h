// ShipCharacteristics.h

class Ship
{
public:
    int HP = 0;
    int speed = 0;
    int cannon = 0;
    int laser = 0;
    int missile = 0;
    int cannonAmmo = 0;
    int missileAmmo = 0;

    void printStatusReport(){
        std::cout << "--------SHIP STATUS--------\nHP = " << HP << "\n" << speed << "m/s\n" << "CannonAmmo = " << cannonAmmo << "\nMissile Ammo = " << missileAmmo << "\n";
    };
};

class Corvette : public Ship
{public:
 Corvette()
 {
    //https://www.geeksforgeeks.org/how-to-generate-random-value-by-dice-roll-in-cpp/
    //Init the random number generation.
    int min = 50;
    int max = 100;
    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> distrib(min, max);
    //Genny Yes I mean Genny. Urban Dead
    HP = distrib(gen);
    std::cout << " Dice roll result is: " << HP << std::endl;
};
};

class Carrier  : public Ship
{
public:
    int infantry = 0;
    int tank = 0;
    int fighter = 0;
    int aircraft = 0;
    int artillery = 0;
    int nuke = 0;
    bool AI = true;
};