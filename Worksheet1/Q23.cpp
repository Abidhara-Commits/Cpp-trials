#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cout<< "Enter four digits one by one"<<endl;
    cin>> a;

    int b = a / 1000;
    int x = (a / 10) % 100;
    int y = x % 10;

    int z = y * 1000 + x * 10 + b;
    cout << result << endl;
    return 0;
}