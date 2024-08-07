#include <iostream>
using namespace std;

struct triangle
{
	int sides[3];
	int area;
};

int getUserInputSides(int& a, int& b, int& c);


int main()
{	
	/*zero out the sides and angles. Also instantiate the first
	 triangle. */
	triangle triangle1;
	triangle1.sides[0] = 0;
	triangle1.sides[1] = 0;
	triangle1.sides[2] = 0;
	triangle1.area = 0;

	//make the tmp vars that are passed to the function GetUserInput.
	//Do I have to do it this way? How do I get these ones passed back to
	//the main namespace? without creating 3 extras. That't what I have
	//the struct for ant triangle1.sides[0] for isn't it????????

	int a = 0;
	int b = 0;
	int c = 0;
	int area = 0;

	//Use the Get User Input sides function to get the length of the sides.
	getUserInputSides(a, b , c);
	
	//set the variable  to the value of the cin "a" variable.
	triangle1.sides[0] = a;
	triangle1.sides[1] = b;
	triangle1.sides[2] = c;
	for(int i=0;i<3;i++)
	{
		cout << triangle1.sides[i] << endl;
	}
	

}


int getUserInputSides(int& a, int& b, int& c)
{	/* make the string to tell the user give inputs for the things
	put them in the array.*/
	string toUser = "Hey give me one number.";

	//instantiate the array to take in the value of sides.
	//int all3Sides[3];
	
	//tmp test int for all OK to compile.
	//int good = 0;

	//print to user the prompt.
	cout << toUser;
	//get their input.
	//cin >> all3Sides[0];
	cin >> a;
	cout << toUser;
	cin >> b;
	cout << toUser;
	cin >> c;
	//make function that checks value of the input.
	//return all3Sides[0];
	return a;
}


