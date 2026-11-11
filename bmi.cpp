#include <iostream>
using namespace std;

int main(){
    double x;
    double y;
    double z;

    cout << "Enter your weight" << endl;
    cin >> x;
    cout << "Enter your height in meters" << endl;
    cin >> y;
    
    z = x / ( y * y );
    cout << "Your BMI is" << " " << z << endl;

    if (z <= 18.5){
        cout << "You are Underweight"<< endl;
    }
    if (z > 18.5 && z <= 24.9){
        cout << "You are on a Healthy weight"<< endl;
    }
    if (z > 24.9 && z <= 29.9){
        cout << "You are Overweight"<< endl;
    }
    if (z > 29.9 && z <= 34.9){
        cout << "You are obese"<< endl;
    }

    / there are more levels to bmi scale but I will only do upto obese/
    
    return 0;

}