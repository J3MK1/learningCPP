#include <iostream>
using std::cout;
using std::cin;

int main(){
    // The factorial of a number
    //6! = 1*2*3*4*5*6 = 720

    int number, factorial = 1;
    cout << "Number: ";
    cin >> number;

    //1st Method
    if (number > 0){
        for (int i=1; i <= number; i++){
            // order program check: 
            // First Time: i = 1, i <= number
            // After: i++ , i <= number

            factorial *= i;
        }

        //2nd Method
        // 6! = 6*5*4*3*2*1 = 720
        //for (int i= number; i >=1 ; i--){
        //    factorial *= i;
        //}
    
        cout << number << "!=" << factorial;
    }else{
        cout << "Error! Invalid Number.";
    }

    system("pause>0");
}

// The difference between "while" and "for" is
// that in "for" loop, you do know 
// the number of iterations the loop is going to make,
// and "while" you do not know exactly how many times
// that loop will run.
