// to find nth term of a fibonacci series 
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter which term you want to find in a fibonacci series";
    cin>>n;

    int a=0;
    int b =1;
    int next;

    for(int i=1;i<n;i++){
        
        next = a+b;
        a = b;
        b = next;
        


    }
    cout<<a;
}