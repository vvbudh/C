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
{

};


