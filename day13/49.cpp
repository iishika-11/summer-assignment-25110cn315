//input and display an array
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

    cout<<"The array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
