#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    cout << s;
    cout <<endl;

    transform(s.begin(), s.end() , s.begin() , :: toupper);
    cout <<s; 
}