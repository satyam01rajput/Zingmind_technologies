#include<iostream>
#include<algorithm>
using namespace std;


  char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
    return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
  }

int check_palindrome( string s , int size){
    int start = 0;
    int end = size -1 ;
    while (start<=end)
    {
        /* code */ if(  tolowercase(s[start]) !=  tolowercase( s[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
    
}

int main(){

string s;
getline(cin,s); 
int size =  s.length();

if(check_palindrome(s,size)){
      cout << "its a palindrome";
}
else{
    cout << " its not a palindrome string " ; 
}
cout <<endl;

// transform(s.begin() , s.end() , s.begin(), ::toupper);
// cout << s ; 

// cout <<endl;

// transform(s.begin() , s.end() , s.begin(), ::tolower);

// cout << s; 

// cout <<endl;

// cout << toupper(97);



}
