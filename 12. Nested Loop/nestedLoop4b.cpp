#include <iostream>
#include <iomanip>
using std::setw;
using std::cout;
using std::cin;
using std::endl;

//Reversed Triangle

//First time
/*
int main(){
    int lenght;
    cout << "Lenght: ";
    cin >> lenght; //4

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int i = 1; i <= lenght; i++){ // i 1 2 3 4
        for (int j = lenght; j >= i; j--){ //j 4 3 2 1
            cout << setw(2) << symbol;
        }
        cout << endl;
    }

}
*/

//Tutorial

int main(){
    int lenght;
    cout << "Lenght: ";
    cin >> lenght;

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int i = lenght; i >= 1; i--){ // i 4 3 2 1
        for(int j = 1; j <= i; j++){ // j 1 2 3 4
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
}

//Console 
// * * * *
// * * *
// * *
// *

