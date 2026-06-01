//print largest prime factor
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number";
    cin>>n;
    int original=n;
    int maxprime =0;

    while(n%2==0){
        maxprime=2;
        n=n/2;
    }

    for(int i=3;i<=n;i+= 2){
        while(n%i==0){
            maxprime =i;
            n=n/i;

        }

    }

    if (n > 2) {
        maxprime = n;
    }

    cout<<"The max prime factor of "<<original<<" is "<<maxprime;



    
}