#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main () {
    
    char first_name [20] {};
    char last_name [20] {};
    char full_name [50] {};
    char temp [50] {};
    
    cout << "Enter your first name: ";
    cin >> first_name;
    
    cout << "Enter your last name: ";
    cin >> last_name;
    
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters. " << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters. " << endl;
    return 0;
}

