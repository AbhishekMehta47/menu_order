#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    int price;

    cout << "----- MENU -----\n";
    cout << "1. Burger  - 100\n";
    cout << "2. Pizza   - 200\n";
    cout << "3. Sandwich - 80\n";
    cout << "4. Coffee  - 50\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        price = 100;
        cout << "You ordered Burger\n";
    }
    else if (choice == 2) {
        price = 200;
        cout << "You ordered Pizza\n";
    }
    else if (choice == 3) {
        price = 80;
        cout << "You ordered Sandwich\n";
    }
    else if (choice == 4) {
        price = 50;
        cout << "You ordered Coffee\n";
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Total bill = " << price * quantity;

    return 0;
}