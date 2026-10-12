#include <vector>
#include <iostream>

using namespace std;


    int main() {
    
    vector <int> vector_1 {};
    vector <int> vector_2 {};
    
    int add_ele {0};
    cin >> add_ele;
    vector_1.push_back(add_ele);
    
    int add_elle {0};
    cin >> add_elle;
    vector_1.push_back(add_elle);
    cout << "\nvector1: " << endl;
    cout << "\nFirst element is: " << vector_1.at(0) << endl;
    cout << "Second is: " << vector_1.at(1) << endl;
    cout << "Size of vector is: " << vector_1.size() << endl;

    int join_ee {0};
    cin >> join_ee;
    vector_2.push_back(join_ee);
    
    int join_eee{0};
    cin >> join_eee;
    vector_2.push_back(join_eee);
    cout << "\nvector2: " << endl;
    cout << "\nFirst ele is: " << vector_2.at(0) << endl;
    cout << "second is: " << vector_2.at(1) << endl;
    cout << "Display size: " << vector_2.size() << endl;
    
    
    vector <vector<int>> vector_2d;
    
    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);
    
    cout << vector_2d.at(0).at(0) <<  vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) <<  vector_2d.at(1).at(1) << endl;
    
    cin >> vector_1.at(0);
    
   cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
   cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
   
    cout << vector_1[0] << endl;
    cout << vector_1[1] << endl;
    return 0;
    }