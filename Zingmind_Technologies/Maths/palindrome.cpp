#include<iostream>
using namespace std;


int main(){

    int n;
    cout << "enter the numebr = ";
    cin >> n;

    int original = n ;

    int ans=0;

    while(n!=0){
        int digit = n%10;
        ans = (ans*10)+digit;
        n/=10;

    }
   if( ans == original){
    cout << "given number is  a palindrome numebr";
   }
   else{
    cout << " not a plaidrome number " ;
   }



}