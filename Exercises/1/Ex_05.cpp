#include <iostream>;
using std::cout;
using std::cin;
using std::endl;

// Create a program where the user can type in a person's day, month and year of birth and this is all displayed 
//in a final message using "complex concatenation" technology.
//Ex: DD/MM/YY

int main()
{

	int birthDay, birthMonth, birthYear;

	cout << "Enter the day of birth: ";
	cin >> birthDay;

	cout << "Enter the month of birth: ";
	cin >> birthMonth;

	cout << "Enter the year of birth: ";
	cin >> birthYear;

	cout << "Birth date: " << birthDay << "/" << birthMonth << "/" << birthYear << endl;


	system("pause>0");
}
