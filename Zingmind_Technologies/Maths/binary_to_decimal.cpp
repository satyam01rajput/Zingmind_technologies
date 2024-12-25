// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int d = 0;
//     int i = 0;

//     while (n != 0)
//     {
//         d = d + (n % 10) * pow(2, i);
//         n /= 10;
//         i++;
//     }
//     cout << d;
// }


#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

int main(){
int n;
cin >> n;

int d = 0 ;
int i =0 ;

while (n!=0)
{
    /* code */ 
    d= d+(n%10) * pow(2,i);
    n/=10;
    i++;
         
}
cout << d; 


}