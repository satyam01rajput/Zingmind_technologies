// // #include<iostream>
// // using namespace std;

// // int main(){

 
// //  int n;
// //  cin >> n;

// //  int a= 0 , b=1;
// //  cout << a << " " << b << " ";


// // for(int i=1;i<=n;i++){
// //     int digit  = a+b ;
// //     cout << digit  << " "; 

// //     a= b ;
// //     b =digit; 
// // }


// // }

// #include<iostream>
// using namespace std;

// int main(){

// int n ; 
// cin >> n ;



// int a = 0 , b =1 ; 
// int  sum = a+b ; 

// for(int i=3;i<=n;i++){
      
//       int digit  = a+b ; 
//       sum+=digit;
      
//        a= b;
//        b =digit;



// }
// cout <<  sum  << " " ; 

// }

// #include<iostream>
// using namespace std;

// int main(){

//       int n ; 
//       cin >> n ;

//       int a = 0  , b = 1  ; 
//        int sum = a+b; 

//  for(int i = 3; i<=n;i++){
//       int digit = a + b ;
//       sum += digit ;

//       a = b ;
//       b= digit;
//  }
//  cout << sum ; 

//   }


#include<iostream>
using namespace std;

int main(){

int n;
cin >> n ;

int a = 0 , b = 1;
int sum = a+ b; 
 
 for(int i=3; i<=n; i++){
      int digit  =  a+ b  ;
         sum += digit ; 

    a = b ;
    b = digit;   
 }

 cout << sum ; 


}