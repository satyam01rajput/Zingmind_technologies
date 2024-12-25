
// // gcd of two number

// #include<iostream>
// using namespace std;

// int gcd(int a , int b){
//  if(a==0){
//     return b;
//  }
//  if(b==0){
//     return a;
//  }
//  while (a!=b)
//  {
//     /* code */ if(a>b){
//                a-=b;
//     }
//     else
//     b-=a;

//  }

// return a;

// }

// int main(){

// int a;
// cin >> a;

// cout << endl;
// int b;
// cin >> b;

// cout << gcd(a,b);
// }

// #include<iostream>
// using namespace std;

// int main(){

// int n;
// cin >> n;

// // for(int i=1;i<=n; i+=2){
// //    cout << i << " " ;
// // }

//  if(n%2==0){
//       cout << "its a even ";

//  }
// //  else
//  cout << "odd" ;

// }

// // check its i prime or not
// #include<iostream>
// using  namespace std;

// int prine_check(int a){

//   for(int i=2; i<a; i++){
//    if(a%i==0){
//          return 0;
//    }
// }
//    return 1;

// }

// int main(){

// int n;
// cin >> n;

// cout <<prine_check(n);

// }

// #include<iostream>
// using namespace std;

// int main(){

// int n;
// cin >> n;

// for(int i=1;i<=n;i++){
//    for(int j=1; j<=n; j++){
//       cout << "*" << " ";
//    }
// cout << endl;
// }

// }

// #include<iostream>
// using namespace std;

// int main(){

// int n;
// cin >> n;

// for(int i=n; i>=1 ; i--){
//   for(int j=n; j>=1;j--){
//    cout << j << " ";
//   }
// cout << endl;
// }
// }


// //triangle print 
// #include <iostream>
// using namespace std;

// int main()
// {

//    int n;
//    cin >> n;

//    int count = 1;

//    for (int i = 1; i<= n; i++)
//    {

//       for (int space=n-i; space; space--)
//       {
//            cout << " " ;
//       }

//       for (int j = 1; j <= i; j++)
//       {
//      cout << "*" <<  " ";
//       }
//       cout << endl;
//    }
// }


//pre_increment post_increment

#include<iostream>
using namespace std;

int main(){

int i =1;
++i;


}