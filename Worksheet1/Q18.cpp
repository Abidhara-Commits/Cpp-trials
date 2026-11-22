#include <iostream>
using namespace std;

int main() {
    double balance = 1000;
    cout << "Start: " << balance << endl;


    balance += 2500;
    cout << "After salary: " << balance << endl;


    balance *= 0.6;
    cout << "After rent: " << balance << endl;


    balance += 3 * 150;
    cout << "After friends: " << balance << endl;


    balance /= 3;
    cout << "After splitting: " << balance << endl;


    balance *= 1.05;
    cout << "After interest: " << balance << endl;

    return 0;
}