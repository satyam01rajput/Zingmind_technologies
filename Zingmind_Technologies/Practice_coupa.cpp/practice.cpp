// // #include<iostream>
// // #include<algorithm>
// // using namespace std;

// // int main(){


// // int n;
// // cout << "declaring the size of n " ; 
// // cin >> n ;
// // int ans= 0 ;

// // int arr[36643];
// // for(int i=0;i<n;i++){
// //     cin >> arr[i] ;
// //  ans^=arr[i];

// // }
// // cout << ans; 

// // // cout << sum ; 

// // // sort(arr , arr+n) ;


// // // cout << endl; 
// // // for(int i=0;i<n;i++){
// // //     cout <<  arr[i]  << " " ;
// // // }

// // sort(arr,arr+n) ;


// // for(int i=0;i<n;i++){
// //     int m = 
// //     if(arr[i]==arr[i+1]){
// //         cout << arr[i]  << " " ; 
// //     }
// // }




// // }


// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main(){


// char ch[400];
// cin >> ch;

// cout << ch;

// cout << endl;
//   int size = sizeof(ch)/sizeof(char);
//   cout << size;



// }


#include<iostream>
using namespace std;


int facto(int n){
    int a = 1;
    for(int i =1 ;i<=n;i++){
        a*=i;
    } 
     return  a;

}

int fac(int a, int b){
    int f = facto(a);
    int s = facto(b) * facto(a-b);
    int fin = f/s;
    return fin; 
}

int main(){

int n;
cin >> n;

int r;
cin >> r ; 

cout << fac(n,r);


}