#include <iostream>
using std::cin;
using std::cout;

//Program that get three numbers, calculates and displays the multiplication of those numbers.
/*
{
	int num1, num2, num3;
	
	cout << "Enter 3 numbers: ";
	cin >> num1 >> num2 >> num3;
	
	cout << num1 << " x " << num2 << " x " << num3 << " = " << num1 * num2 * num3;
	
	system("pause>0");
}
*/

//Leveled Up!

int main(){

	int num, result = 1;

	for(int i = 0; i < 3; i++){
		cout << "Enter a number:";
		cin >> num;
		
		result *= num;
	}

	cout << "Result: " << result;
	system("pause>0");
}
