#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string letters {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string keys {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
     
    string secret_message;
    string encrypted_message;
    cout << "Enter the encrypting message: ";
    getline(cin, secret_message);
     
    cout << "\nEncrypting Message........" << endl;
    
    for(char c: secret_message) {
        size_t position = letters.find(c);
        if(position != string::npos) {
           char new_char = {keys.at(position) };
           encrypted_message += new_char;
 
        }else {
            encrypted_message += c;
        }
    }
    
    
    cout << "\nEncrypted Message: " << encrypted_message << endl;
    
    string decrypted_message {};
    for (char c: encrypted_message) {
        size_t position = keys.find(c);
        if(position != string::npos) {
            char new_char = {letters.at(position) };
            decrypted_message += new_char;
        }else {
            decrypted_message += c;
        }
            
    }
    cout << "\nDecrypting Message......" << endl;
    
    cout << "\Decrypted Message: " << decrypted_message << endl;
    return 0;
}