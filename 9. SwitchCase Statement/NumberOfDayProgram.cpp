#include <iostream>
using std::cout;
using std::cin;

//Program that shows to user the days that 'x' month has in 'y' year.

int main()
{
	int month, year;
	cout << "Enter a month (use number): ";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;

	switch(month)
	{

	case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
		cout << "This month has 29 days." : cout << "This month has 28 days."; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << "This month has 30 days. "; break; 
	//You do not need to add this cout line in the cases 4,6 and 9 because 
	//the program will run until the next break. It means it will show the last cout.
	case 1:
	case 3:
	case 7:
	case 8:
	case 10:
	case 12: cout << "This month has 31 days."; break;
	default: 
		cout << "You gotta be kidding me! It is not a valid Earth month!";
	
	}

	system("pause>0");

}
