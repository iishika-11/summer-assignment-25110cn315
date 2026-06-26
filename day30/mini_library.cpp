#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
};

int main() {
    Book b[50];
    int n, i;

    cout << "Enter number of books: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Enter Book ID and Name: ";
        cin >> b[i].id >> b[i].name;
    }

    cout << "\nLibrary Books:\n";
    for(i = 0; i < n; i++) {
        cout << b[i].id << " " << b[i].name << endl;
    }

    return 0;
}