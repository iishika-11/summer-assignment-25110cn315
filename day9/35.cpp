//repeated charcter pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    

    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;   // generate characters A, B, C...

        for(int j = 0; j <= i; j++) {
            cout << ch;
        }

        cout << endl;
    }
}