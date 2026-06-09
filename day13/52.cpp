//count even and odd elements
#include <iostream>
using namespace std;
int main(){
    int arr[50];
    int n;

    cout<<"Enter the number of elements ";
    cin>>n;
    cout<<"Enter the elemnts ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int odd=0,even =0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }

    }
    cout<<"The odd elements are "<<odd<<" and even elements are "<< even<<endl;
    return 0;

}