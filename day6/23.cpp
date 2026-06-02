//count set bits in a number
//count set bits
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout <<"Enter a number  ";
    cin>>n;
    int count =0;

    while(n>0){
        if(n%10==1){
            count++;

        }
        n = n/10;

    }
    
    cout<<count<<endl;

    return 0;

}