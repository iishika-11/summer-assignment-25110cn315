//fibonacci
#include <iostream>
using namespace std;
int fibonacci(int x){
    int a=0,b=1;
    int temp;
    for(int i=0;i<x;i++){
        
        temp =a+b;
        a=b;
        b=temp;

    }
    return a;
    

}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<fibonacci(n);
}