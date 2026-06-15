#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[r][c], B[r][c], diff[r][c];

    cout << "Enter first matrix:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> A[i][j];

    cout << "Enter second matrix:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> B[i][j];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            diff[i][j] = A[i][j] - B[i][j];

    cout << "Difference matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout << diff[i][j] << " ";
        cout << endl;
    }

    return 0;
}