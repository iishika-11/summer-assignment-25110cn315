#include <iostream>
using namespace std;

struct Account {
    int accNo;
    float balance;
};

int main() {
    Account a;
    int choice;
    float amount;

    cout << "Enter Account Number: ";
    cin >> a.accNo;
    a.balance = 0;

    while (true) {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount: ";
            cin >> amount;
            a.balance += amount;
        }
        else if (choice == 2) {
            cout << "Enter amount: ";
            cin >> amount;
            if (amount <= a.balance)
                a.balance -= amount;
            else
                cout << "Insufficient balance\n";
        }
        else if (choice == 3) {
            cout << "Balance: " << a.balance << endl;
        }
        else {
            break;
        }
    }
}