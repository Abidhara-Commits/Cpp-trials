#include <iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Hello this is the even or odd determiner" << endl;
    cout<<"Enter an integer"<< endl;
    cin>> x;

    y = x / 2 ;
    if ( x % 2 == 0 ){
        cout<< "This number is divisible by 2"<< endl;
    }
    else{
        cout<< "This number is not divisible by 2" << endl;
    }

    return 0;
}