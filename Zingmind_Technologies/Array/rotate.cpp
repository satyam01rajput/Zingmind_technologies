// #include<iostream>
// #include<vector>
// using namespace std;


// void rotate(vector<int>arr ,int k ){
    
//     vector<int>n(arr.size());
//     for(int i=0;i<arr.size(); i++ ){
//         n[(i+k)%arr.size()] = arr[i] ;
//     }
//     arr = n ;
//     for(int i:arr){
//         cout << i << ' '; 
//     }
   
// }

// int main(){

//     vector<int>satya={4,65,7,43,2};
//     int k;
//     cout << "how much times you rotate an array = ";
//     cin >> k ;

//   rotate(satya , k);

// }



#include<iostream>
using namespace std;

void rotate(int arr[] ,int size ,int  k){
    int arr1[size];
    for(int i=0;i<size;i++){
        arr1[(i+k)% size] = arr[i];
    }
    arr = arr1;
    for(int i=0;i<size;i++){
        cout << arr[i] << " " ; 
    }
}

int main(){

int arr[5]={32,34,5,343,4};
int k;
cout <<"how much time you rotate an aarray = " ;
cin >> k; 

rotate(arr,5, k );
 

}