#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main() {
//    double num;
//    
//    cout << "Enter the number here: ";
//    cin >> num;
//    
//    cout << "The Sqrt is: " << sqrt(num) << endl;
//    cout << "The cbrt is: " << cbrt(num) << endl;
//    
//    cout << "sin " << sin(num) << endl;
//    cout << "Cos " << cos(num) << endl;
//    
//    cout << "Ceiling " << ceil(num) << endl;
//    cout << "Floor " << floor(num) << endl;
//    cout << "Round off " << round(num) << endl;
//    
//    double power;
//    
//    cout << "Enter the power raise to " << num << ": ";
//    cin >> power;
//    
//    cout << "Answer raise to that power is: " << pow(num, power) << endl;


    int random_number;
    size_t count {10};
    int min {1};
    int max{6};
    
    cout << RAND_MAX << endl;
    srand(time(nullptr));
    for(size_t i{1} ; i <= count ; ++i) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }
    
    cout << endl;
    return 0;
}   