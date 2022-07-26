#include <iostream>,
using std::cout;
using std::cin;

//--------------------------------------
//              REVIEW 
//--------------------------------------

// Program that guest user should guess a number that host user will provide.

// Using Ternary operator

int main()
{
	
	float hostUserNum, guestUserNum;

	cout << "Enter a number (host): ";
	cin >> hostUserNum;

	system("cls");

	cout << "Guess the host number: ";
	cin >> guestUserNum;

	(hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!";

	system("cls");

	system("pause>0");

}
