#include <iostream>
using namespace std;

int main() {
   int a = 0;
   cout << "Enter your age: ";
   cin >> a ; 
   if (a < 18) { cout << "You are a child" << endl; } 
   else if ( a >= 18 && a < 60) { cout << "You are an adult" << endl; } 
   else if (a >= 60) { cout << "You are an elderly person" << endl; } 
   else { cout << "Invalid input" << endl; }
   return 0;
 }
