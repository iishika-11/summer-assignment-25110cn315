//number pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //spaces
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        //num1
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //num2
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}