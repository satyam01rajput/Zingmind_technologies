#include<iostream>
#include<set>
using namespace std;


int main(){

int arr[5]={2,3,2,3,1};
int sum;
set<int>satya;

for(int i=0;i<5;i++){
     satya.insert(arr[i]);
    }

for(int i:satya){
        sum+=i;
          }
    cout <<"the sum of unique elemnt in an array is = " << sum ;
    
   
    
    



}