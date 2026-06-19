#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] > maxFreq) {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar;
}