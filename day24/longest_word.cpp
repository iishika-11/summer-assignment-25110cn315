#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter sentence: ";
    cin.ignore();
    getline(cin, str);

    string word = "", longest = "";

    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        } else {
            word += str[i];
        }
    }

    cout << "Longest word: " << longest;
    return 0;
}