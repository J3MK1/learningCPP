#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//-----------------------------------
//             REVIEW
//-----------------------------------

//Reverse Number

int main()
{

	int number, reversedNumber = 0;
	cout << "Enter a number: ";
	cin >> number; //123

	while (number != 0) {
		reversedNumber *= 10;
		reversedNumber += number % 10;

		number /= 10;
	}

	cout << "Reversed Number: " << reversedNumber << endl;
	system("pause");
}
