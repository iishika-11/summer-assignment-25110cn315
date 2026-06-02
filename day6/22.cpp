//binary to decimal
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number in binary system ";
    cin>>n;
    int rem;
    int ans =0,power =1;

    while(n>0){
        rem = n%10;
        n = n/10;
        ans += rem*power;
        power =power*2;
        
    }
    cout<<"The answer is "<<ans;
    return 0;
}