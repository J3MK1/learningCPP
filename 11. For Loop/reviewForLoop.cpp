#include <iostream>
using std::cout;
using std::cin;

//------------------------------
//          REVIEW
//------------------------------

//Factorial Number
// 4! = 1*2*3*4 = 24

int main(){

    int number, factorial = 1;

    cout << "Number: ";
    cin >> number;
    if (number >0){
    for(int i = 1; i <= number; i++){
        factorial *= i;
    }
        cout << number << "!=" << factorial;
    }else
        cout << "Error! Invalid Number.";


    system("pause>0");
}

