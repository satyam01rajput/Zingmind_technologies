#include<iostream>
using namespace std;
#include<vector>
int main(){

int  first;
cout << "enter first number";
cin >> first;


int second;
cout << "emter second number" ;
cin >> second;

int arr[3000];

for(int i=first; i<second;i++) {
    cin >> arr[i] ;
    
}


for(int i =first;i<=second;i++){
    cout << arr[i ] ; 
}
// int sum = 0;

// for(int i = 0;i<size; i++){
//       sum+=arr[i];

// }
// int total = 0;

// for(int i =1 ; i<7 ;i++){
//     total+=i;
// }

// cout << (  total -sum ) ; 




}