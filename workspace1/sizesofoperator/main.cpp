 #include <iostream>
 #include <climits>
 
 
 
     
 using namespace std;
 
 int main() {
 
    cout << "size of information" << endl;
    cout << "==============================" << endl;
 
    cout << "char: " << sizeof(char) << "bytes" << endl;
    cout << "int: " << sizeof(int) << "bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "Bytes" << endl;
    cout << "short: " << sizeof(short) << "bytes" << endl;
    cout << "long: " << sizeof(long) << "Bytes" << endl;
    cout << "long long: " << sizeof(long long) << "bytes" << endl;
    
    
    cout << "float: " << sizeof(float) << " bytes" << endl;
    
    cout << "Minimum Values" << endl;
    cout << "char: " << CHAR_MAX << endl;
    int age(21);
    cout << "age is " << sizeof age << "Years" << endl;
    
    double wage(25.454);
    cout << "wage is " << sizeof wage << "Bytes" << endl;
    
    return 0;
 }
 