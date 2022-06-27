#include <iostream>
using std::cout;
using std::cin;

//PIN Program

int main()
{
	int usersPin = 1234, pin, errorCounter = 0, attemptCounter = 3;

	do {
		cout << "PIN: ";
		cin >> pin;
		if (pin != usersPin) {
			errorCounter++; //1 > 2 > 3
			if (errorCounter < 3)
				cout << "You have " << --attemptCounter << " attempts remaining. \n"; //2 > 1
		}
		} while (errorCounter < 3 && pin!= usersPin);

	//this if was created because one of the conditions was not fulfilled,
	//i.e. either the user exceeded the attempts or he got the PIN right.
	if (errorCounter < 3)
		cout << "Loading...";
	else
		cout << "Account blocked.";

	system("pause>0");
}


// the "do while" loop, runs the block of code first before checking, 
// that means the code block inside "do" will run at least 1 time.

// if I tried to do it using just the "while", I would have to repeat the PIN
// block of code 2 times, so I think the main reason I'd use "do while" is
// to avoid the repetition of the same block of code. 

// I decided to add the attempCounter on this program.

// USING WHILE

/*
int main()
{
	int usersPin = 1234, pin, errorCounter = 1, attemptCounter = 3; 
	//errorCounter is 1 because the user will has entered a wrong PIN in the first attempt.

	// 1st Attempt
	cout << "PIN: ";
	cin >> pin;

	while (errorCounter < 3 && pin != usersPin) {
		//this loop must run only 2 times because he has 3 attempts.
		cout << "You have " << --attemptCounter << " attempts remaining. \n";

		cout << "PIN: "; // 2nd Attempt > 3rd Attempt
		cin >> pin;
		errorCounter++; //2 > 3
	}

	//cout << "You have attempted " << errorCounter << " times \n";

	if (errorCounter < 3)
		cout << "Loading...";
	else
		cout << "Account blocked.";

	system("pause>0");

}
*/
