#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

//Program that allows the user to enter 10 items they dream of having and these items are displayed at the end.

int main()
{
	//Wishlist
	string item1, item2, item3, item4, item5, item6, item7, item8, item9, item10;
	
	cout << "Enter 10 items to your Wishlist: ";
	cin >> item1 >> item2 >> item3 >> item4 >> item5 >> item6 >> item7 >> item8 >> item9 >> item10;
	
	cout << "~ My Wishlist ~" << endl;
	cout << 
	"1. " << item1 << endl <<
	"2. " << item2 << endl <<
	"3. " << item3 << endl <<
	"4. " << item4 << endl <<
	"5. " << item5 << endl <<
	"6. " << item6 << endl <<
	"7. " << item7 << endl <<
	"8. " << item8 << endl <<
	"9. " << item9 << endl <<
	"10. " << item10;
	
	system("pause>0");
	
}

