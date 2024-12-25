// #include<iostream>
// using namespace std;


// int binarysearch(int arr[] , int size , int k) {

//     int start = 0 ;
//     int end = size -1;
//     int mid = start + (end- start/2);
//     while (start<=end)
//     {
//         /* code */if(arr[mid] == k) {
//      return mid;

//         }

//         if(k >arr[mid]){
//                  start = mid + 1;
//         }

//         if(k <arr[mid]){
//             end = mid -1 ;
//         }
//         mid = start + (end-start/2);
//     }
//     return -1;
// }


// int main(){

// int arr[6]={1,2,67,88,444,898};
// int n;
// cin >> n;
// cout << binarysearch(arr, 6 , n ); 

// }


// // #include<iostream>
// // using namespace std;


// // int binary_search(int arr[] ,int size , int key){
// //     int  start =0;
// //     int end = size -1 ;
// //      int mid = start + (end - start)/2;

// //      while (start<=end)
// //      {
// //        if(arr[mid] == key){
// //         return mid;
// //        }
// //        if(key > arr[mid]){
// //         start = mid +1 ;
// //        }
// //        if( key < arr[mid] ){
// //         end = mid -1 ; 
// //        }
// //        mid = start + (end-start)/2;
// //      }
// //      return -1;
     
// // }



// // int main(){
// //     int size ; 
// //     cout << "declaring the size of an array";
// //     cin >> size; 

// // int arr[500];

// // for(int i=0;i<size;i++){
// //     cin >> arr[i] ; 

// // }

// // int k ;
// // cout << "enter the key what you haev to serch in a binary search array = " ;
// // cin >> k ; 

// // for(int i=0;i<size;i++){
// //     cout << arr[i]  << " " ;

// // }
// // cout << endl; 
// // cout << binary_search(arr , k , size) ;

// // }

#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int k){

 int start = 0 ;
 int end = size -1;
 int mid = start + (end - start)/2;

 while (start<=end)
 {
    /* code */if(arr[mid] == k ){
                 return mid;
    }

    if(k > arr[mid]){
        start = mid + 1 ; 
    }
    if(k<arr[mid]){
        end = mid -1 ; 
    }
    mid = start + end - start /2 ; 
 }
 return -1;
 


}


int main(){


int arr[6] = {2,3,4,5,67};
int size = 6;
int k ;
cin >> k ;


cout << "key is present at index " << binary_search(arr , size , k);

}