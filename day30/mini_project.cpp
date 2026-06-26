#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
};

Student s[50];
int n = 0;

void addStudent() {
    cout << "Enter Roll and Name: ";
    cin >> s[n].roll >> s[n].name;
    n++;
}

void displayStudent() {
    for(int i = 0; i < n; i++) {
        cout << s[i].roll << " " << s[i].name << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display\n3. Exit\n";
        cin >> choice;

        if(choice == 1) addStudent();
        else if(choice == 2) displayStudent();

    } while(choice != 3);

    return 0;
}