#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter the first integer" << endl;
    cin >> a;
    cout << "Enter the second integer" << endl;
    cin >> b;
    cout << "Enter the third integer" << endl;
    cin >> c;

    d = a;
    a = b;
    b = c;
    c = d;

    cout <<a << " "<< b << " "<< c <<endl;
    cin.ignore();
    //B
    cout << "Enter the first integer" << endl;
    cin >> a;
    cout << "Enter the second integer" << endl;
    cin >> b;
    cout << "Enter the third integer" << endl;
    cin >> c;

   
    c += a + b;      
    b = c - a - b;  
    a = c - a - b;  
    c -= a + b;      

    cout << a << " " << b << " " << c << endl;



    return 0;
}