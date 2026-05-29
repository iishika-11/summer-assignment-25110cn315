//check palindrome number
#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number";
    cin>>n;

    int num =n;
    int digit,rev=0;

    while(num>0){
        digit =num%10;
        rev = rev*10 +digit;
        num = num/10;
    }

    if(rev==n){
        cout<<"It is a palindrome number"<<endl;
    }
    else{
        cout<<"It is not a palindrome number"<<endl;
    }

    return 0;
}