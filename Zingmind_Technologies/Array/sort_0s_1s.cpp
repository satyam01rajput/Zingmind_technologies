#include<iostream>
using namespace std;


void sorte(int arr[] , int n) {

    int start =0 ;
    int end = n-1;

    while (start<end)
    {
       if(arr[start]==0){
            start++;
        }
        if(arr[end]==1){
            end--;
        }

        if(start<end){
            swap(arr[start], arr[end]);
            start++;
            end-- ; 
        }
    }
    


}


void printarray(int arr[], int size){
     for(int i=0;i<size;i++){
        cout  << arr[i] << " " ; 
     }
}


int main(){

int arr[6]={1,0,0,1,0,1};


sorte(arr,6);
printarray(arr,6);



}