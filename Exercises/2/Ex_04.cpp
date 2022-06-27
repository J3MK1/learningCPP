#include <iostream>
using std::cin;
using std::cout;

//Program that get two grades, calculates and displays the weighted average of those grades, 
//in the context we are in, consider using weight 2 for the first grade and weight 3 for the second grade

int main()
{
	
	float grade1, grade2, averageGrade;
	
	cout << "Enter 2 grades: ";
	cin >> grade1 >> grade2;
	
	averageGrade = (grade1*2 + grade2*3) / (2 + 3);
	
	cout << "Average Grade: " << averageGrade;
	
	system("pause>0");
}
