#include <iostream>
using namespace std;

// Program 01: Hot or Cold
void hotOrCold() {
    double temperature;
    cout << "Enter temperature: ";
    cin >> temperature;
    if (temperature > 30) {
        cout << "Hot";
    } else {
        cout << "Cold";
    }
    cout << endl;
}

// Program 02: Divisible by 5
void divisibleBy5() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 5 == 0) {
        cout << "Divisible by 5";
    } else {
        cout << "Not divisible by 5";
    }
    cout << endl;
}

// Program 03: Shopping Discount
void shoppingDiscount() {
    double billAmount, amountToPay;
    cout << "Enter bill amount: ";
    cin >> billAmount;
    if (billAmount >= 1000) {
        amountToPay = billAmount - (billAmount * 0.10);
    } else {
        amountToPay = billAmount;
    }
    cout << "Amount to pay: " << amountToPay;
    cout << endl;
}

// Program 04: Password Check
void passwordCheck() {
    int password;
    cout << "Enter password: ";
    cin >> password;
    if (password == 1234) {
        cout << "Access granted";
    } else {
        cout << "Access denied";
    }
    cout << endl;
}

// Program 05: Speed Limit
void speedLimit() {
    double speed;
    cout << "Enter car speed (km/h): ";
    cin >> speed;
    if (speed > 60) {
        cout << "Over the speed limit";
    } else {
        cout << "Safe speed";
    }
    cout << endl;
}

int main() {
    int choice;
    cout << "C++ Lab Tasks\n";
    cout << "1. Hot or Cold\n";
    cout << "2. Divisible by 5\n";
    cout << "3. Shopping Discount\n";
    cout << "4. Password Check\n";
    cout << "5. Speed Limit\n";
    cout << "Select a program (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: hotOrCold(); break;
        case 2: divisibleBy5(); break;
        case 3: shoppingDiscount(); break;
        case 4: passwordCheck(); break;
        case 5: speedLimit(); break;
        default: cout << "Invalid choice" << endl; break;
    }

    return 0;
}
