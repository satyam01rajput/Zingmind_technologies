#include<iostream>
using namespace std;

int main(){



    int n;
    cout << "enter the first number = " ;
    cin >> n ;

    int k ;
    cout << "enter the second numbeer= " ;
    cin >> k ;

    char ch;
    cout << "pleaaease enetr which opwertaion you have to perform = "; 
    cin >> ch ;

    switch (ch)
    {
    case '+': cout << "given number of addition " << n << "and" << k << " is = " << (n+k);
    break;
     case '-': cout << "given number of subtraction " << n << "and" << k << " is = " << (n-k);
     break;
    case '*': cout << "given number of multipliacfciton " << n << "and" << k << " is = " << (n*k);
    break;
    case '/': cout << "given number of Division" << n << "and" << k << " is = " << (n/k);
    break;
   
    default:
    cout << "enter valid oeprtionperfdrom "; 
        break;
    }
}