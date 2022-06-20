#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Calculator Application
//Using Switch case statement

int main()
{
	float num1, num2;
	char operation;
	cout << "~ J3MK1 Calculator ~" << endl;
	cin >> num1 >> operation >> num2;
	//Switch case is used when you have multiple conditions (values) to one variable.

	switch (operation) {
	case'+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
		//if I do not write break; the program will run until the next break.
	case'-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
	case'*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
	case'/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
	case'%':
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1); //4 = 4.0 if so, isNum1Int is "true".
		isNum2Int = ((int)num2 == num2);
		if (isNum1Int && isNum2Int) 
		// I do not need to write "isNum1Int == true" because it is redundant.
			cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
		else
			cout << "Invalid Operation, this operation is valid only using integer numbers."; 
		break;
		// if/else I just put the "break" in the end of statement.
	default: 
		//If user enter another case that is not listed, this is the default option.
		cout << "Invalid operation! Use +, -, *, / or % operator." << endl;
	}

	system("pause>0");
}

