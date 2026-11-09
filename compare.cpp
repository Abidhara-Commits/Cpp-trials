#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, temp;
    cout<< "Enter the first integer"<< endl;
    cin>> a ;
    cout<< "Enter the second integer"<< endl;
    cin>> b ;
    cout<< "Enter the third integer"<< endl;
    cin>> c ;
    cout<< "Enter the fourth integer"<< endl;
    cin>> d ;
    cout<< "Enter the fifth integer"<< endl;
    cin>> e ;
   
    if (a > b){temp = a; a = b; b = temp; }
    if (a > c){temp = a; a = c; c = temp; }
    if (a > d){temp = a; a = d; d = temp; }
    if (a > e){temp = a; a = e; e = temp; }

    if (b > c){ temp = b; b = c; c = temp; }
    if (b > d){ temp = b; b = d; d = temp; }
    if (b > e){ temp = b; b = e; e = temp; }

    if (c > d){ temp = c; c = d; d = temp; }
    if (c > e){ temp = c; c = e; e = temp; }
 
    if (d > e){ temp = d; d = e; e = temp; }

    cout<<"Here is the output in ascending order"<< endl;
    cout<< a << ", "<< b << ", " << c << ", "<< d << ", "<< e << endl;

} 