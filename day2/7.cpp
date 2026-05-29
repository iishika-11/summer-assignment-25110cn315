//product of digits
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number";
    cin>>n;
    int num =n;
    int digit,product=1;

    while(num>0){
        digit = num%10;
        product *= digit;
        num =num/10;

    }

    cout<<"The product of digits of "<<n<<" is "<<product<<endl;

    return 0;
}