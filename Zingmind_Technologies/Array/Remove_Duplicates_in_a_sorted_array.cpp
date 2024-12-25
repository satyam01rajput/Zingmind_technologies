#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[9]={34,55,34,55,67,55,67,55,99};

sort(arr, arr+6);

for(int i=0;i<6;i++){
    if(arr[i] == arr[i+1]){
        
    }
    else{
        cout << arr[i] ; 
    }
}

}