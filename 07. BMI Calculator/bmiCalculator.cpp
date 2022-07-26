#include <iostream>
using std::cout;
using std::cin;

void main() {

	//BMI calculator
	// weight(kg) / height * height(m)
	// Underweight < 18.5
	// Normal weight 18.5 - 24.9
	// Overweight > 25

	float weight, height, bmi;

	cout << "Enter your weight (kg): \n";
	cin >> weight;

	cout << "Enter your height(m): \n";
	cin >> height;

	// Another option
	// cout << "Weight (kg), height (m): ";
	// cin >> weight >> height;

	bmi = weight / (height * height);

	if (bmi < 18.5)
		cout << "Underweight\n";
	else if (bmi > 25)
		cout << "Overweight\n";
	else
		cout << "Normal Weight\n";


	cout << "Your BMI is " << bmi;

	system("pause>0");

}

