//character triangle
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;

    

    for(int i=0;i<n;i++){
        for(char j='A';j<=i+'A';j++){
            cout<<j;
        }
        cout<<endl;
    }
}