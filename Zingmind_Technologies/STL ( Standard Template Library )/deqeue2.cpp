#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<string>satya;

int n;
cout << "how many name you have to insert = " ;
cin >> n;

for (int i=0;i<n;i++){
    
    string s;
    cin >> s;
    satya.push_back(s);
}
 
 for(string i:satya){
    cout << i << " " ;
 }

for (int i=0;i<n;i++){
    
    string s;
    cin >> s;
    satya.push_front(s);
}

 for(string i:satya){
    cout << i << " " ;
 }

}