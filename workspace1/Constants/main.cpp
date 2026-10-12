#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello!! Welcome to Frank carpet room cleaning services" << endl << endl;
    cout << "How many small rooms do you want to be cleaned: ";
    
    int number_of_small_rooms(0);
    cin >> number_of_small_rooms;
    
    cout << "How many large rooms do you wanted to be cleaned: ";
    
    int number_of_large_rooms(0);
    cin >> number_of_large_rooms;
    
    const int price_per_small_room (25);
    const int price_per_large_room (35);
    const double Sales_tax_rate (0.06);
    const int Estimate_expiry (30);
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << (number_of_large_rooms * price_per_large_room) + (number_of_small_rooms * price_per_small_room) << endl;
    cout << "Tax: $" << ((number_of_large_rooms * price_per_large_room) + (number_of_small_rooms * price_per_small_room) * Sales_tax_rate) << endl; 
    cout << "Total estimate: $" << ((number_of_large_rooms * price_per_large_room + number_of_small_rooms * price_per_small_room) + (number_of_large_rooms * price_per_large_room + number_of_small_rooms * price_per_small_room) * Sales_tax_rate) << endl;
    cout << "This estimate is valid for: " << Estimate_expiry << " days" << endl;
    return 0;
    
}