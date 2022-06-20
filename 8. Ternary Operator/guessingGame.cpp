#include <iostream>
using std::cout;
using std::cin;

// Program that hide the Host number so the Guest guess what number Host has entered.

// Using ternary operator.

int main()
{
	int hostUserNum, guestUserNum;
	
	cout << "Enter a number (host): ";
	cin >> hostUserNum;
	system("cls");

	cout << "Guess what number host has entered: ";
	cin >> guestUserNum;

	(hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed!"; //ternary operator
	//It is a shorter version of if else statement.

	/*
	if (hostUserNum == guestUserNum)
		cout << "Correct!";
	else
		cout << "Failed!";
	*/

	system("pause>0");
}
