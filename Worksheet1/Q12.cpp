#include <iostream>
using namespace std;

int main(){
    double a;
    cout<<"Enter the amount of money in birr (1.11 birr format)"<<endl;
    cin>> a;

    //x = birr and y = santim

    int x = a;
    int y = (a - x) * 100 + 0.5; 

    cout<< "you have "<< x << " birr and "<< y << " santim"<<endl;

    return 0;
}