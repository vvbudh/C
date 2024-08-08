#include <iostream>
using namespace std;

struct triangle
{
	int sides[3];
	double area;
};

void getUserInputSides(int& a, int& b, int& c);
double calculateArea(int a, int b, int c, double& d);

int main()
{	
	/*zero out the sides and angles. Also instantiate the first
	 triangle. */
	//Double that holds it all.
	double sumOfTriangles = 0;
	
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
	//make the tmp vars that are passed to the function GetUserInput.
	//Do I have to do it this way? How do I get these ones passed back to
	//the main namespace? without creating 3 extras. That't what I have
	//the struct for ant triangle1.sides[0] for isn't it????????

	/*	int a = 0;
	int b = 0;
	int c = 0;
	int area = 0; */

	//Use the Get User Input sides function to get the length of the sides.
	getUserInputSides(triangle1.sides[0], triangle1.sides[1] , triangle1.sides[2]);
	
	//set the variable  to the value of the cin "a" variable. Below is just output to verify it works.
	//triangle1.sides[0] = a;
	//triangle1.sides[1] = b;
	//triangle1.sides[2] = c;
	/*for(int i=0;i<3;i++)
	{
		cout << triangle1.sides[i] << endl;
	}*/
	//Get user input on second triangle.
	getUserInputSides(triangle2.sides[0], triangle2.sides[1] , triangle2.sides[2]);

	/*for(int i=0;i<3;i++)
	{
		cout << triangle2.sides[i] << endl;
	}*/
	calculateArea(triangle1.sides[0], triangle1.sides[1] , triangle1.sides[2], triangle1.area);
	calculateArea(triangle2.sides[0], triangle2.sides[1] , triangle2.sides[2], triangle2.area);

	sumOfTriangles = triangle1.area + triangle2.area;
	cout << endl << sumOfTriangles << endl;
}


void getUserInputSides(int& a, int& b, int& c)
{	/* make the string to tell the user give inputs for the things
	put them in the array.*/
	string toUser = "Hey give me one number.";

	//instantiate the array to take in the value of sides.
	//int all3Sides[3];
	
	//tmp test int for all OK to compile.
	//int good = 0;

	//print to user the prompt.
			//Make error checking later.
	///Do I have to do this for every one? Like, for every for loop
	///do I have to make this damn thing like this, for each one? No right?
for (;;) 
{
	cout << toUser;
	//get their input.
	//cin >> all3Sides[0];
	if (cin >> a)
	{
		break;
	}
		else
		{
			cout << "Please enter just an integer, one whole number." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		}

}
	cout << toUser;
	cin >> b;
	cout << toUser;
	cin >> c;
	//make function that checks value of the input.
	//return all3Sides[0];
}



double calculateArea(int a, int b, int c, double& d)
{
	//Need to use Heron's formula apparently.
/*	int s = 0;
	int tmp = a + b + c;
	s = tmp / 2;

	double heron = 0.0;
	int i = 0;
	int k = 0;
	int m = 0;

	i = s - a;
	k = s - b;
	m = s - c;

	heron = i*k*m;
	heron = s * heron;
	heron = sqrt(heron);

cout << endl << heron << endl;
*/

	//divide by 2.0 so it works, and isn't division by integers. 
	//also uhh, a b c vals are 5,7,8 and should come out to 10Sum and 17.3Area
	double sum = 0.0;
	//Replace with d pass by reference var.
	//double area = 0.0;

	sum = (a + b + c)/2.0;
	//cout << sum << endl; // checking code, it sums the above at it should.
	d = sqrt((sum)*(sum-a)*(sum-b)*(sum-c));
	//area = sqrt((sum)*(sum-a)*(sum-b)*(sum-c));
	//cout << area << endl;
	//return area;
	return d;

};