#include <iostream>
using namespace std;

int main (){
    for ( int i = 5; i >= 1; i--){
    for (int a = 1; a <= i; a++){
        cout << "*";
    }
    cout << endl;
    }
    for (int row = 1; row <= 6; row++){
    for (int col = 1; col <= row; col++){
        cout << "*";
    }
    cout<< endl;
    }

}