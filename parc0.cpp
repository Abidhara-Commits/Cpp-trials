#include <iostream>
#include <string>
using namespace std;

int mulNumbers( int x, int y) {
    int result = x * y ;
    return result;
}
int main (){
    int a, b, pro;
    cout<<"Enter the first integer"<< endl;
    cin>>a;
    cout<< "Enter the second number"<< endl;
    cin>>b;
    pro = a * b ;
    cout << " the product is "<< pro << endl;

    pro = mulNumbers(25 , 7);
    cout << "The second profuct is "<< pro <<endl;
    pro = mulNumbers(a, b);
    cout << "The multiple of the variables using mulnumbers is "<< pro <<endl;

    // For CPP when you enter data with spaces like full name it will only save the first word
    // unless you use this getline (cin, varname); let's see it practically

    string m;
    cout << "What's your full name?" << endl;
    cin >> m;
    cout << "Your full name is : " << m << endl;
    
    return 0;
}