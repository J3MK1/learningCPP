#include <iostream>
using std::cout;
using std::cin;

//Count digits of a number

int main()
{
	int number;
	cout << "Number: ";
	cin >> number;
	// if you've entered a number that contains more than 10 digits
	// the program will ignore that and keeps 10 digits and 
	// the data will be replaced by 2147483647 number
	// because that is the limit of data that a integer number can hold.

	if (number == 0)
		cout << "You have entered 0. \n";
	else {
		if (number < 0) 
			//This part is to transform a negative number into a positive number.
			number = -1 * number; // -1 * - 20 = 20

		int i = 0;
		while (number > 0) {

			//number = number/10
			number /= 10;
			i++;
			// each time this loop run, it will take off one number's unit, 
			// because it is being divided by 10 and it is a integer number
			// and increasing the counter (i) by 1.
			// 123 (i = 0) > 12 (12.3) (i = 1) > 1 (1.23) (i = 2) > 0 (0.123) (i = 3) > end loop 

		}
		cout << "Number contains " << i << " digits. \n";

	}

	system("pause>0");
}

