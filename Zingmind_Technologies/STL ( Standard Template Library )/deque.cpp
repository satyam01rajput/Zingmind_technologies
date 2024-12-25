#include<iostream>
#include<deque>
using namespace std;

int main(){
 
 deque<int>satya;
satya.push_back(5);
satya.push_front(7);
satya.push_front(34);
satya.push_back(3457);


// for(int i:satya){
//     cout << i << " ";
// }

// satya.pop_front();
// cout <<endl;
// cout <<satya.size();
// cout << endl;

satya.erase(satya.begin()+2, satya.end());

for(int i:satya){
    cout << i << " ";
}



}