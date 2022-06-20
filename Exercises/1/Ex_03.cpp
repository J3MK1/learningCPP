#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Program that User can enter his name, weight, height and age and show the result to the User.


int main()
{
	string userName;
	float userWeight, userHeight;
	int userAge;

	cout << "Enter your name: ";
	cin >> userName;
	cout << "Enter your weight (kg): ";
	cin >> userWeight;
	cout << "Enter your height (m): ";
	cin >> userHeight;
	cout << "Enter your age: ";
	cin >> userAge;

	cout << "Your name is: " << userName << endl;
	cout << "Your weight is: " << userWeight << endl;
	cout << "Your height is: " << userHeight << endl;
	cout << "Your age is: " << userAge << endl;


	system("pause");

}

