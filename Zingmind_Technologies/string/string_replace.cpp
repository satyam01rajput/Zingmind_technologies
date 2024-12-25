#include<iostream>
#include<algorithm>
using namespace std;

string replae(string s){
    string temp;
    for(int i=0;i<s.size();i++ ){
        if(s[i] == ' '){
            temp.push_back('@'); }
        else{
            temp.push_back(s[i]); }
    }return temp;
}
int main(){

string s;
getline(cin , s);
cout << endl;
cout << replae(s);

    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); cout << s;
    cout <<endl;

    transform(s.begin(), s.end() , s.begin() , :: toupper);
    cout <<s; 


}