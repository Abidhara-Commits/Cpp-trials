#include <iostream>
using namespace std;

int main(){
    char x;
    int y;
    cout<< "enter a lowercase character"<<endl;
    cin>> x;
    cout<<"enter a number 0-25"<< endl;
    cin>> y;

    char a = 'A' + (x - 'a' + y) % 26;

    cout << a << endl;
    return 0;

}