class Infantry
{
public:
    float health{ 100.0f };
    Pos position;

    //Constructor default
    Infantry()
    {

    };

    Infantry(Pos somePos)
    {
        position = somePos;
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
    };

    void takeSpecialDamage(float damage)
    {
        health -= damage;
    }

    void takeDamage(float damage, Pos pushVector)
    {
        health -= damage;
        position.x = position.x - pushVector.x;
        position.y = position.y - pushVector.y;
        position.z = position.z - pushVector.z;
    };

    void printCords()
    {
        std::cout << position.x << "/n" << position.y << "/n" << position.z << endl;
    };
};