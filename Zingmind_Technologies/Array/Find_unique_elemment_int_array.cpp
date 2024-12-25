#include<iostream>
using namespace std;

int main(){

int arr[5]={1,2,3,1,2};

int ans = 0;

for(int i=0;i<5;i++){
    ans^=arr[i];
}
cout << ans;

}