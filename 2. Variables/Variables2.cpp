//--------------------------------------------------
//                    REVIEW
//--------------------------------------------------
/*
#include<iostream>
using namespace std;

int main()
{
	float annualSallary;
	cout << "Enter your annual sallary here:" << endl;
	cin >> annualSallary;
	float monthlySallary = annualSallary / 12;
	cout << "Your monthly sallary is " << monthlySallary << "." << endl;
	cout << "In 10 years you will earn " << annualSallary * 10 << "." << endl;

	system("pause>0");

	char character = 'a';

}

Obs: remember the order that machine will translate your code. 
*/

//--------------------------------------------------
//                     NEW
//--------------------------------------------------

#include<iostream>
using namespace std;

int main()
{
	int yearOfBirth = 1995; //whole numbers, integer variable
	char gender = 'm'; //it only can store 1 character.
	bool isOlderThan18 = true; //it only can store true/false value.
	float averageGrade = 4.5; //it stores pointing numbers.
	double balance = 5665612155; //it stores double size of float variable.

	cout << "Size of int is " << sizeof(int) << " bytes\n"; 
	//it can store positive or negative or zero numbers
	//it is not related to int variable assigned.
	// Others int var type: unsigned int, signed int, short int, unsigned short int,
	// signed short int, long int, signed long int, unsigned long int.

	cout << "Int min value is " << INT_MIN << endl;
	// This is the min value you can declare to your variable
	// -1,-2,-3,.....,-2147483648

	cout << "Int max value is " << INT_MAX << endl;
	// This is the max value you can declare to your variable
	// 0, 1, 2, 3,.....2147483647
	//Note: if you exceed these values, the program will get a close number
	//it can turn a negative number, it is like a clock.

	cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes\n";
	// It will be 4, this is the int value.

	cout << "UInt max value is " << UINT_MAX << endl;
	// Double of the Int size.
	// 0 to 4294967295.

	cout << "Size of bool is " << sizeof(bool) << " bytes\n";
	// Result: 1

	cout << "Size of char is " << sizeof(char) << " bytes\n";
	// Result: 1
	// -127 to 127 or 0 to 255
	// Other char types: unsigned char, signed char

	cout << "Size of float is " << sizeof(float) << " bytes\n";
	// Result: 4 

	cout << "Size of double is " << sizeof(double) << " bytes\n";
	// Result: 8 


	system("pause>0");

}
