 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 int main() {
     
    char choice {};
    vector<int> list;
    do {
        cout << " P - Print numbers " << endl;
        cout << " A - Add a number " << endl;
        cout << " M - Display Mean of the numbers " << endl;
        cout << " S - Display the smallest number " << endl;
        cout << " L - Display the largest number " << endl;
        cout << " Q - Quit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice == 'A' || choice == 'a') {
            int num_to_add;
            cout << "Enter an integer to add: ";
            cin >> num_to_add;
            list.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
            
        } else if (choice == 'P' || choice == 'p') {
            if (list.empty()) {
                cout << " [] - the list is empty" << endl;
            }else
            cout << "[ ";
            for (size_t i = 0 ; i < list.size() ; i++) {
                cout << list[i] << " ";
            }
            cout << "]" << endl;
        
        }else if (choice == 'm' || choice == 'M') {
            if (list.empty()) {
                cout << "Unable to calculate the mean- The list is empty" << endl;
            }else {
                double total = 0;
                for (size_t i = 0 ; i < list.size(); i++) {
                    total += list[i];
                }
                double mean = total /list.size();
                cout << "The mean is: " << mean << endl;
            }
        }else if (choice == 'l' || choice == 'L') {
            if (list.empty()) {
                cout << "The list is empty" << endl;
            }else {
                int largest = list[0];
                for (size_t i = 1 ; i < list.size() ; i++) {
                    if (list[i] > largest) {
                        largest = list[i];
                    }
                }
                cout << "The largest number is " << largest << endl;
            }
        }else if (choice == 's' || choice == 'S') {
            if (list.empty()) {
                cout << "The list is empty" << endl;
            }else {
                int smallest = list[0];
                for (size_t i = 1 ; i < list.size() ; i++) {
                    if (list[i] < smallest) {
                        smallest = list[i];
                    }
                }
                cout << "The smallest number is " << smallest << endl;
                
            }
        
        }else {
            cout << "Quit" << endl;
        }
            
         
    } while (choice != 'q' && choice != 'Q');
    
    
    
    return 0;
 }