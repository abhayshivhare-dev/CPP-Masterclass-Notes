#include <iostream>
using namespace std;
void hello_fun () {
    cout << "Hello" << endl;
}
int main () {
    for(int i{1}; i <= 10 ; ++i) {
        hello_fun();
    }
    return 0;
}