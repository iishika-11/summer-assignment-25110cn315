#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percentage << endl;

    if (percentage >= 90)
        cout << "Grade: A\n";
    else if (percentage >= 75)
        cout << "Grade: B\n";
    else if (percentage >= 50)
        cout << "Grade: C\n";
    else
        cout << "Grade: Fail\n";

    return 0;
}