#include<iostream>
using namespace std;

void bubble(int arr[] , int size){
    for(int i=1;i<size;i++){
        for(int j=0; j<size-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] ,arr[j+1]);
            }
        }
       
    }
}

void printarray(int arr[] ,int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " " ; 
    }
}


int main(){

int arr[4]={23,43,53,3};

bubble(arr, 4);
printarray(arr,4);

}