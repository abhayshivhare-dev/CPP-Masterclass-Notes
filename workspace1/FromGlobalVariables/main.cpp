 #include <iostream>
 
 using namespace std;
 
 int main() {
     
     cout << "You have to find the area of the room:\n ";
     
     cout << "Length of the room is: ";
     int room_length(0);
     cin >> room_length;
     
     cout << "Width of the room is: ";
     int room_width(0);
     cin >> room_width;
     
     cout << "Area of the room is: " << room_length * room_width << " square feet " << endl;
     
     return 0;
 }