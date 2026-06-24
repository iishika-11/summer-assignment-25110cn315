#include <iostream>
using namespace std;

struct Ticket {
    string name;
    int seats;
};

int main() {
    Ticket t;
    int choice;

    while (true) {
        cout << "\n1. Book Ticket\n2. Show Ticket\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Name: ";
            cin >> t.name;
            cout << "Enter Seats: ";
            cin >> t.seats;
        }
        else if (choice == 2) {
            cout << "Name: " << t.name << endl;
            cout << "Seats Booked: " << t.seats << endl;
        }
        else {
            break;
        }
    }
}