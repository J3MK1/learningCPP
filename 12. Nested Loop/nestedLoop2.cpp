#include <iostream>
using std::cout;
using std::endl;

//Multiplication Table

int main(){

    for(int j = 1; j <=10; j++){

        for(int i = 1; i <= 10; i++){
            cout << j << "x" <<i << "=" << j*i << endl;
            if (i == 10)
                cout << endl;
        }
    }
    system("pause>0");
}
