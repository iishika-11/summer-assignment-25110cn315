//strong number - sum of factorial of the digits of the number is equal to the number
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number";
    cin>>n;
    int sum =0;

    //getting the digits
    int num =n;
    while(num>0){
        int digit = num%10;
        // factorial of digit
        int fact = 1;
        for(int i = 1; i <= digit; i++){
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if(sum==n){
        cout<<"It is a strong number";
    }
    else{
        cout<<"It is not a strong number";
    }

    return 0;
    
    

    
}