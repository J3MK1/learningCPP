#include <iostream>
using std::cout;
using std::cin;

//Program that allows the user to enter the values of 5 items in his virtual shopping cart,
//calculate and display the total.

int main()
{
	float productPrice1, productPrice2, productPrice3, productPrice4, productPrice5, totalPrice;
	cout << "Virtual Shopping Cart!";
	cout << "Enter the price of 5 products: ";
	cin >> productPrice1 >> productPrice2 >> productPrice3 >> productPrice4 >> productPrice5;
	
	totalPrice = productPrice1 + productPrice2 + productPrice3 + productPrice4 + productPrice5;
	
	cout << totalPrice;
	
	system("pause>0");
}
