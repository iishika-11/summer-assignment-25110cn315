//decimal to binary
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number in decimal system ";
    cin>>n;
    int rem;
    int ans =0,power =1;

    while(n>0){
        rem = n%2;
        n = n/2;
        ans += rem*power;
        power =power*10;
        
    }
    cout<<"The answer is "<<ans;
    return 0;
}