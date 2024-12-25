#include<iostream>
#include<queue>
using  namespace std;

int main(){

priority_queue<int>satya;

int n;
cout << "how many element or alphabets you enter =" ;
cin >> n ;

for(int i=0; i<n; i++){
  
  string s;
  cin >> s;
  satya.push(s);
  }
cout << "final result and top most elemnt in stack is= " ; 
cout << satya.top();
cout << "all elemnt in a stack = " ; 
cout << endl ; 

while(!satya.empty()){
    cout << satya.top() << " ";
    satya.pop();

}


}

