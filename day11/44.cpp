//factorial
#include <iostream>
using namespace std;
int factorial(int x){
    int fact =1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int a;
    cout<<"Enter a number ";
    cin>>a;

    cout<<"The factorial of "<<a<<" is "<<factorial(a);
    return 0;
}