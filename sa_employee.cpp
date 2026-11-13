#include <iostream>
using namespace std;

int main(){
    double a, g, d, i, p, x;
    cout << "Enter your gross salary"<< endl;
    cin >> g;

      p = ( 0.07 * g);
      a = (g - d - i + p);
    
    if ( g < 2000 ){
        i = 0.05 * g;
        d = 500;
        cout << "your net pay is" << " " << a << endl;
    }
    else if ( g > 2000 ){
        i = 0.1 * g;
        d = 500;
        cout << "your net pay is" << " " << a << endl;
    }
    else if ( g > 4000 ){
        i = 0.15 * g;
        d = 1000;
        cout << "your net pay is" << " " << a << endl;
    }
    else if ( g > 8000 ){
        i = 0.25 * g;
        d = 2000;
        cout << "your net pay is" << " " << a << endl;
    }
    else if ( g > 10000 ){
        i = 0.30 * g;
        d = 2500;
        cout << "your net pay is" << " " << a << endl;
    }
    else if ( g > 14000 ){
        i = 0.35 * g;
        d = 3000;
        cout << "your net pay is" << " " << a << endl;
    }

    return 0;
}