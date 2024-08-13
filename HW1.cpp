#include <iostream>
using namespace std;

/*    
        OK 1 You ask for input and fill two triangles - fill sides. 
        OK 3 One function must be independent - and argument is triangle. 
        OK 1 Declare function to fill sides INSIDE structure.
        OK 2 Declare structure that contains two triangles as pointers to them
            Sum areas of this triangles.
           
		   How??? Inside the struct/?????? WTF are you talking about??? Apparently you can????what is this?
		    Inside triangle struct - function to calculate area of triangles.*/

struct triangle
{
	int t1Sides[3];
	float t1Area; 
    int t2Sides[3];
    float t2Area;
    // This is 1 Declare function to fill sides INSIDE structure.
    void fillSides() 
    {
        string toUser = "Hey give me one number.";
        string toUser2 = "Second triangle, one number now.";
	cout << toUser;
	cin >>  t1Sides[0];
	cout << toUser;
	cin >> t1Sides[1];
    cout << toUser;
    cin >> t1Sides[2];

    cout << toUser2;
    cin >>  t2Sides[0];
	cout << toUser2;
	cin >> t2Sides[1];
    cout << toUser2;
    cin >> t2Sides[2];
    };

};
// This is 3 One function must be independent - and argument is triangle. 
void calculateArea (triangle*);

int main()
{   //Instantiate the t1 structure at some memory location somewhere over the rainbow.
    //triangle pointer named "t1Pointer" is set to the memory addr of t1. 
    // This is 2  Declare structure that contains two triangles as pointers to them
    triangle structure1;
    triangle* structure1Pointer = &structure1;
    
    structure1.fillSides();
    calculateArea(structure1Pointer);
    return 0;
}

//This is 3 One function must be independent - and argument is triangle. 
void calculateArea (triangle* tri)
{
    tri->t1Area = 0.0;
    int sum = 0;
    sum = (tri->t1Sides[0] + tri->t1Sides[1] + tri->t1Sides[2])/2.0;
    tri->t1Area = sqrt((sum)*(sum-tri->t1Sides[0])*(sum-tri->t1Sides[1])*(sum-tri->t1Sides[2]));
    cout << tri->t1Area;
};

/*void fillSides()
{

};

*/