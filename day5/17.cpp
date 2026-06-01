//perfect number- sum of divisors is the number itself
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number ";
    cin>>n;
    int num =n;
    int sum =0;

    //divisors
    for(int i=1;i<n;i++){
        if(num%i==0){
            sum +=i;
        }
        

    }
    
    //checking
    if(sum == n){
        cout<<"It is a perfect number";
    }
    else{
        cout<<"It is not a perfect number";
    }

    return 0;

    

}