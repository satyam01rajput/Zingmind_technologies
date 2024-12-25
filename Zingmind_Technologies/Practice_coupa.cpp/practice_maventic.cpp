// // // // // 



// // // // // explit decalrration

// // // // #include<iostream>
// // // // using namespace std;

// // // // int main(){
// // // // int a = 'A';
// // // // cout << a ; 

// // // // }


// // // #include<iostream>
// // // #include<math.h>
// // // using namespace std;


// // // void max(int arr[] , int size){
// // //     int mx= INT32_MIN;
// // //     for(int i=0;i<size;i++){
// // //       mx = max(arr[i] , mx);
// // //     }
// // //     cout << mx ; 
// // // }


// // // void saty(int arr[], int size){
// // //     int sum = 0;
// // //     for(int i=0;i<size;i++){
// // //         sum+=arr[i];
// // // }
// // // cout << sum ; }



// // // int  main(){
 
  
     
// // //     int arr[6]={3,4,5,6,7,8};
    
// // // max(arr,6);
      
// // // cout << endl;
// // //       saty(arr,6);
// // // }
// // #include<iostream>
// // using namespace std;

// // bool search(int arr[], int size, int key) {

// //     for( int i = 0; i<size; i++ ) {

// //         if( arr[i] == key) {
// //             return 1;
// //         }

// //     }
// //     return 0;
// // }


// // int main() {

// //     int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

// //     cout <<" Enter the element to search for " << endl; 
// //     int key;
// //     cin >> key;

    

// //     if(  search(arr, 10, key) ) {
// //         cout <<" Key is present "<< endl;
// //     }
// //     else{
// //         cout <<" Key is absent " << endl;
// //     }


    
// // }

// // #include<iostream>
// // using namespace std;

// // void swa(int arr[], int size){
// //     int start = 0;
// //     int end =size-1;
// //     while (start<=end)
// //     {
// //         /* code */swap(arr[start++] , arr[end--]);
// //     }

// //     for(int i=0;i<size;i++){
// //         cout << arr[i] ;
// //     }
    
// // }




// // int main(){

// //     int arr[5]={323,4535,32,232,2};

// //     swa(arr, 5);

// // }


// // #include<iostream>
// // #include<algorithm>
// // using namespace std;

// // // void swa(int arr[], int size){
// // //     int start = 0;
// // //     int end =size-1;
// // //     while (start<=end)
// // //     {
// // //         /* code */swap(arr[start++] , arr[end--]);
// // //     }

// // //     for(int i=0;i<size;i++){
// // //         cout << arr[i] << " ";
// // //     }
    
// // // }




// // int main(){

// //     int arr[5]={323,4535,32,232,2};
    
    
    
    
// //       for(int i=0;i<5;i++){
// //         cout << arr[i] << " ";
// //     }

// //     // swa(arr, 5);

// // }


// // #include<iostream>
// // using namespace std;

// // int main(){


// //     int arr[5]={3,4,4,3,1};

// //     int ans = 0 ; 
// //     for(int i=0;i<5;i++){
// //         ans^=arr[i];

// //     }
// //     cout << ans; 
// // }


// // #include<iostream>
// // using namespace std;
// // #include<algorithm>

// // int main(){

// //     int arr[5]={2,3,3,6,2};

// //     sort(arr, arr+5);

// //     for(int i=0;i<5;i++){
// //         if(arr[i] == arr[i-1]){
// //             cout << arr[i] << " ";
// //         }
        
// //             }
        
// //     }
    


// // #include<iostream>
// // using namespace std;

// // int main(){


// //     int arr[5]={1,3,4,5,7};
// //     int arr2[4]={3,443,9898};
     
// //     int i = 0 ,j = 0;

// //     while (i<5&& i<4)
// //     {
// //         /* code */if(arr[i] == arr2[j]){
// //             cout << arr[i];
// //          i++;
// //          j++ ;
// //         }
// //        else if(arr[i] < arr2[j]
// //         ){
// //             i++;
// //         }
// //         else
// //         j++; 
// //     }
    


// // }

// // #include<iostream>
// // using namespace std;

// // int main(){


// //     int target ; 
// //     cin >> target; 

// //     int arr[6]={3,3,4,2,6,0};
       
// //        for(int i=0;i<6;i++){
// //         for(int j =i+1;i<6;i++){
// //             if (    (arr[i]+arr[j]) ==  target ) {
// //                  cout << arr[i ]  << " " << arr[j] << " " ;
// //             }
// //         }
// //        }


// // }

// // #include<iostream>
// // using namespace std;

// // int main(){


// //     int arr[5]={1,0,0,1,0};

// //     int start =0;
// //     int end =  5-1;

// //     while (start<=end)
// //     {
// //         /* code */ if(arr[start]==0){
// //             start++;
// //         }
// //         if(arr[end] == 1){
// //             end--;
// //         }
       
// //        if(start <= end){
// //         swap(arr[start], arr[end]);
// //         start++;
// //         end--;
// //        }

// //     }

// //     for(int i=0;i<5;i++){
// //         cout << arr[i] << " " ;
// //     }
    

// // }

// // #include<iostream>
// // using namespace std;

// // int binary(int arr[],int size , int  key ){
// //     int start =0;
// //     int end =size-1 ;
// //     int mid = start + (end-start)/2;
// //     while (start<=end)
// //     {
// //         /* code */ if(arr[mid ] == key){
// //                        return mid;
// //         }
// //         if(key >  arr[mid]){
// //                end= mid-1 ;
// //         }


// //         if(key<arr[mid]){
// //                  start = mid+1;
// //         }
// //         mid = start + (end - start)/2;
// //     }
// //     return -1;

    

     
// // }



// // int main(){


// //     int arr[5]={34,23,22,21,2};

// //     int key;
// //     cin >> key ; 

    


 

// // }

// #include<iostream>
// #include<array>
// #include<vector>
// using namespace std;

// int main(){

// // array<int,5>satya={2,345,43,32};

// // vector<int>satya{434,32,34,32,32,233,543};

// // cout << satya.size();
// // satya.push_back(434);
// // cout<< satya.size();

// // cout << endl;
// // for(int i:satya){
// //     cout << i << " " ; 
// // }
// // satya.clear();
// // cout << endl ;
// // cout << satya.size();

// // cout <<endl;

// // cout << endl;
// // for(int i:satya){
// //     cout << i << " " ; 
// // }


// // vector<int>satya(5,6);
// // for(int i:satya){
// //     cout << i <<" " ;
// // }

// //     vector<int>s(satya);
// //     for(int i :s){
// //         cout << i  <<  " " ; 
// //     }


// // vector<int>satya{}




// } 



// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// vector<int>sata(vector<int>satya){
//     int start =0;
//     int end = satya.size()-1;
//     while (start<=end)
//      {
//         /* code */swap(satya[start++] , satya[end--]);
//     }
    
//         return satya;
// }


// void print(vector<int>ar){
//     for(int i:ar){
//         cout << i << " " ; 
//     }
// }

//     int main()
//     {
//         vector<int>sa{3,4,2,21,3};
//         vector<int>f = sata(sa);
//         print(f);


//         cout << endl;

//         reverse(f.begin(), f.end());
//         for(int i:f){
//             cout << i << " ";        }
//     }



 
// #include<iostream>
// using namespace std;
// #include<set>
// #include<algorithm>
// #include<vector>

// void merge(vector<int>&arr,vector<int>&arr2, vector<int>&arr3){
//     sort(arr.begin(),arr.end());
//     sort(arr2.begin(),arr2.end());


//     int i=0, k=0, j=0;
//     while (i<arr.size() && j< arr2.size())
//     {
//         /* code */ if(arr[i] < arr2[j]){
//             arr3[k++]=arr[i++];
//         }
//         else
//         arr3[k++] = arr2[j++];
//     }

//     while (i<arr.size())
//     {
//         /* code */ arr3[k++]=arr[i++];
//     }
//     while (j<arr2.size())
//     {
//         /* code */    arr3[k++] = arr2[j++];
//     }


// }





// void print(vector<int>&arr){

    
//     for(int i :arr){
//         cout << i <<" " ;
//     }
// }



// void memdia(vector<int>arr3){
//     int start = 0;
//     int end = arr3.size()-1;
//     int mid = start+(end-start)/2;
     
//     if(arr3.size()%2 == 0 ){
//         cout << "evenv cae = " << (arr3[mid] + arr3[mid+1] )/2;
//     }else
//     cout << "oddd = > " << arr3[mid] ;
// }




// int main(){

// // int arr[5]={54,32,2,32,43};
// // int arr2[3]={1,2,3};
// // int arr3[8];
// // sort(arr, arr+8);

// // merge(arr , 5, arr2 , 3 , arr3);
// // print(arr3 , 8);
// // cout << endl;
// // set<int>sat;
// // for(int i=0;i<8;i++){
// //     sat.insert(arr3[i]);
// // }

// // for(int i:sat){
// //     cout << i << " " ;
// // }

// vector<int>arr{32,4,567,87};
// vector<int>arr2{34,56,576,76};
// vector<int>arr3(arr);

// cout << arr.size();
// cout << endl;
// cout << arr2.size() << endl;
// cout << arr3.size() << endl; 
// cout << endl;


// merge(arr, arr2, arr3);
// print(arr3);
// cout << endl;

// memdia(arr3);


// }



#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>satya{2,0,0,2,1,3,0,5,0};

int mon = 0 ;
for(int j=0;j<satya.size();j++){
if(satya[j] != 0){
    swap(satya[j], satya[mon]);
    mon++;
    }

  
} 

  for(int i:satya){
    cout << i << " " ;
}


}