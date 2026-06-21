#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int freq[256] = {0};

    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }

    for(int i = 0; i < s2.length(); i++) {
        if(freq[s2[i]] > 0) {
            cout << s2[i] << " ";
            freq[s2[i]] = 0; // avoid duplicates
        }
    }

    return 0;
}