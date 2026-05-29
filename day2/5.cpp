//sum of digits of a number

#include <iostream>
using namespace std;
int main(){
    int n ;
    int sum=0,digit;
    cout<<"Enter a number";
    cin>>n;
    int num=n;

    while(num>0){
        digit = num%10;
        sum += digit;
        num = num/10;
        

    }
    cout<<"The sum of digits of "<<n<<" is "<<sum<<endl;
    return 0;

}