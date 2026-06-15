#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[n][n];
    int primary = 0, secondary = 0;

    cout << "Enter matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> A[i][j];

    for(int i=0;i<n;i++){
        primary += A[i][i];
        secondary += A[i][n-i-1];
    }

    cout << "Primary diagonal sum: " << primary << endl;
    cout << "Secondary diagonal sum: " << secondary << endl;

    return 0;
}