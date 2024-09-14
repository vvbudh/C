/*    Function  overloading
    Header + cpp
fire damage vs  bullet damage
Psyonic Commando

    Two classes

    Point 3d - x,y,z.
float points
    Class of Point

Two constructors - one default constructor and one with arguments to init them
Make 2 classes of X,Y,Z points on a grid with two constructors 
one default constructor and one with arguments.
And one Overloaded method, fire and bullet damage. 
And one method - to print point coordinates

(If function is apart of class it's called method.)
if feeling lucky allocate memory for the array?...
int* p= new int;
Practice allocate memory for one variable.
int* p = new int[10];
delete p;
delete[] p;*/

/*void sum(int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
}

void sum(float a, float b)
{
    float c = a * b;
    std::cout << c << std::endl;
}

int main()
{
    int a{ 5 }, b{ 10 };
    float af{ 10 }, bf{ 10 };
    sum(a, b);
    sum(af, bf);
}

class B
{
public:
    float* c;
    B()
    {
        c = new float;
        c = 5.0f;
        std::cout <<c << std::endl;
    }
    ~B()
    {
        delete c;
    }
};*/









//okay where it all begins. Make 2 classes, and overload them.
#include <iostream>
using namespace std;

int main()
{
    
    return 0;
};

class Infantry
{
    public:
    float health;
    float x;
    float y;
    float z;
    //Constructor default
    Infantry()
    {
        health = 100.0f;
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    };
    ~Infantry()
    {
        // delete something new.
    };
    //normal damage
    void takeDamage(float& h)
    {
        //float health take 30.0 damage
        h = h - 30.0;
    };

    void takeDamage(float& h, float& pos)
    {
        h = h - 15.0;
        pos = pos - 10.5;
        //float health take 15.0 damage, knockback position -10.5x.
    };

    void printCords(float a, float b, float height)
    {
        std::cout << a << "/n" << b << "/n" << height << endl;
    };
};