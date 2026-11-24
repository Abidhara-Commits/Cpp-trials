#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter num" << endl;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        for (int b = 1; b <= a; b++) {
            cout << i * b << " "<< ;
        }
        cout << endl;
    }

    return 0;
}