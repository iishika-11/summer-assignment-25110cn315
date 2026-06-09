//sum and average of an array
#include <iostream>
using namespace std;
int main(){
    int n,arr[50];
    cout<<"Enter the number of elements ";
    cin>>n;

    cout<<"Enter the elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    float average;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    average = (float)sum/n;

    cout<<"The sum and average of the given array is "<<sum<<" and "<<average<<" respectively";

    return 0;
}