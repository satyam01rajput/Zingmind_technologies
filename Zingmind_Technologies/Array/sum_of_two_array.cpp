#include<iostream>
using namespace std;


void add_two_array(int arr[] , int arr1[] ,int arr2[], int size){
    for(int i=0;i<size;i++){
        arr2[i] = arr1[i] +arr[i];
    }
}

void printarray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout << arr[i] ;
    }
}

int main(){

    int arr[3]={1,2,4};
    int arr1[3]={2,3,5};
    int arr2[3];

    add_two_array(arr, arr1, arr2,3);
    printarray(arr2,3);

  
}