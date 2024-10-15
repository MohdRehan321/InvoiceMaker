/* Feature yet to be added -> Input from barcode reader, then handle file storage.
   Add mall name, and generate a sample bill. */

#include<iostream>
using namespace std;

// Class to store item details
class ItemDetails {
public:
    int item_no;         // Item number
    char item_name[50];  // Item name
    float item_price;    // Item price
};

// Derived class to handle discounted items
class DiscountedItem : public ItemDetails {
public:
    int discount_percent;   // Discount percentage
    int discounted_price;   // Price after discount

    // Method to accept item details
    void accept_details() {
        cout << "\n Enter Item Name: ";
        cin >> item_name;
        cout << "\n Enter Item No.: ";
        cin >> item_no;
        cout << "\n Enter Item Price: ";
        cin >> item_price;
        cout << "\n Enter Discount Percent: ";
        cin >> discount_percent;
    }

    // Method to calculate the discounted price
    void calculate_discount() {
        discounted_price = item_price - (item_price * discount_percent / 100);
    }

    // Method to display item details with discount
    void display_details() {
        cout << "\n Item Name: " << item_name;
        cout << "\n Item No.: " << item_no;
        cout << "\n Original Price: " << item_price;
        cout << "\n Discount Percent: " << discount_percent;
        cout << "\n Discounted Price: " << discounted_price;
    }
};

// Main function to demonstrate bill generation
int main() {
    DiscountedItem item;
    item.accept_details();   // Get item details
    item.calculate_discount();  // Calculate discounted price
    item.display_details();  // Show item details

    return 0;
}
