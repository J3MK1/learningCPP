//----------------------------------------
//                REVIEW
//----------------------------------------

//Programming a calculator
//Using Switch case statement

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float num1, num2;
	char operation;

	cout << "~ J3MK1 Calculator ~"<< endl;
	cin >> num1 >> operation >> num2;

	switch (operation) 
	{
	case '+': cout << num1 << operation << num2 << " = " << num1 + num2; break;
	case '-': cout << num1 << operation << num2 << " = " << num1 - num2; break;
	case '*': cout << num1 << operation << num2 << " = " << num1 * num2; break;
	case '/': cout << num1 << operation << num2 << " = " << num1 / num2; break;
	case '%':
		bool isNum1Int, isNum2Int;
		isNum1Int = (int)num1 == num1;
		isNum2Int = (int)num2 == num2;

		if (isNum1Int && isNum2Int)
			cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2;
		else
			cout << "Your operation is not valid! Use a integer number."; break;

	default: 
		cout << "ERROR! I cannot understand this operation.";

	}
	system("pause>0");

}

