// #include <iostream>
// using namespace std;
// 
// int main(){
//    
//    for (int outer_val = 1 ; outer_val <= 2 ; ++outer_val)
//        for ( int inner_val = 1 ; inner_val <= 3 ; ++inner_val)
//            cout << outer_val << "," << inner_val << endl;
//    
//    return 0;
// }

#include <iostream> 
using namespace std;
int main () { 
    
    for(int num1 = 1 ; num1 <= 10 ; ++num1) {
        for(int num2 = 1 ; num2 <= 10 ; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "--------------------------" << endl;
    }
    return 0;
}    
//#include <iostream>
//using namespace std;
//int main () {
//    int grid [5][3] {};
//    
//    for (int row {0} ; row < 5 ; ++row ) {
//        for (int column {0} ; column < 3 ; ++column ) {
//        grid [row][column] = 1000;
//        cout << grid [row][column] << " ";
//        cout << endl;
//        
//        }
//    }
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int main () {
//    
//    vector<vector<int>> vector_2d
//    {
//        {1, 2, 3},
//        {10, 20, 30, 40},
//        {100, 200, 300, 400, 500}
//    };
//    for(auto vec : vector_2d) {
//        for(auto val : vec) {
//            cout << val << " ";
//            
//        }
//        cout << endl;
//        
//    }
//    return 0;
//}