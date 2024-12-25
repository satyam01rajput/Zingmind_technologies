#include<iostream>
using namespace std;

int main(){



int n;
cin >> n;
int count;

int m = INT32_MAX;

while (n!=0)
{ 
      if(n>=m){
          cout << "number out of range " ;
          return 0;
      }
    /* code */n%=10;
  
           count++;
}
cout << count ;


}