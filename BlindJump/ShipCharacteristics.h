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

    int randomGenny(std::mt19937& gen, int min, int max)
    {
        std::uniform_int_distribution<> distrib(min, max);
	//adding class.param distr.param to change the paramaters each time 
	//so I don't get the same number over and over.
	distrib.param(std::uniform_int_distribution<int>::param_type(min,max));
        return distrib(gen);
    };
};

class Corvette : public Ship
{public:
 Corvette()
 {
    //https://www.geeksforgeeks.org/how-to-generate-random-value-by-dice-roll-in-cpp/
    //Init the random number generation.
    int minHP = 50;
    int maxHP = 100;
    int minCannon = 0;
    int maxCannon = 4;
    int minLaser = 0;
    int maxLaser = 4;
    int minMissile = 0;
    int maxMissile = 4;
    int minCannonAmmo = 0;
    int maxCannonAmmo = 400;
    int minMissileAmmo = 0;
    int maxMissileAmmo = 400;
    int maxWeapons = 4;

do {
    std::mt19937 gen(time(0));
    HP = randomGenny(gen, minHP, maxHP);
    cannon = randomGenny(gen, minCannon, maxCannon);
    cannonAmmo= randomGenny(gen, minCannonAmmo, maxCannonAmmo);
    laser = randomGenny(gen, minLaser, maxLaser);
    missile= randomGenny(gen, minMissile, maxMissile);
    missileAmmo= randomGenny(gen, minMissileAmmo, maxMissileAmmo);
    //This is a shit way of doing it but it works for now. Please change me later.
    }while (cannon+laser+missile >= 4);

    std::cout << " HP is  " << HP << std::endl;
    std::cout << "cannons are " << cannon << std::endl;
    std::cout << "ammo " << cannonAmmo << std::endl;
    std::cout << "lasers are " << laser << std::endl;
    std::cout << "missiles " << missile << std::endl;
    std::cout << "MIssileAmmo " << missileAmmo << std::endl;
    
};

/* ~Corvette()
    {
        // delete something new.
    };
*/
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
