#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
};

int main() {
    Student s[100];
    int n = 0;
    int choice = 0;

    while (choice != 3) {
        cout << "\n===== MENU =====\n";
        cout << "1 - Add Student\n";
        cout << "2 - Display Students\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Choice 1 = Add student
            cout << "Enter ID, Name, Age: ";
            cin >> s[n].id >> s[n].name >> s[n].age;
            n++;
        }
        else if (choice == 2) {
            // Choice 2 = Display students
            cout << "\n--- Student List ---\n";
            for (int i = 0; i < n; i++) {
                cout << "ID: " << s[i].id
                     << ", Name: " << s[i].name
                     << ", Age: " << s[i].age << endl;
            }
        }
        else if (choice == 3) {
            // Choice 3 = Exit
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}