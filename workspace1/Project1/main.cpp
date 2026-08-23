#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello world! ";
   
    cout << "Hello";
    cout << "world" << endl;
   
    cout << "Hello World!" << endl;
    cout << "Hello!" << "world" << endl;
    cout << "Hello world!\n";
    cout << "hello\nout\nthere\n";
   
    int num1;
    int num2;
    double num3;
     
    cout << "enter your first integer: ";
    cin >> num1;
    cout << "your integer is: " << num1 << endl;

    cout << "your first integer is: ";
    cin >> num1;
    cout << "Your second integer is: ";
    cin >> num2;
    
    cout << "You entered " << num1 << " and " << num2 << endl;

    cout << "Enter two integers with a space: ";
    cin >> num1 >> num2;
    cout << "You Entered: " << num1 << " and " << num2 << endl;
    
    cout << "Enter a double: ";
    cin >> num3;
    cout << "You entered: " << num3 << endl;
    
    cout << "Enter an integer: ";
    cin >> num2;
    
    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "Your integer is: " << num2 << endl;
    cout << "Your dobule is: " << num3 << endl;
    
    
    return 0;
    
    
     
}