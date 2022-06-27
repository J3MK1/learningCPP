#include <iostream>
using std::cout;
using std::cin;

//-----------------------------
//          REVIEW
//-----------------------------

//Pin Validation

int main()
{
    int userPin = 1234, pin, failAttempt = 0, tryAgain = 3;

    do{
        cout << "PIN:";
        cin >> pin;
        if (pin != userPin){
            failAttempt++;
            if(failAttempt <3)
                cout << "You have " << --tryAgain << " more attempts remaning.\n";
        }
    }while(pin != userPin && failAttempt<3);

    if(failAttempt <3)
        cout << "Loading...";
    else
        cout << "Account blocked!";
    system("pause>0");
}
