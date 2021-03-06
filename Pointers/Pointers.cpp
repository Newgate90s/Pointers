//Pointers
//CSC215'
//Samael Newgate

#include "stdafx.h"
#include <iostream>

using namespace std;

//Void specifies that the function does not return a value
//Function protyping 
void BadSwap(int x, int y);
void GoodSwap(int*const px, int*const py);

int main()
{
	//Starting Values 
	int MyCredits = 300;
	int HerCredits = 666;
	
	//Prints out the starting Values 
	cout << "----------------------" << endl;
	cout << "Original Values: \n\n";
	cout << "My Credits: " << MyCredits << "\n";
	cout << "Her Credits: " << HerCredits << "\n";
	cout << "----------------------" << endl;

	//Prints out the BadSwap Variable 
	cout << "\n----------------------" << endl;
	cout << "Bad Swap Values: \n\n";
	BadSwap(MyCredits, HerCredits);
	cout << "My Credits: " << MyCredits << "\n";
	cout << "Her Credits: " << HerCredits << "\n";
	cout << "----------------------" << endl;
	
	//Prints out GoodSwap Variable 
	cout << "\n----------------------" << endl;
	cout <<  "Good Swap Values: \n\n";
	GoodSwap(&MyCredits, &HerCredits);
	cout << "My Credits: " << MyCredits << "\n";
	cout << "Her Credits " << HerCredits << "\n";
	cout << "----------------------" << endl;

	//Stops the program from automatically closing
	system("pause");

	return 0;
}
/*This is where the points come into use with storing the 
information from the variable prototyping that we 
did at the start of the program*/
void BadSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void GoodSwap(int* const pX, int* const pY)
{
	int temp = *pX;
	*pX = *pY;
	*pY = temp;
}