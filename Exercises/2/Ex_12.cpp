#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Program in which the user can enter a number and the table of the number entered is shown on the screen.
/*
int main()
{
	int number;
	
	cout << "Enter a number that you want to see the table: ";
	cin >> number;
	
	switch(number){
		case 1: cout << "1x0 = 0" << endl 
		<< "1x1 = 1" << endl 
		<< "1x2 = 2" << endl 
		<< "1x3 = 3" << endl 
		<< "1x4 = 4" << endl 
		<< "1x5 = 5" << endl 
		<< "1x6 = 6" << endl 
		<< "1x7 = 7" << endl 
		<< "1x8 = 8" << endl 
		<< "1x9 = 9" << endl 
		<< "1x10 = 10"; break;
		case 2:cout << "2x0 = 0" << endl 
		<< "2x1 = 2" << endl 
		<< "2x2 = 4" << endl 
		<< "2x3 = 6" << endl 
		<< "2x4 = 8" << endl 
		<< "2x5 = 10" << endl 
		<< "2x6 = 12" << endl 
		<< "2x7 = 14" << endl 
		<< "2x8 = 16" << endl 
		<< "2x9 = 18" << endl 
		<< "2x10 = 20"; break;
		case 3:cout << "3x0 = 0" << endl 
		<< "3x1 = 3" << endl 
		<< "3x2 = 6" << endl 
		<< "3x3 = 9" << endl 
		<< "3x4 = 12" << endl 
		<< "3x5 = 15" << endl 
		<< "3x6 = 18" << endl 
		<< "3x7 = 21" << endl 
		<< "3x8 = 24" << endl 
		<< "3x9 = 27" << endl 
		<< "3x10 = 30"; break;
		case 4:cout << "4x0 = 0" << endl 
		<< "4x1 = 4" << endl 
		<< "4x2 = 8" << endl 
		<< "4x3 = 12" << endl 
		<< "4x4 = 16" << endl 
		<< "4x5 = 20" << endl 
		<< "4x6 = 24" << endl 
		<< "4x7 = 28" << endl 
		<< "4x8 = 32" << endl 
		<< "4x9 = 36" << endl 
		<< "4x10 = 40"; break;
		case 5:cout << "5x0 = 0" << endl 
		<< "5x1 = 5" << endl 
		<< "5x2 = 10" << endl 
		<< "5x3 = 15" << endl 
		<< "5x4 = 20" << endl 
		<< "5x5 = 25" << endl 
		<< "5x6 = 30" << endl 
		<< "5x7 = 35" << endl 
		<< "5x8 = 40" << endl 
		<< "5x9 = 45" << endl 
		<< "5x10 = 50"; break;
		case 6:cout << "6x0 = 0" << endl 
		<< "6x1 = 6" << endl 
		<< "6x2 = 12" << endl 
		<< "6x3 = 18" << endl 
		<< "6x4 = 24" << endl 
		<< "6x5 = 30" << endl 
		<< "6x6 = 36" << endl 
		<< "6x7 = 42" << endl 
		<< "6x8 = 48" << endl 
		<< "6x9 = 54" << endl 
		<< "6x10 = 60"; break;
		case 7:cout << "7x0 = 0" << endl 
		<< "7x1 = 7" << endl 
		<< "7x2 = 14" << endl 
		<< "7x3 = 21" << endl 
		<< "7x4 = 28" << endl 
		<< "7x5 = 35" << endl 
		<< "7x6 = 42" << endl 
		<< "7x7 = 49" << endl 
		<< "7x8 = 56" << endl 
		<< "7x9 = 63" << endl 
		<< "7x10 = 70"; break;
		case 8:cout << "8x0 = 0" << endl 
		<< "8x1 = 8" << endl 
		<< "8x2 = 16" << endl 
		<< "8x3 = 24" << endl 
		<< "8x4 = 32" << endl 
		<< "8x5 = 40" << endl 
		<< "8x6 = 48" << endl 
		<< "8x7 = 56" << endl 
		<< "8x8 = 64" << endl 
		<< "8x9 = 72" << endl 
		<< "8x10 = 80"; break;
		case 9:cout << "9x0 = 0" << endl 
		<< "9x1 = 9" << endl 
		<< "9x2 = 18" << endl 
		<< "9x3 = 27" << endl 
		<< "9x4 = 36" << endl 
		<< "9x5 = 45" << endl 
		<< "9x6 = 54" << endl 
		<< "9x7 = 63" << endl 
		<< "9x8 = 72" << endl 
		<< "9x9 = 81" << endl 
		<< "9x10 = 90"; break;
		case 10:cout << "10x0 = 0" << endl 
		<< "10x1 = 10" << endl 
		<< "10x2 = 20" << endl 
		<< "10x3 = 30" << endl 
		<< "10x4 = 40" << endl 
		<< "10x5 = 50" << endl 
		<< "10x6 = 60" << endl 
		<< "10x7 = 70" << endl 
		<< "10x8 = 80" << endl 
		<< "10x9 = 90" << endl 
		<< "10x10 = 100"; break;
		default: cout << "Not valid!";
	}
	system("pause>0");
}
*/

//Leveled Up!

int main(){
	int number;

	cout << "Number: ";
	cin >> number;

	for (int i = 0; i <= 10; i++){
		cout << number << "x" << i << " = " << number*i <<endl;
	}

}

