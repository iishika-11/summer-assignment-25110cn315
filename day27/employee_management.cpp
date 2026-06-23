#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee e[100];
    int n = 0;
    int choice = 0;

    while (choice != 3) {
        cout << "\n===== EMPLOYEE MENU =====\n";
        cout << "1 - Add Employee\n";
        cout << "2 - Display Employees\n";
        cout << "3 - Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            // Add employee
            cout << "Enter ID, Name, Salary: ";
            cin >> e[n].id >> e[n].name >> e[n].salary;
            n++;
        }
        else if (choice == 2) {
            // Display employees
            cout << "\n--- Employee List ---\n";
            for (int i = 0; i < n; i++) {
                cout << "ID: " << e[i].id
                     << ", Name: " << e[i].name
                     << ", Salary: " << e[i].salary << endl;
            }
        }
        else if (choice == 3) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}