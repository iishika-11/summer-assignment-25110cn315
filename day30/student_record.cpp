#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[50];
    int n, i;

    cout << "Enter number of students: ";
    cin >> n;

    // Input
    for(i = 0; i < n; i++) {
        cout << "Enter Roll, Name, Marks: ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    // Display
    cout << "\nStudent Records:\n";
    for(i = 0; i < n; i++) {
        cout << s[i].roll << " " << s[i].name << " " << s[i].marks << endl;
    }

    return 0;
}