#include <iostream>
using namespace std;

//Variables are like a glasses, you can put whatever liquid (data) you want
//and the size of the glasses determines the quantity of liquid you can put on it.

/*int main()
{
	float annualSalary = 50000.99; //floating point numbers
	float monthlySalary = annualSalary / 12;
	cout << "Your monthly salary is " << monthlySalary;

	system("pause>0");
}
*/

int main()
{
	float annualSalary; //null
	cout << "Please enter your annual salary (in USD):" << endl;
	cin >> annualSalary; //receive a value from user.
	float monthlySalary = annualSalary / 12;
	cout << "Your monthly salary is " << monthlySalary << " USD." << endl;
	cout << "In 10 years you will earn " << annualSalary * 10 << " USD.";

	char character = 'a'; //simple quote when char variable.

	system("pause>0");

}

//Rules:
//- Use CamelCase: first letter is small and second, third use capital. Ex: float firstSecondThird;
//- Naming your variables with the right purpose.
//- Your variable cannot begin with special characteres, except by underscore _
//- You can add numbers in any other position but not the first position of your variable.
//- You cannot space/blank space in variable name.
