//perfect number
#include <iostream>
using namespace std;
int perfect(int x){
    int num =x;
    int sum=0;
    for(int i=1;i<x;i++){
        if(num%i==0){
            sum +=i;
        }
        

    }
    
    //checking
    if(sum == x){
        return true;
    }
    else{
       return false;
    }


}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (bool perfect=true){
        cout<<"It is a perfect number ";

    }
    else{
        cout<<"It is not a perfect number ";
    }
    return 0;
}