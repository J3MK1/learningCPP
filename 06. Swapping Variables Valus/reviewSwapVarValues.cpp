//-----------------------------------------
//                 REVIEW
//-----------------------------------------

//Program to swap 2 values between variables.

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int a = 37;
	int b = 90;

	// First way - Using Math.

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "a = " << a << endl;
	cout << "b = " << b;

	system("cls");

	// Second way - Using a 3rd variable.

	int x = 37;
	int y = 90;

	int temp = x;
	x = y;
	y = temp;

	cout << "x = " << x << endl;
	cout << "y = " << y;


	system("pause>0");
}
