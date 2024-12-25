#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

vector<int>satya;

int n;
cin >> n;

for(int i=0;i<n;i++){
int k;
cin >> k ;
satya.push_back(k);
}

for(int i:satya){
    cout << i << " " ; 
}
cout << endl;

sort(satya.begin() , satya.end());

for(int i:satya){
    cout << i << " " ; 
}
cout << endl;

// cout << binary_search(satya.begin(), satya.end(),43);
// cout <<endl;

// cout << upper_bound(satya.begin(), satya.end() , 32)-satya.begin() ; 

 rotate(satya.begin() , satya.begin()+2 , satya.end() );

for(int i:satya){
    cout << i << " " ; 
}
}