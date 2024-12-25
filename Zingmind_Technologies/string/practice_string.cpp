#include<iostream>
#include<cstring>
using namespace std;

int cha (char ch[]){
    int count =0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}


int main(){

char ch[12];
cin >> ch ;

 int size  = cha(ch);

 cout << size; 


}