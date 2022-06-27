#include <iostream>
using std::cout;
using std::cin;

//Program that get two numbers entered by the user, calculates and displays the division of the first number by the second.

int main()
{
	float num1, num2;
	
	cout << "Enter 2 numbers: ";
	cin >> num1 >> num2;
	
	if (num2 == 0){
		cout << "Zero is not a valid number to this operation. Please, try again.";
		cin >> num2;
	}
	else
	{
		cout << num1 << " / " << num2 << " = " << num1 / num2;
	}
	
	system("pause>0");
}

