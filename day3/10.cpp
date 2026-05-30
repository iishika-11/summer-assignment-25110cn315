//print prime numbers in a given range

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for range";
    cin>>n;
    int i;

    if(n<=1){
        bool isPrime= true;
        return 0;
    }

    for( i=0;i<=n;i++){
        if(n%i==0){
            bool isPrime =false;
            return 0; 

        }
    }

    if( bool isPrime = true){
        cout<<i;
    }
}
