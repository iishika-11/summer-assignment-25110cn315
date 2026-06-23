#include <iostream>
using namespace std;

struct Salary {
    float basic, hra, da, total;
};

int main() {
    Salary s;

    cout << "Enter Basic Salary: ";
    cin >> s.basic;

    // Calculations
    s.hra = 0.2 * s.basic;
    s.da = 0.1 * s.basic;
    s.total = s.basic + s.hra + s.da;

    cout << "\n--- Salary Details ---\n";
    cout << "Basic: " << s.basic << endl;
    cout << "HRA(house rent allowance): " << s.hra << endl;
    cout << "DA(dearness allowance): " << s.da << endl;
    cout << "Total Salary: " << s.total << endl;

    return 0;
}