//palindrome
#include <iostream>
using namespace std;
int palindrome(int x){
    int original = x;
    int rev=0;
    int rem;
    while(x>0){
        rem = x%10;
        rev = rev*10 + rem;
        x = x/10;
    }

    if(rev == original){
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

    if(palindrome(n)==true){
        cout<<"It is a palindrome number";
    }
    else{
        cout<<"It is not a palindrome number ";
    }
    return 0;

}