#include <iostream>
using namespace std;

int main() {
    int pin = 1234;            // default PIN
    int enteredPin;
    int balance = 5000;        // initial balance
    int choice;
    int amount;

    // Login / PIN Check
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN! Access Denied.\n";
        return 0;
    }

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your Balance: ₹" << balance << "\n";
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "₹" << amount << " deposited successfully!\n";
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else {
                    balance -= amount;
                    cout << "₹" << amount << " withdrawn successfully!\n";
                }
                break;

            case 4: {
                int newPin;
                cout << "Enter new PIN: ";
                cin >> newPin;
                pin = newPin;
                cout << "PIN changed successfully!\n";
                break;
            }

            case 5:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "Invalid option! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
