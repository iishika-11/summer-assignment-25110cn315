#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int vowels = 0, consonants = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z') ch = ch + 32; // convert to lowercase

        if((ch >= 'a' && ch <= 'z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants;

    return 0;
}