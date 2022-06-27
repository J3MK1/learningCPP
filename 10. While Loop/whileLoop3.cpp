#include <iostream>
using std::cout;
using std::cin;

//Reversing number

// Short Version
/*

int main()
{
	int number, reversedNumber = 0;
	cout << "Number: ";
	cin >> number; //123

	while (number != 0) 
	{
		reversedNumber *= 10; 

		reversedNumber += number % 10; 

		number /= 10; 
	}

	cout << "Reversed: " << reversedNumber; 

	system("pause>0");
}
*/

// All Steps version

int main()
{
	int number, reversedNumber = 0;
	cout << "Number: ";
	cin >> number; //123

	while (number != 0) //123 > 12 > 1 
	{
		
		reversedNumber = reversedNumber * 10;// 0 > 30 > 320
		int lastDigit = number % 10; // 3 > 2 > 1

		reversedNumber = reversedNumber + lastDigit;  // 3 > 32 > 321

		number = number / 10; //12 > 1 > 0
	}

	cout << "Reversed: " << reversedNumber; //321

	system("pause>0");
}

// The last number will be always goi

// 1 Loop 
/*
 reversedNumber = 0
 lastDigit = 3
 reversedNumber = 3
 number = 12

 */

 // 2 Loop 
 /*
  reversedNumber = 30
  lastDigit = 2
  reversedNumber = 32
  number = 1
  */

  // 3 Loop 
  /*
   reversedNumber = 320
   lastDigit = 1
   reversedNumber = 321
   number = 0
   */


// How I would build it.

/*
Taking into account the number 123.

1. To start we must create a variable that will be our number reversed,
as it will always be the fixed value of 0, we add this value to it.

2. You must add a loop and put the condition of not accepting a number that is 0,
because then I already include negative and positive numbers to this condition.
- while (number !=0)

3. To reverse the number, the last number must be the first to be counted,
for that to happen I use %10 (lastDigit), because then I will get the last number,
since the rest will always be the last integer. 
- lastDigit = number % 10

4. As I want the number (you've entered) to decrease I divide it by 10,
so I always get the next "last" number.
Going to 3, then 2, then 1. 
- number = number / 10

5. Then I have to multiply my reverse number by 10,
because if I just add the last digit and don't apply the *10,
what will happen is to add the numbers 3 + 2 + 1.
- reversedNumber = reversedNumber * 10

6. Now what I need to do is add the last number to my "reversedNumber" 
and this will build my reverse number.
- reversedNumber = reversedNumber + lastDigit


7. Now it would just be a matter of fixing the order,
as I want the "number" to reach zero, it will be considered a "counter",
so I want it to be the last thing in the loop.

		while(number != 0)
			{

				number = number / 10;

			}


The first thing I want my loop to do is change the places of my number so
that a unit does not add to another (3+2+1). 

		while(number != 0)
			{
				
				reversedNumber = reversedNumber * 10;

				number = number / 10;

			}

After that, I get the last digit of my number
(since the loop has run, this might be the first or second thing I want my code to get).

		while(number != 0)
			{
				reversedNumber = reversedNumber * 10;
				lastDigit = number % 10

				number = number / 10;

			}

			or 

					while(number != 0)
			{
				
				lastDigit = number % 10
				reversedNumber = reversedNumber * 10;

				number = number / 10;

			}

Now that I'm sure the last number will always advance one place, 
I have the last number stored, and I know that my loop has an end when the number reaches zero,
I can add the reversed number to my last number between my number "counter" 
and reversedNumber * 10. Until the end of the loop.

		while(number != 0)
			{
				reversedNumber = reversedNumber * 10;
				lastDigit = number % 10

				reversedNumber = reversedNumber + lastDigit;

				number = number / 10;
			}
*/
