//find x^n without using pow()
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the base and power ";
    cin>>a>>b;
    int ans=1;
    int temp;

    for(int i=1;i<=b;i++){
        ans = ans*a;


    }

    cout<<ans;


}