#include<iostream>
#include<vector>
using namespace std;



int main(){

vector<int>sat;
cout << sat.capacity();
sat.push_back(45);
cout << sat.capacity();
sat.push_back(45);
cout << sat.capacity();
sat.push_back(45);
cout << sat.capacity();
cout <<endl;
cout << sat.size();
cout << endl;

for(int i:sat){
    cout << i << " " ;
}

}