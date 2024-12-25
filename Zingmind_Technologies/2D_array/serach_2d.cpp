// // #include<iostream>
// // using namespace std;


// // bool saty(int arr[][4] , int target , int row ,int col ){
// //     for(int i=0;i<row;i++){
// //         for(int j=0;j<col;j++){
// //                   if(arr[i][j] == target);
// //                   return 1; 
// //         }
// //           if(target == 0 ){
// //             return 0;
// //           }
// // }
// //     return 0; 


// // }

// // int main(){


// //     int arr[3][4]={12,3,4,5,6,7,3,34,54, 23, 313 ,32};

// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             cout << arr[i][j] << " " ; 
// //         }
// //         cout << endl; 
// //     }

// //     cout << endl; 

// //     int target ;
// //     cin >> target ;

// //     if(saty(arr , target ,  3 , 4) ){
// //         cout << " ellemnt is presnt " ; 
// //     }
    
// //     else
// //     cout <<  " elemnt is not prsesent " ; 
    
    
// //     }



// #include<iostream>
// using namespace std;

// void satyam(int arr[] ,int size , int k){
//     // for(int i = 0; i<size; i+=k){
//     //     if(arr[i] < arr[i+k-1]){
//     //         swap(arr[i] , arr[i+k-1]);
//     //         k--;

//     //     }
//     // }

//     int start = 0;
//     int end = k-1;
//     int last_end = size -1 ;

//     while (start<=end)
//     {
//         /* code */ swap(arr[start]  , arr[end]);
//                      start++;
//                      end-- ; 
//     }
//     while (k<=last_end)
//     {
//         /* code */swap(arr[k++] , arr[last_end--]);
//     }
    
    

// }

// void print(int arr[] , int size){
//     for(int i=0;i<size;i++){
//         cout << arr[i] << " " ;
//     }
// }


// int  main(){
//     int size ;
//     cout << " enter the size of an array = ";
//     cin >> size;
// int arr[100000];

// for(int i=0;i<size;i++){
//     cin >>  arr[i] ; 

// }



// cout << endl; 

// for(int i=0;i<size;i++){
//     cout <<   arr[i]  << " "; 

// }

// int k ;
// cout << "enter target =" ;
// cin >> k ;


// cout << endl;


//  satyam(arr , size , k) ; 
//  print(arr, size);
// }



// #include<iostream>
// using namespace std;

// int main(){
// int arr[5]={1,2,3,4,5};
// int k;
// cin >> k;

// int start = 0;
// int end = k-1;
// int fin_end = 5-1;

// while (start<=end)
// {
//     /* code */ swap(arr[start++] , arr[end--]);
// }
// while (k<=fin_end)
// {
//     /* code */swap(arr[k++] , arr[fin_end--]);
// }

// for(int i=0;i<5;i++){
//     cout << arr[i] << " " ;
// }
// }



#include<iostream>
using namespace std;


int main(){

int size;
cin >> size;

int arr[size];
for(int i=0;i<size;i++){
    cin >>  arr[i] ; 
}

cout << endl; 

for(int i=0;i<size;i++){
    cout <<   arr[i] << " " ; 
}



}