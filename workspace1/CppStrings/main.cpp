//#include <iostream>
//#include <cstring>
// 
//using namespace std;
// 
//int main() {
//    string s1 {"This is a test"};
//    cout << s1.find("This") << endl;
//    cout << s1.substr(3, 8) << endl;
//    cout << s1.length() << endl;
//    s1 += " James";
//    cout << s1 << endl;
//    cout << s1.erase(2,7) << endl;
//    cout << s1 << endl;
//    
//    
//    string s2 {"Abhay Shivhare"};
//    cout << s2.length() << endl;
//    string s3 {};
//    cout << "Enter the input below: " << endl;
//    getline(cin, s3, 'g');
//    cout << s3 << endl;
    
//    string s0;
//    string s1 {"Apple"};
//    string s2 {"Banana"};
//    string s3 {"Kiwi"};
//    string s4 {"apple"};
//    string s5 {s1};         // Apple
//    string s6 {s1, 0, 3};   // App
//    string s7 (10, 'X');    // XXXXXXXXXX
//    cout << s5 << endl;
//    cout << s0 << endl;
//    cout << s0.length() << endl;
//    
//    cout << "Comaprsion..............." << endl;
//    cout << "--------------------------------------------" << endl;
//    cout << boolalpha;
//    cout << s1 << " == " << s5 << " : " << (s1==s5) << endl;
//    cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;
//    cout << s1 << " != " << s2 << " : " << (s1 != s2) << endl;
//    cout << s1 << " < " << s2 << " : " << (s1 < s2) << endl;
//    cout << s2 << " > " << s1 << " : " << (s2 > s1) << endl;
//    cout << s4 << " < " << s5 << " : " << (s4 < s5) << endl;
//    cout << s1 << " == " << "Apple" << " : " << (s1 == "Apple") << endl;
     
//    cout << "Assignment" << endl;
//    cout << "----------------------" << endl;
//    
//    s1 = "Watermelon";
//    cout << "s1 is now: " << s1 << endl;
//    
//    s2 = s1;
//    cout << "s2 is now: " << s2 << endl;
//    
//    s3 = "Frank";
//    cout << "s3 is now: " << s3 << endl;
//    
//    s3[0] = 'C';
//    cout << "s3 is now changed to: " << s3 << endl;
//    
//    s3.at(0) = 'P';
//    cout << "s3 is now changed to: " << s3 << endl;
    
//    s1 = "Watermelon";
//    cout << "Concatnation" << endl;
//    cout << "------------------------------------" << endl;
//    
//    s3 = s5 + " and " + s2 + " juice";
//    cout << "s3 is now: " << s3 << endl;    
//
// 
//    cout << "----------------------------------" << endl;
//    cout << "Looping " << endl;
//    
//    
//    for(size_t i{0}; i < s1.length(); ++i) {
//        cout << s1.at(i);
//        
//    }
//    cout << endl;
//    
//    
//    for(char c: s1) {
//        cout << c;
//        
//    }
//    

//    cout << "Using getline" << endl;
//    string full_name {};
//    cout << "Enter your full name: ";
//    getline(cin, full_name);
//    cout << "Your full name is: " << full_name << endl;

//    string s1 = "The secret word is Boo";
//    string word{};
//    cout << "Enter the word to find: ";
//    cin >> word;
//    
//    size_t position = s1.find(word);
//    if(position != string::npos)
//        cout << "Found " << word << " at position: " << position << endl;
//        else
//            cout << "Sorry, " << word << " not found " << endl;  
//            
//    cout << endl;
//    
//    return 0;
//}