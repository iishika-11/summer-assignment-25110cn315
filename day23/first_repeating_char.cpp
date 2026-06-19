#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;

        if (freq[str[i]] > 1) {
            cout << "First repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No repeating character found.";
}