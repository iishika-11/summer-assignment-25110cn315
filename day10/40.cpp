//character pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;

    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //char1
        for(char j='A';j<i+'A';j++){
            cout<<j;
        }
        
        //char2
        for(char j =i+'A'-2;j>='A';j--){
            cout<<j;
        }
        cout<<endl;
    }

}
