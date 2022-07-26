#include <iostream>
using namespace std;
//--------------------------------------------------
//               WEEK REVIEW LEARNING
//--------------------------------------------------

//Program Triangle Isosceles, Scalene and Equilateral
/*
int main() 
{
	float a, b, c;
	cout << "Enter 3 sides of your triangle: ";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "Equilateral Triangle";
	else
		if (a != b && b != c && c != a)
			cout << "Scalene Triangle";
		else
			cout << "Isosceles Triangle";

	system("pause>0");
}
*/

// Program ASCII Table

/*
int main()
{

	char c1, c2, c3, c4, c5;
	cout << "Enter 5 characteres: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "ASCII Message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) <<
	" " << int(c5) << endl;
	system("pause>0");

}
*/

// Types of Variables & sizeof

int main()
{

	int yearOfBirth = 1999;
	float averageGrade = 4.5;
	double balance = 56454546;
	char gender = 'f';
	bool moreThan18 = true;

	cout << "Size of int is " << sizeof(int) << " bytes.\n";
	cout << "Number max of int is " << INT_MAX << endl;
	cout << "Number min of int is " << INT_MIN << endl;
	cout << "Size of float is " << sizeof(float) << " bytes. \n";
	cout << "Size of double is " << sizeof(double) << " bytes. \n";
	cout << "Size of char is " << sizeof(char) << " bytes. \n";
	cout << "Size of bool is " << sizeof(bool) << " bytes. \n";
	
	cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes. \n";
	cout << "Number max of unsigned int is " << UINT_MAX << endl;
	cout << "Size of long int is " << sizeof(long int) << " bytes. \n";
	cout << "Size of short int is " << sizeof(short int) << " bytes. \n";
	cout << "Size of unsigned char is " << sizeof(unsigned char) << " bytes. \n;";

	system("pause>0");

}
