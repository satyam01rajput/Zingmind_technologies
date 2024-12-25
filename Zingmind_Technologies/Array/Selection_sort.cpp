#include<iostream>
using namespace std;

int selection(int arr[] , int size){
    for(int i=0;i<size;i++){
        int mini = i ;
        for(int j=i+1; j<size;j++){
            if(arr[j] < arr[mini]){
                   mini = j;
            }
        }
        swap(arr[mini] , arr[i]);
    }
}

void printarray(int arr[] ,int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " " ; 
    }
}


int main(){

int arr[4]={23,43,53,3};

selection(arr, 4);
printarray(arr,4);

}