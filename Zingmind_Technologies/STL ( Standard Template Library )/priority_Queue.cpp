#include<iostream>
#include<queue>
using namespace std;

int main(){

// priority_queue<int>satya; // max heap

priority_queue<int,vector<int>,greater<int>>satya;


int n;
cin >> n;

for(int i=0;i<n;i++){
    int s;
    cin >>s;
    
    satya.push(s);
}

while(!satya.empty()){
    cout << satya.top() << " " ;
    satya.pop();
}

}