#include <iostream>
#include <iomanip> //This library contains the function setw() - set width
using std::cout;
using std::cin;
using std::endl;
using std::setw;

//Drawing rectangle shape

// As I did first time.

/*
int main(){
    int height, width;
    char symbol;

    cout << "Height: ";
    cin >> height; //3

    cout << "Width: ";
    cin >> width; //2

    cout << "Enter symbol: ";
    cin >> symbol;

    for(int j = 1; j <= height; j++){ // 1 <= 3 / 2 <= 3 / 3 <= 3 
        // This loop will run 3 times.

        for(int i = 1; i <= width; i++){ // 1 <= 2 / 2 <= 2 
            // This loop will run 2 times.
            cout << symbol << " ";
        }

        cout << endl;
    }

}
*/

// Following the tutorial

int main(){

    int height, width;
    char symbol;

    cout << "Height: ";
    cin >> height; //3

    cout << "Width: ";
    cin >> width; //2

    cout << "Enter symbol: ";
    cin >> symbol; // *

    for(int j = 0; j < height; j++){  // 0 < 3 / 1 < 3 / 2 < 3
        //This loop will run 3 times.
        //height just need to be a line break.
        for(int i = 0; i < width; i++){ // 0 < 2 / 1 < 2 
            // This loop will run 2 times and then will go back to the "for j".
            cout << setw(3) << symbol;
            // width of 3 fields. "   " << something like this.
        }
        cout << endl;
    }

}

    //"for j" will run 3 times and "for i" will run 6 times (total).
    /*

    Test:
       *   * (1st "for j" loop - "for i" loop 2 times - endl)
       *   * (2nd "for j" loop - "for i" loop 2 times - endl)
       *   * (3rd "for j" loop - "for i" loop 2 times - endl)
    
    */

