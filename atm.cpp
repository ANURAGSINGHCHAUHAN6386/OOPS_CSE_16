#include <iostream>
using namespace std;

class ATM_Service {
private:
    double balance;
    int pin;

public:
    // Constructor
    ATM_Service() {
        balance = 10000;   // Initial balance
        pin = 1234;        // Default PIN
    }

    // Check Balance
    void checkBalance() {
        cout << "Current Balance: ₹" << balance << endl;
    }

    // Deposit Money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "₹" << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    // Withdraw Money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "₹" << amount << " withdrawn successfully.\n";
        }
    }

    // Change PIN
    void changePin(int oldPin, int newPin) {
        if (oldPin == pin) {
            pin = newPin;
            cout << "PIN changed successfully.\n";
        } else {
            cout << "Incorrect old PIN.\n";
        }
    }
};

int main() {
    ATM_Service atm;
    int choice;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;

            case 2: {
                double amount;
                cout << "Enter amount to deposit: ₹";
                cin >> amount;
                atm.deposit(amount);
                break;
            }

            case 3: {
                double amount;
                cout << "Enter amount to withdraw: ₹";
                cin >> amount;
                atm.withdraw(amount);
                break;
            }

            case 4: {
                int oldPin, newPin;
                cout << "Enter old PIN: ";
                cin >> oldPin;
                cout << "Enter new PIN: ";
                cin >> newPin;
                atm.changePin(oldPin, newPin);
                break;
            }

            case 5:
                cout << "Thank you for using the ATM.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}