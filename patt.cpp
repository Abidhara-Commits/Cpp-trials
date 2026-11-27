#include <iostream>
using namespace std;

int main (){
    for ( int i = 5; i >= 1; i--){
    for (int a = 1; a <= i; a++){
        cout << "*";
    }
    cout << endl;
    }


    for (int r = 1; r <= 6; r++){
    for (int c = 1; c <= r; c++){
        cout << "*";
    }
    cout<< endl;
    }

    return 0;

}