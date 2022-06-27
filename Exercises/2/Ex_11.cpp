#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Program in which the user can enter the minimum wage and the value of the employee's salary, 
//calculate and display the amount of minimum wages that this employee earns.

int main()
{
	float wageMinimum, employeeSalary, amountOfWages;
	cout << "Enter the minimum wage: ";
	cin >> wageMinimum;
	cout << "Enter the employee's salary: ";
	cin >> employeeSalary;
	
	amountOfWages = employeeSalary / wageMinimum;
	
	cout << "The employee earns " << amountOfWages << " of minimum wages.";
	
	system("pause>0");
}
