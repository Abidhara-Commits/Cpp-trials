#include <iostream>
using namespace std;

int main () {
    int x;
    cout<< "Enter the distance in kilometers"<< endl;
    cin>> x;

    int y = (x > 4) ? ( x - 4) : 0;
    int a = (y + 1) / 2;
    int b = 8 + a * 3;

    cout << b << endl;

    return 0;


}