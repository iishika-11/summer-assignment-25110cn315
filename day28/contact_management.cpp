#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact c[5];
    int n = 0, choice;

    while (true) {
        cout << "\n1. Add Contact\n2. Show Contacts\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Name: ";
            cin >> c[n].name;
            cout << "Enter Phone: ";
            cin >> c[n].phone;
            n++;
        }
        else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << c[i].name << " - " << c[i].phone << endl;
            }
        }
        else {
            break;
        }
    }
}