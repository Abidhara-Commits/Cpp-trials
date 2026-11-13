#include <iostream>
using namespace std;

int main(){
    double x;
    cout << "Enter your mark/points" << endl;
    cin >> x;

    if ( x < 40 ){
        cout << "your grade is F" << endl;
        cout << "End it all" << endl;
    }
    else if ( x >= 40 ){
        cout << "your grade is D" << endl;
        cout << "Ohh almost almost" << endl;
    }
    else if ( x >= 45 ){
        cout << "your grade is C-" << endl;
        cout << "Common" << endl;
    }
    else if ( x >= 50 ){
        cout << "your grade is C" << endl;
    }
    else if ( x >= 60 ){
        cout << "your grade is C+" << endl;
    }
    else if ( x >= 65 ){
        cout << "your grade is B-" << endl;
    }
    else if ( x >= 70 ){
        cout << "your grade is B" << endl;
    }
    else if ( x >= 75 ){
        cout << "your grade is B+" << endl;
    }
    else if ( x >= 80 ){
        cout << "your grade is A-" << endl;
    }
    else if ( x >= 85 ){
        cout << "your grade is A" << endl;
    }
    else if ( x >= 90 ){
        cout << "your grade is A+" << endl;
    }
    return 0;
}