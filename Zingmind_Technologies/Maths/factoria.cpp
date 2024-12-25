// #include<iostream>
// using namespace std;


// int factorial(int n){
//       int product =1 ;
//       for(int i=1;i<=n;i++){
//          product*=i;

//       }
//       return product;
// }

// int facto(int n , int k){
//       int fact1 = factorial(n);
//       int fact2 = factorial(k) * factorial(n-k);
//       int ans = fact1/fact2;
//       return ans;
// }

// int main(){

// int n;
// cin >> n ;

// int k;
// cin >> k;


// cout << "factorial of given " << n  << "and" <<  k <<  "is = "  << facto(n,k);

// }

// #include<iostream>
// using namespace std;
// #include<string>
// #include<vector>

// int factorial(int n){
//       int ans = 1;
//       for(int i =1;i<=n;i++){
//             ans*=i;

//       }
//       return  ans ; 
// }

// int fact(int a , int b){
//       int f = factorial(a);
//       int  s = factorial(b)  * factorial(a-b);
//       int fina = f/s;
//     return fina ; 

// }
// int main(){
// int a,b;
// cin >> a >> b ;

// cout << fact(a,b);

// }

#include<iostream>
using namespace std;


int facto(int a){
      int p = 1;
for(int i=1;i<=a;i++ ){
 p*=i; }
      return p;
}

int main(){
 
 int n;
 cin >> n;

 int r;
 cin >> r;

cout << facto(n);
}