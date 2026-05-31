//print armstrong numbers
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a range till which u want to find armstrong numbers";
    cin>>n;
    
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
            sum = sum+round(pow(rem,digits)); 
            num = num/10;                  
        }

        int originalnum = i; 

        //print armstrong numbers
        
        if(sum == originalnum){
            cout<<sum<<" "; 
        }
    }

    return 0;
}