#include <iostream>
using namespace std;

//Program for swapping values of two variables

int main()
{
	int a = 10;
	int b = 20;

	//There is 2 ways to do that.

	// First Way - using mathmatic

	a = a + b; //30
	b = a - b; //10
	a = a - b; //20
	
	cout << "a = " << a << endl;
	cout << "b = " << b;

	// Second way - creating a 3rd variable.

	a = 10;
	b = 20;

	int temp = a; //10
	a = b; // 20
	b = temp; // 10
	

	cout << "a = " << a << endl;
	cout << "b = " << b;

	system("pause>0");

}
