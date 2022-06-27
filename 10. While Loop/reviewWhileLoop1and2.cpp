#include <iostream>
using std::cout;
using std::cin;

//-----------------------------------
//             REVIEW
//-----------------------------------

int main()
{
	//Program that writes out the numbers divisible by 2 and 7 between 50 ~ 200.
	/*
	int i = 50;

	while (i <= 200)
	{
		if (i % 2 == 0 && i % 7 == 0)
			cout << i << " is divisible. \n";
		i++;
	}
	*/

	//Program that counts the number of digits of the number that User will insert.

	int number, i = 0;
;

	cout << "Number: ";
	cin >> number;

	if (number == 0)
		cout << "Number is 0.";
	else 
	{
		if (number < 0)
			number = -1 * number;

		while(number > 0)
		{
			number /= 10;
			i++;
		}
		cout << "The number contains " << i << " digits. \n";
	}
	system("pause>0");
}
