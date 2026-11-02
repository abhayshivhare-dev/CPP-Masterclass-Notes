#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    double num;
    
    cout << "Enter the number here: ";
    cin >> num;
    
    cout << "The Sqrt is: " << sqrt(num) << endl;
    cout << "The cbrt is: " << cbrt(num) << endl;
    
    cout << "sin " << sin(num) << endl;
    cout << "Cos " << cos(num) << endl;
    
    cout << "Ceiling " << ceil(num) << endl;
    cout << "Floor " << floor(num) << endl;
    cout << "Round off " << round(num) << endl;
    
    double power;
    
    cout << "Enter the power raise to " << num << ": ";
    cin >> power;
    
    cout << "Answer raise to that power is: " << pow(num, power) << endl;
    
    return 0;
}