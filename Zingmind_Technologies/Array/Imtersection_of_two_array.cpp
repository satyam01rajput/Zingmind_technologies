#include<iostream>
#include<algorithm>

using namespace std;

int main(){
 
 int arr[5]={2,5,43,3,7};
 int arr2[4]={2,3,5,7};

 sort(arr, arr+6);
 sort(arr, arr+4);

 int i =0 ; 
 int j =0 ;

 while (i<5 && j<4)
 {
    /* code */if(arr[i]== arr[j]){
        cout << arr[i] << " " ;
        i++;
        j++;
    }
else if(arr[i]<arr[j]){
    i++;
}
else{
    j++;
}

 }
 

}