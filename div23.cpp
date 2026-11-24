#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout << " Enter num1"<< endl;
    cin >> a;
    cout << "Enter num2"<< endl;
    cin >> b;

    if ( a > b ){
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a + 1; i < b; i++ ){

        if ( i % 2 == 0 && i % 3 == 0){
            cout<< i<< " is divisible by 2 and 3 "<< endl;
            continue;
        }

        if (i % 2 == 0){
        cout << i  << " is divisible by 2 " << endl;
        continue; 
        }

        if  ( i % 3 == 0 ){
        cout << i << " is divisible by 3 " << endl; 
        continue;
        }
        }

    return 0;

    }

