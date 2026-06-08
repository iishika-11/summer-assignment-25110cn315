//armstrong
#include <iostream>
#include <math.h>
using namespace std;
int armstrong(int n){
    for(int i=1; i<=n; i++){
        //digits
        int num = i;       
        int digits = 0;    
        while(num>0){
            num = num/10;
            digits++;
        }

        int sum = 0;       
        num = i;           
        
        //power
        for(int j=0; j<digits; j++){
            int rem = num%10;              
            sum = sum+(pow(rem,digits)); 
            num = num/10;                  
        }

        int originalnum = i; 

        //print armstrong numbers
        
        if(sum == originalnum){
            return true ;
        }
        else {
            return false;
        }
    }
    
}
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (bool armstrong =true){
        cout<<"It is an armstrong number ";
    }
    else{
        cout<<"It is not an armstrong number ";
    }

}