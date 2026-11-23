#include <iostream>
using namespace std;

int main (){

    //Question 1
    for (int row = 1; row <= 6; row++){
    for (int col = 1; col <= row; col++){
        cout << "*";
    }
    cout<< endl;
    }

    //Question 2

    for ( int ro = 5; ro >= 1; ro--){
    char x = 'A';
    for (int co = 1; co <= ro; co++){
        cout << x;
        x++;
    }
    cout << endl;
    }

    //Question 3
    /*
     for (int r = 1; r <= 6; r++) {

        for (int space = 1; space < r; r++) {
            cout << " ";
        }


        for (int num = r; num <= 6; num++) {
            cout << num;
        }

        cout << endl;
    }*/
   

    return 0;
}