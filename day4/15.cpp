//check armatrong number
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int originalnum = n;

    //count digits of the number
    int digit = 0;
    int num = n;
    while(num>0){
        num=num/10;
        digit++;

    }
    

    //power
    int sum = 0; // 
    
    
    while(n > 0){
        int rem = n % 10;                     
        sum = sum + round(pow(rem, digit));   
        n = n / 10;                           
    }
    
    
    

    //checking

    if(sum == originalnum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }

    return 0;

}