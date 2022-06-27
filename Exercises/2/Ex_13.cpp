#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;


// Program in which the user can type the name of 5 people, and then can enter the day, weight and year of birth of the 5 people, 
// at the end of the process, display the name, day, weight and age of the 5 people on the screen.

int main()
{
	string personName1, personName2, personName3, personName4, personName5;
	
	float personWeight1, personWeight2, personWeight3, personWeight4, personWeight5;
	
	int personBirthDay1, personBirthDay2, personBirthDay3, personBirthDay4, personBirthDay5,
		personBirthYear1, personBirthYear2, personBirthYear3, personBirthYear4, personBirthYear5,
		currentYear;
	
	cout << "Enter the NAME of the 5 people (if a person has more than one name, just write the first one): ";
	cin >> personName1 >> personName2 >> personName3 >> personName4 >> personName5;
	
	cout << "Enter the DAY of birth of the 5 people that you've registered: ";
	cin >> personBirthDay1 >> personBirthDay2 >> personBirthDay3 >> personBirthDay4 >> personBirthDay5;
	
	cout << "Enter the current WEIGHT of the 5 people that you've registered: ";
	cin >> personWeight1 >> personWeight2 >> personWeight3 >> personWeight4 >> personWeight5;
	
	cout << "Enter the YEAR of birth of the 5 people that you've registered: ";
	cin >> personBirthYear1 >> personBirthYear2 >> personBirthYear3 >> personBirthYear4 >> personBirthYear5;
	
	cout << "Enter the current year: ";
	cin >> currentYear;
	
	cout << "LIST" << endl;
	
	cout << "1. " << personName1 << endl;  
	cout << "Birthday: " << personBirthDay1 << endl;
	cout << "Weight: " << personWeight1 << endl;
	cout << "Age: " << currentYear - personBirthYear1 << endl;
	
	cout << "2. " << personName2 << endl;  
	cout << "Birthday: " << personBirthDay2 << endl;
	cout << "Weight: " << personWeight2 << endl;
	cout << "Age: " << currentYear - personBirthYear2 << endl;
	
	cout << "3. " << personName3 << endl; 
	cout << "Birthday: " << personBirthDay3 << endl;
	cout << "Weight: " << personWeight3 << endl;
	cout << "Age: " << currentYear - personBirthYear3 << endl;
	
	cout << "4. " << personName4 << endl; 
	cout << "Birthday: " << personBirthDay4 << endl;
	cout << "Weight: " << personWeight4 << endl;
	cout << "Age: " << currentYear - personBirthYear4 << endl;
	
	cout << "5. " << personName5 << endl; 
	cout << "Birthday: " << personBirthDay5 << endl;
	cout << "Weight: " << personWeight5 << endl;
	cout << "Age: " << currentYear - personBirthYear5 << endl;
	

	system("pause>0");
}
