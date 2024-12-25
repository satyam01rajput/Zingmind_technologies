#include<iostream>
using namespace std;

int main(){

    int target ;
    cin >> target;

int arr[6]={3,5,4,1,3,2};

for(int i=0;i<6;i++){
    for(int j = i+1; j<6;j++)
    {
        for(int k=j+1; k<6;k++){
            if(arr[i] + arr[j] + arr[k] == target){
                cout << arr[i] << arr[j] << arr[k] << " "; 
            }
        }
    }
}


}