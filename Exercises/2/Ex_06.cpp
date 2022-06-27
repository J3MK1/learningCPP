#include <iostream>
using std::cout;
using std::cin;

//Program that get a person's weight in kilograms, calculates and displays that weight in grams.

int main()
{
	float weightKG, weightGrams;
	cout << "Enter your weight in kilograms: ";
	cin >> weightKG;
	
	weightGrams = weightKG * 1000;
	
	cout << "Your weight in grams is " << weightGrams;
	
	system("pause>0");
}
