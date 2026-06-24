#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
};

int main() {
    Book b[5];
    int n = 0, choice;

    while (true) {
        cout << "\n1. Add Book\n2. Show Books\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Book ID: ";
            cin >> b[n].id;
            cout << "Enter Book Name: ";
            cin >> b[n].name;
            n++;
        }
        else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << b[i].id << " - " << b[i].name << endl;
            }
        }
        else {
            break;
        }
    }
}