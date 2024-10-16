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

//New function to handle the reoccuring generation of the ship itself not only the instantiation of the genny.
    void createShip(int minHP, int maxHP, int minCannon, int maxCannon, int minCannonAmmo, int maxCannonAmmo, int minLaser, int maxLaser, int minMissile, int maxMissile, int minMissileAmmo, int maxMissileAmmo, int maxWeapons)
    {
        do {
    std::mt19937 gen(time(0));
    HP = randomGenny(gen, minHP, maxHP);
    cannon = randomGenny(gen, minCannon, maxCannon);
    cannonAmmo= randomGenny(gen, minCannonAmmo, maxCannonAmmo);
    laser = randomGenny(gen, minLaser, maxLaser);
    missile= randomGenny(gen, minMissile, maxMissile);
    missileAmmo= randomGenny(gen, minMissileAmmo, maxMissileAmmo);
    //This is a shit way of doing it but it works for now. Please change me later.
    //The number has to be larger. While you have too many weapons, keep trying to decrease them.
    }while (cannon+laser+missile >= maxWeapons);
    std::cout << " HP is  " << HP << std::endl;
    std::cout << "cannons are " << cannon << std::endl;
    std::cout << "ammo " << cannonAmmo << std::endl;
    std::cout << "lasers are " << laser << std::endl;
    std::cout << "missiles " << missile << std::endl;
    std::cout << "MissileAmmo " << missileAmmo << std::endl;
    };





};

class Corvette : public Ship
{public:
 Corvette()
 {//#1
    //https://www.geeksforgeeks.org/how-to-generate-random-value-by-dice-roll-in-cpp/
    //Init the random number generation.
    int minHP = 50;
    int maxHP = 100;
    int minCannon = 0;
    int maxCannon = 4;
    int minCannonAmmo = 0;
    int maxCannonAmmo = 400;
    int minLaser = 0;
    int maxLaser = 4;
    int minMissile = 0;
    int maxMissile = 4;
    int minMissileAmmo = 0;
    int maxMissileAmmo = 400;
    int maxWeapons = 4;


createShip(minHP, maxHP, minCannon, maxCannon, minCannonAmmo, maxCannonAmmo, minLaser, maxLaser, minMissile, maxMissile, minMissileAmmo, maxMissileAmmo, maxWeapons);

    
};

/* ~Corvette()
    {
        // delete something new.
    };
*/
};


class Frigate  : public Ship
{//#2
    public:
    int minHP = 100;
    int maxHP = 200;
    int minCannon = 0;
    int maxCannon = 8;
    int minLaser = 0;
    int maxLaser = 8;
    int minMissile = 0;
    int maxMissile = 8;
    int minCannonAmmo = 0;
    int maxCannonAmmo = 800;
    int minMissileAmmo = 0;
    int maxMissileAmmo = 800;
    int maxWeapons = 16;
    bool AI = false;
    
    Frigate()
    {
    createShip(minHP, maxHP, minCannon, maxCannon, minCannonAmmo, maxCannonAmmo, minLaser, maxLaser, minMissile, maxMissile, minMissileAmmo, maxMissileAmmo, maxWeapons);
    std::cout << "/n cannon" << cannon << "/n laser" << laser << "/n missile" << missile;
    }
};

class  Destroyer : public Ship
{//#3
    public:
    int minHP = 500;
    int maxHP = 1000;
    int minCannon = 4;
    int maxCannon = 16;
    int minLaser = 0;
    int maxLaser = 4;
    int minMissile = 0;
    int maxMissile = 12;
    int minCannonAmmo = 0;
    int maxCannonAmmo = 4000;
    int minMissileAmmo = 0;
    int maxMissileAmmo = 1200;
    int maxWeapons = 32;
    int infantry = 0;
    bool AI = false;
    Destroyer()
    {
    createShip(minHP, maxHP, minCannon, maxCannon, minCannonAmmo, maxCannonAmmo, minLaser, maxLaser, minMissile, maxMissile, minMissileAmmo, maxMissileAmmo, maxWeapons);
    }
};

/*class   : public Ship
{
    int infantry = 0;
    int tank = 0;
    int fighter = 0;
    int aircraft = 0;
    int artillery = 0;
    int nuke = 0;
    bool AI = false;
    ship0()
    {
    createShip(minHP, maxHP, minCannon, maxCannon, minCannonAmmo, maxCannonAmmo, minLaser, maxLaser, minMissile, maxMissile, minMissileAmmo, maxMissileAmmo, maxWeapons);
    }
}

class   : public Ship
{
    int infantry = 0;
    int tank = 0;
    int fighter = 0;
    int aircraft = 0;
    int artillery = 0;
    int nuke = 0;
    bool AI = false;
    ship1()
    {
    createShip(minHP, maxHP, minCannon, maxCannon, minCannonAmmo, maxCannonAmmo, minLaser, maxLaser, minMissile, maxMissile, minMissileAmmo, maxMissileAmmo, maxWeapons);
    }
}
*/
class  BattleCruiser : public Ship
{
    public:
    int minHP = 5000;
    int maxHP = 10000;
    int minCannon = 16;
    int maxCannon = 40;
    int minLaser = 10;
    int maxLaser = 36;
    int minMissile = 10;
    int maxMissile = 40;
    int minCannonAmmo = 0;
    int maxCannonAmmo = 12000;
    int minMissileAmmo = 0;
    int maxMissileAmmo = 12000;
    int maxWeapons = 64;
    BattleCruiser()
    {
    createShip(minHP, maxHP, minCannon, maxCannon, minCannonAmmo, maxCannonAmmo, minLaser, maxLaser, minMissile, maxMissile, minMissileAmmo, maxMissileAmmo, maxWeapons);
    }

    int infantry = 0;
    int tank = 0;
    int fighter = 0;
    int aircraft = 0;
    int artillery = 0;
    int nuke = 0;
    bool AI = false;
};

class Carrier  : public Ship
{
public:
    int minHP = 500000;
    int maxHP = 1000000;
    int minCannon = 12;
    int maxCannon = 16;
    int minLaser = 0;
    int maxLaser = 4;
    int minMissile = 0;
    int maxMissile = 62;
    int minCannonAmmo = 0;
    int maxCannonAmmo = 45000;
    int minMissileAmmo = 0;
    int maxMissileAmmo = 400000;
    int maxWeapons = 150;

    Carrier()
    {
    createShip(minHP, maxHP, minCannon, maxCannon, minCannonAmmo, maxCannonAmmo, minLaser, maxLaser, minMissile, maxMissile, minMissileAmmo, maxMissileAmmo, maxWeapons);
    }

    int infantry = 0;
    int tank = 0;
    int fighter = 0;
    int aircraft = 0;
    int artillery = 0;
    int nuke = 0;
    bool AI = true;
};