#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Program that is able to calculate and display the area of a trapezoid.
//A = ((larger base + smaller base) * height) /2

int main()
{
	float baseSmall, baseLarge, height, area;
	
	cout << "~ Trapezoid Area Calculator ~" << endl;
	
	cout << "Enter smaller base: ";
	cin >> baseSmall;
	cout << "Enter larger base: ";
	cin >> baseLarge;
	cout << "Enter the height: ";
	cin >> height;
	
	area = ((baseLarge + baseSmall) * height) / 2;
	
	cout << "Trapezoid Area: " << area;
	
	system("pause>0");
}
