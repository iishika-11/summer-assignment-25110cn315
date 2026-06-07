#include <iostream>
using namespace std;

// function to check prime
bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a Prime number";
    } else {
        cout << n << " is NOT a Prime number";
    }

    return 0;
}