#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    // Count frequency
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    // Find first non-repeating
    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] == 1) {
            cout << "First non-repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found.";
}