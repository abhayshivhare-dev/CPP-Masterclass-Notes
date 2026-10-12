 #include <iostream>
 
 using namespace std;
 
 int main() {
     
//     char vowels[] {'a', 'e', 'i', 'o', 'u' };
//     cout << "\nThe first vowel is: " << vowels[0] << endl;
//     cout << "The last vowel is: " << vowels[4] << endl;
//     
//     cin >> vowels[5];
    
//    double hi_temp[] {90.1, 98.5, 77.5, 89.5};
//    cout << "\nThe first high temp is: " << hi_temp[0] << endl;
//    
//    hi_temp[0] = 100.7;
//    
//    cout <<  hi_temp[0];


    int test_score[] {100, 90, 80, 70, 60};
    
    cout << "\nscore at index 0: " << test_score[0] << endl;
    cout << "score at index 1: " << test_score[1] << endl;
    cout << "score at index 2: " << test_score[2] << endl; 
    cout << "score at index 3: " << test_score[3] << endl;
    cout << "score at index 4: " << test_score[4] << endl;
    
    cout << "\nEnter new test scores: " << endl;
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];

    cout << "\nThe updated array is: " << endl;
    cout << "first score is: " << test_score[0] << endl; 
    cout << "second score is: " << test_score[1] << endl;
    cout << "third score is: " << test_score[2] << endl;
    cout << "fourth score is: " << test_score[3] << endl;
    cout << "fifth score is: " <<  test_score[4] << endl;
    
    cout << "\nNotice what the value of array name is: " << test_score << endl;
    
     return 0;
 }