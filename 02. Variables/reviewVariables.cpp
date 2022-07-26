//---------------------------------------------
//                 REVIEW
//---------------------------------------------

//---------------------------------------------
//                 VARIABLES
//---------------------------------------------
/*#include <iostream>
using namespace std;

int main() {

	//Types of Variables
	int yearOfBirth;
	char gender;
	bool olderThan18 = true; // it does not allow user console input.
	float averageGrade;
	double balance;

	cout << "Which is your year of birthday?" << endl;
	cin >> yearOfBirth;
	cout << "What is your gender? (F/M)" << endl;
	cin >> gender;
	cout << "What is your average grade?" << endl;
	cin >> averageGrade;
	cout << "What is your balance?" << endl;
	cin >> balance;
	cout << "Good! I have all informations I need. Thank you.";


	system("pause>0");

}
*/

//---------------------------------------------
//             SIZE OF / MAX / MIN
//---------------------------------------------

#include <iostream>
using namespace std;

int main() {

	cout << "Size of int is " << sizeof(int) << " bytes.\n";
	cout << "Number max of a int variable is " << INT_MAX << endl;
	cout << "Number min of a int variable is " << INT_MIN << endl;
	cout << "Size of char is " << sizeof(char) << " bytes. \n";
	cout << "Size of bool is " << sizeof(bool) << " bytes. \n";
	cout << "Size of float is " << sizeof(float) << " bytes. \n";
	cout << "Size of double is " << sizeof(double) << " bytes. \n";
	cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes. \n";
	cout << "Number max of a unsigned int is " << UINT_MAX << endl;
	//There is other types of int variables:
	//long int, short int, signed short int, unsigned short int, signed long int, unsigned long int
	//There is other types of char variables:
	// unsigned char, signed char

	system("pause>0");

}
