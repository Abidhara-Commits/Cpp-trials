#include <iostream>
using namespace std;

int main() {
    int startNum, endNum;

    cout << "Enter first number: ";
    cin >> startNum;

    cout << "Enter second number: ";
    cin >> endNum;

    if (startNum > endNum) {
        int temp = startNum;
        startNum = endNum;
        endNum = temp;
    }

    int evenSum = 0;
    int oddSum = 0;

    cout << "\nEven numbers: ";
    for (int i = startNum; i <= endNum; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            evenSum += i;
        }
    }

    cout << "\nOdd numbers: ";
    for (int i = startNum; i <= endNum; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            oddSum += i;
        }
    }

    cout << "\n\nSum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
