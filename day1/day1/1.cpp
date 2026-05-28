#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<< "ENTER A NUMBER";
    cin >>n;
    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout << "Sum upto " << n << " is " << sum << endl;
    return 0;


}