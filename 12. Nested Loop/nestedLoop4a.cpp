#include <iostream>
#include <iomanip>
using std::setw;
using std::cout;
using std::cin;
using std::endl;

//Drawing a triangle shape

//First time
/*
int main(){
    int height;
    char symbol;

    cout << "Height: ";
    cin >> height; //4

    cout << "Symbol: ";
    cin >> symbol;

    for (int i = 0; i < height; i++){ // i 0,1,2,3
        // This loop will run 4 times
        for (int j = 0; j <= i ; j++){ // j 0,1,2,3
            // j <= i because if I did not add this "=" the first time will not be counted. ( 0 < 0) (false)
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
}
*/

// Tutorial

int main(){
    int lenght;
    cout << "Lenght: ";
    cin >> lenght;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int i=1; i <= lenght; i++){
        for (int j = 1; j <= i; j++){
            cout << setw(2) << symbol;
        }
        cout << endl;
    }

}

//Console
// *
// * *
// * * *
// * * * *
