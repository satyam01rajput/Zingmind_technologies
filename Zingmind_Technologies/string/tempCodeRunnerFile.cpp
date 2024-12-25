// #include<iostream>
// #include<string>
// using namespace std;
// int lenght(char a[]){
//     int count = 0;
//     for(int i=0;a[i]!='\0'; i++){
//         count++;}
//     return  count ; 
// }
// void rever(char ch[] , int size){
//     int start = 0;
//     int end = size -1 ;
//     while (start<=end)
//     {  /* code */ swap(ch[start++] , ch[end--]);    }
// }


// char to_lower(char ch){
//     if('a' <= ch  &&  'z' >= ch){
//         return ch ; 
    
//     }
//     else{
//         char temp = ch -'A' + 'a' ; 
//      return temp;
//     }
// }


// bool pali(char ch[] , int size){
//     int start = 0;
//     int end = size -1 ;
//     while (start<=end)
//     {
//         /* code */ if(to_lower(ch[start])!= to_lower(ch[end])){
//         return 0 ;
//         }
//         else{
//             start++;
//             end-- ; 
//         }
//     }

// return 1; 
    
// }





// int main(){
 
//  char ch[400] ;
//  cin >> ch;


// int size =  lenght(ch);
// cout <<size ; 
 

//  cout << endl ;
// cout << ch ; 
// cout << endl ; 
// rever(ch ,size) ; 
// cout << ch ; 

// cout << endl; 

//  for(int i=0; ch[i]!='\0' ; i++){
//     cout << to_lower(ch[i]); 
//  }

//  cout << endl; 

// if( (pali(ch ,size) == 1 )){
//     cout << "'not" ;
// }
// else
// cout << "'pal";
//  }


// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;

// string rmeove(string s){
//     string temp = "";
//     for(int i=0;i<s.size();i++){

//         if(s[i]== ' ' ){
//             temp.push_back('@');
//              }
//              else
//              temp.push_back(s[i]);
//     }
//     return temp;
// }


// string remo(string s , string part){
//     while (s.length()!= 0 && s.find(part) < s.length())
//     {
//         /* code */s.erase(s.find(part) , s.length());
         
//     }
//     return s;
    

// }

// int main(){

// string s;
// getline(cin, s);
// string part;
// getline(cin , part);
// reverse(s.begin() ,s.end());
// cout << s;
// cout << endl;
// cout << rmeove(s);
// cout <<  endl;

// cout << "after removeing part = > " << remo(s, part);

// }


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin , s);

    
 transform(s.begin() , s.end(), s.begin(), ::toupper);
 cout << s;

    
}