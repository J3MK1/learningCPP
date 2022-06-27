#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Program that is able to calculate and display the area of a rhombus.
//A = (major diagonal * minor diagonal) /2

int main()
{
	
	float diagMajor, diagMinor, area;
	cout << "~ Rhombus Area Calculator ~ " << endl;
	
	cout << "Enter major diagonal: ";
	cin >> diagMajor;
	cout << "Enter minor diagonal: ";
	cin >> diagMinor;
	
	area = (diagMajor * diagMinor)/2;
	
	cout << area;
	
	system("pause>0");
}
