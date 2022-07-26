#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int grade, sum = 0;

    //Question to add For loop: How many times I want this block of code repeat? X times.
    for(int i=0; i <3; i++){ // this loop will repeat 3 times. ( i = 0,1,2 )
        //Question to add DoWhile: Do I want my block of code run one time after the check? Yes. 
        do{
            cout << "Enter grade " << i + 1 << ":"; // +1 because i = 0, and "Enter grade 0" is kinda nonsense.
            cin >> grade;
        } while ( grade < 1 || grade > 5); // 1 > grade > 5 (except 1 2 3 4 5)
        // if I enter numbers above 5 and below 1 it will repeat this loop, 
        // until I turn the condition true by putting a number between 1 and 5.
        // after this loop we proceed to the "for" loop and going to the next loop.

        sum += grade;
    }

    cout << "Sum: " << sum << endl;
    cout << "Average grade: " << (float)sum / 3 << endl; //(float)sum converts integer "sum" to float "sum". 

}
