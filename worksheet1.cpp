#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int h = x / 3600;
    int r = x % 3600;
    int m = r / 60;
    int s = r % 60;

    cout << h << ":";
    cout << (m < 10 ? "0" : "") << m << ":";
    cout << (s < 10 ? "0" : "") << s << endl;

    return 0;
}
