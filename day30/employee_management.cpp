#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee e[50];
    int n, i;

    cout << "Enter number of employees: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Enter ID, Name, Salary: ";
        cin >> e[i].id >> e[i].name >> e[i].salary;
    }

    cout << "\nEmployee Details:\n";
    for(i = 0; i < n; i++) {
        cout << e[i].id << " " << e[i].name << " " << e[i].salary << endl;
    }

    return 0;
}