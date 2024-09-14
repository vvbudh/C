// infantryClass.h
struct Pos
{
    float x, y, z;
    Pos()
    {
        x = y = z = 0.0f;
    }
};

class Infantry
{
public:
    
    float health;
    //For some reason it's not reading the structure. It doesn't see it for some reason.
    Pos position;

    //Constructor definition
    Infantry()
    {
        health = 100.0f;
    };

    Infantry(Pos somePos)
    {
        position = somePos;
        health = 100.0f; //do I need to do this thrice? Like in each one? Doesn't the first constructor do it for me? 
                        //Or does it skip it????
    };

    Infantry(Pos somePos, float startingHealth)
    {
        health = startingHealth;
        position = somePos;
    };
    ~Infantry()
    {
        // delete something new.
    };

    //normal damage
    void takeStandardDamage()
    {
        //float health take 30.0 damage
        health -= 30.0f;
        std::cout << "Standard damage taken. Health is now: " << health << std::endl;
    };

    void takeSpecialDamage()
    {
        float damage;
        health -= damage;
    }

    void takeKnockbackDamage()
    {
        //Set the default damage the unit takes. Hard coded.
        //float damage = 30.0f;
        Pos pushVector;
        pushVector.x = 15.0f;
//Subtract the values from the health.
        health -= 30.0f;
        position.x -= 15.0f;
        //position.x = position.x - pushVector.x;
        //position.y = position.y - pushVector.y;
        //position.z = position.z - pushVector.z;
    };

    void printCords()
    {
        std::cout << health  << "Health" << "/n";
        std::cout << position.x << "/n" << position.y << "/n" << position.z << std::endl;
    };
};