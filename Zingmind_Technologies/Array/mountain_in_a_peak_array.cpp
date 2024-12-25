// #include<iostream>
// using namespace std;


// int mountain(int arr[] , int n){

//     int start = 0;
//     int end = n-1;
//     int mid = start + (end-start/2);

//     while (start<end)
//     {
//         /* code */ if(arr[mid] < arr[mid+1]){
//             start =mid +1;

//         }
//         else{
//             end = mid ; 
//         }

//         mid = start + (end - start / 2);
// }
//   return start;



// }
// int main(){

// int arr[5]={1,2,6,8,2};

// cout << "peak element in an mountain arry is = " << mountain(arr,5);

// }


#include<iostream>
using namespace std;

int mountain_in_an_array(int arr[] , int size  ){
    int start = 0;
    int end= size -1 ;
    int mid = start + (end - start/2);

    while (start<end)
{if(arr[mid] < arr[mid + 1]){
            start = mid + 1 ; 
        }
        else{
         end = mid ; 
        }
mid = start + (end - start)/2;} 
return start;    
}int main(){
int arr[4] = {23 ,45,64545,77};
int ar[6] = {56 , 424, 426 , 545, 4333, 8899};

int siz = 6;
int size = 4;
cout << "montain elemnt in an arrray = " << mountain_in_an_array(arr , size);
cout << "montain elemnt in an arrray = " << mountain_in_an_array(ar , siz);




}