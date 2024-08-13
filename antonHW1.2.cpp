#include <iostream>
using namespace std;
/*    You ask for input and fill two triangles - fill sides. 
        One function must be independent - and argument is triangle. 
           OK Declare function to fill sides INSIDE structure.
            Declare structure that contains two triangles as pointers to them
            Sum areas of this triangles.
           
		   How??? Inside the struct/?????? WTF are you talking about???
		    Inside triangle struct - function to calculate area of triangles.*/
struct triangle
{
	int sides[3];
	float area; 
};

void getUserInputSides(int& a, int& b, int& c);
float calculateArea(int a, int b, int c, float& d);

int main()
{	
	/*zero out the sides and angles. Also instantiate the first
	 triangle. */
	//Double that holds it all.
	float sumOfTriangles = 0;
	
	triangle triangle1;
	triangle1.sides[0] = 0;
	triangle1.sides[1] = 0;
	triangle1.sides[2] = 0;
	triangle1.area = 0.0;
	
	triangle triangle2;
	triangle2.sides[0] = 0;
	triangle2.sides[1] = 0;
	triangle2.sides[2] = 0;
	triangle2.area = 0.0;

    getUserInputSides(triangle1.sides[0], triangle1.sides[1] , triangle1.sides[2]);
    getUserInputSides(triangle2.sides[0], triangle2.sides[1] , triangle2.sides[2]);

    	calculateArea(triangle1.sides[0], triangle1.sides[1] , triangle1.sides[2], triangle1.area);
	calculateArea(triangle2.sides[0], triangle2.sides[1] , triangle2.sides[2], triangle2.area);

	sumOfTriangles = triangle1.area + triangle2.area;
	cout << endl << sumOfTriangles << endl;
}

void getUserInputSides(int& a, int& b, int& c)
{	/* make the string to tell the user give inputs for the things
	put them in the array.*/
	string toUser = "Hey give me one number.";

	cout << toUser;
	cin >> b;
	cout << toUser;
	cin >> c;
	//make function that checks value of the input.
	//return all3Sides[0];
}

float calculateArea(int a, int b, int c, float& d)
{
    //also uhh, a b c vals are 5,7,8 and should come out to 10Sum and 17.3Area
	float sum = 0.0;
	//Replace with d pass by reference var.
	//double area = 0.0;

	sum = (a + b + c)/2.0;
	//cout << sum << endl; // checking code, it sums the above at it should.
	d = sqrt((sum)*(sum-a)*(sum-b)*(sum-c));
	//area = sqrt((sum)*(sum-a)*(sum-b)*(sum-c));
	//cout << area << endl;
	//return area;
	return d;

}