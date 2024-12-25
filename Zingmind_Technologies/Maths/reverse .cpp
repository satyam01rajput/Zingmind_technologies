#include<iostream>
using namespace std;

int main(){
int n;
cin >> n;

int ans =0;

while (n!=0)

{
    int digit = n%10;
    ans = (ans * 10 )+ digit; 

    if(ans > INT32_MAX/10 || ans<INT32_MIN/10){
        cout << "its not a valid number " ;
        return 0 ; 
    }
   
    n/=10;
    }
    
    cout << ans ; 

}
