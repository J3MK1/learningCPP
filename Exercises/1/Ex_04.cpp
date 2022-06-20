#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

//Program that User enter his name and the program show a welcome with a value that User has entered.


int main()
{
	string userName;

	cout << "Enter your name: ";
	cin >> userName;

	cout << "Welcome, " << userName << "!" << endl;

	system("pause>0");

}
