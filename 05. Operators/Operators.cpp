#include <iostream>
using namespace std;

int main()
{
	// +, -, *, /, % (binnary arithmetic operators - because there is 2 operators in each side).
	cout << 5 + 2 << endl; //7
	cout << 5 / 2 << endl; //2
	//It happens because it considers as integer number and the result will be a integer number.
	cout << 5.0 / 2 << endl; //2,5 , 5 / 2.0 or 5.0 / 2.0 works too.
	// Use decimal numbers so the program considers float or double numbers.
	cout << 5 % 2 << endl; //1
	// It gives the result of the remaining of those numbers.

	//++, -- (unnary operators)
	int counter = 7;
	counter++; //It adds +1
	cout << counter << endl; //8
	cout << ++counter << endl;  //9
	cout << counter++ << endl; //9, because the operator is after the variable not before.
	cout << counter << endl; //10
	
	int counter2 = 7;
	cout << --counter2 << endl; //6
	cout << counter2-- << endl; //6
	cout << counter2 << endl; //5

	system("cls"); //it cleans the console.

	// <, >, <=, >=, ==, != (relational operators)
	int a = 5, b = 5; 
	cout << (a < b) << endl; //0, it means false.
	cout << (a > b) << endl; //0 
	cout << (a <= b) << endl; //1, it means true. 
	cout << (a >= b) << endl; //1
	cout << (a == b) << endl; //1
	cout << (a != b) << endl; //0

	system("cls");

	// &&, || (alt 124), ! (logical operators)
	// and also, or, negation
	int x = 9, z = 5;

	cout << (x == 5 && z == 5) << endl; //0
	cout << !(x == 5 && z == 5) << endl; //1
	cout << (x == 5 || z == 5) << endl; //1
	cout << !(x == 5 || z == 5) << endl; //0

	cout << (x == 3 + 2 || z == 3 + 2) << endl; //1

	system("cls");

	// =, +=, -=, *=, /=, %= (assignment operators)
	int y = 5;
	y += 2;
	//y = y + 2
	cout << y << endl; //7
	y -= 3;
	//y = y - 3
	cout << y << endl; //4
	y *= 2;
	//y = y * 2
	cout << y << endl; //8
	//y /= 3;
	//y = y / 3
	//cout << y << endl; //2
	y /= 3.0;
	cout << y << endl; //2, because I defined it as integer variable


	system("pause>0");

}
