#include <iostream>
using namespace std;

//User enters side lengths of a triangle (a,b,c)
//Program should write out whether that triangle is equilateral, isosceles or scalene.

int main()
{
	float a, b, c;
	cout << "Enter the 3 sides of your triangle: ";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "Equilateral Triangle";
	else
		if (a != b && b != c && c != a)
			cout << "Scalene Triangle";
		else
			cout << "Isosceles Triangle ";
	// I've ommited all {} in this if else statement so now it is easier to read.

	system("pause>0");

}
