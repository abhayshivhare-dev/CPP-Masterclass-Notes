// #include <iostream>
// #include <vector>
// 
// using namespace std;
// 
// int main() {
//     vector <int> values {1, 2, 4, -1, 3, -1, -99, 7, 8, 10};
//     
//     for (auto val : values) {
//         if (val == -99)
//             break;
//         else if (val == -1)
//             continue;
//         else
//             cout << val << endl;
//    
//    
//     }
//    
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    while(true) {
        char again {};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;
    if (again == 'N' || again == 'n')
        break;
    }
    return 0;
}