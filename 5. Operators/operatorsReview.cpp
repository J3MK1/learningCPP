#include <iostream>
using namespace std;

int main()
{
	//+,-,*,/,% (arithmetic binary operators)
	cout << 5 + 3 << endl;
	cout << 10 / 3 << endl; //3
	cout << 10 / 3.0 << endl; //3.33
	cout << 10 % 3 << endl; //1

	//++,-- (unnary operators)
	int count = 1;
	count++;
	cout << count << endl; //2
	count--;
	cout << count << endl; //1
	cout << ++count << endl; //2
	cout << count-- << endl; //2
	cout << count << endl;//1

	system("cls");

	// <,>,>=,<=,==,!= (relational operators)

	int x = 1, y = 4;
	cout << (x > y) << endl; //0
	cout << (x >= y) << endl; //0

	system("cls");

	// =, +=, -=, /=, *=, %= (assignment operators)

	int a = 6;
	a += 3;
	//a = a + 3
	cout << a << endl; //9
	a *= 2;
	// a = a * 2
	cout << a << endl; //18
	
	system("cls");

	// &&, ||, ! (logical operators)

	cout << (x == 1  && y == 5) << endl; //0
	cout << (x == 3 || y == 4) << endl; //1
	cout << !(x == 3 || y == 4) << endl; //0
	
	system("pause>0"); 
}
