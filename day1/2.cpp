#include <iostream>
using namespace std;
int main(){
    int n ,table=1;
    cout<<"Enter a number";
    cin>>n;

    for(int i=1;i<=10;i++){
        table = n*i;
        cout << n << " x " << i << " = " << table<< endl;
    }
    return 0;

    

}