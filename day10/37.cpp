//star pyramid 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //star1
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //star2
        
        for(int j=1;j<=i-1;j++){
            cout<<"*";

        }
        
        
        
        cout<<endl;
    }
}