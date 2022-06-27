#include <iostream>
using std::cout;

// Write out all the numbers between 100 - 500 that are
// divisible by 3 or 5

int main() 
{
	int counter = 100;

	while (counter <= 500) // the program will execute this condition while this condition is true.
	{

		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << " is divisible \n";

		counter++; 
		//if I do not write counter++, it will create a infinite loop until the computer's memory is full
		//because the value will always be the same, 100, and it is true to our program.

		//another mention is that this counter++ must be in the end of the while loop,
		//because if it is at the beginning, it will start in 101 not 100. 
		
	}

	system("pause>0");

}
