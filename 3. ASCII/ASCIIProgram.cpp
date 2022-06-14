#include <iostream>
using namespace std;
/*
int main() 
{
	cout << int('a') << endl; 
	cout << (int)'a' << endl;
	cout << int('A') << endl;
	cout << char(65) << endl;
	//int(), char() are called casting operators, forces one data type to convert into another.

	system("pause>0");

}
*/

//This program serve to convert Letters into Numbers, using ASCII table.
//Note: It does not work with space or enter.

int main()
{

	char c1, c2, c3, c4, c5;
	cout << "Enter 5 letters to convert:";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	// It only works with 5 letters, if you enter more, it will just convert the first 5 letters.
	// And if you enter less, nothing will happen.
	cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3)
		<< " " << int(c4) << " " << int(c5) << endl;
	// int(c1) is saying to my machine: give me ASCII code of my c1 variable.

	system("pause>0");

}

