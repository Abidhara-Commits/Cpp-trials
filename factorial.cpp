#include <iostream>
using namespace std;

int main() {
    int y;
    long long x = 1;

    cout << "Enter a positive integer: " << endl;
    cin >> y;

    if (y <= 0) {
        cout << "Please enter a positive integer" << endl;
        return 0;
    }

    for (int i = 1; i <= y; i++) {
        x *= i;
    }
    cout << "The factorial of the number is: " << x << endl;
    return 0;
}