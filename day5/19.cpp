//print factors of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Fctors of the number "<<n<<" are - ";
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
    }

    return 0;
}