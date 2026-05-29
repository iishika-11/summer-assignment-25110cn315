//reverse of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int num =n;
    int rev=0,digit;

    while(num>0){
        digit = num%10;
        rev = rev*10 + digit;
        num =num/10;
    }

    cout<<"Reverse of "<<n<<" is "<<rev<<endl;
    return 0;
}
