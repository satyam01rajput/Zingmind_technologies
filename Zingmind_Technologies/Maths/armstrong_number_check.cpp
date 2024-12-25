// // #include<iostream>
// // #include<math.h>
// // using namespace std;

// // int main(){

// //     int n;
// //     cin >> n;

// // int reserve = n ;
// //     int ans = 0 ;

// //     while (n!=0)
// //     {
// //         /* code */int digit = n%10;
// //             ans += pow(digit,3);
// //             n/=10;

// //     }
// //     if(reserve == ans ){
// //         cout << "given number is a armstrong number ";
// //     }
// //     else{
// //         cout << "its not a armstrong number " ; 
// //     }
    

// // }


// #include<iostream>
// using namespace std;
// #include<math.h>

// int main(){
// int n ;
// cout << "enter a number";
// cin >> n;
// int o = n ;
// int ans;

// while (n!=0)
// {
//     /* code */ int digit = n%10;
//          ans += pow(digit , 3);
//          n/=10;
// }
// if(ans == o){
//     cout << "its an armstrong numbre" ;
// }
// else
// cout << "no a rm ";
// }


//palindrome

#include<iostream>
using namespace std;

int main(){


    int n;
    cin >> n;

    int original = n ;
    int ans =0;

    while (n!=0)
    {
        /* code */  int d = n%10;
               ans = (ans*10) + d;
               n/=10;
    }
    if(ans == original){
        cout << "palindorem";
    }
    else
    cout << "not";
    
}