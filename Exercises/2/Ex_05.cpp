#include <iostream>
using std::cout;
using std::cin;

//Program that get the price of a product, calculates and displays the new price of the product after receiving 30% off

int main()
{
	
	float productPrice, product30Off;
	cout << "Product price: ";
	cin >> productPrice;
	
	product30Off = productPrice - (productPrice * 0.3);
	cout << product30Off;
	
	system("pause>0");
}
