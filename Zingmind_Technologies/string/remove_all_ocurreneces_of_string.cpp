#include <iostream>
using namespace std;

void remove_all_occurences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    cout << s;
}

int main()
{

    string s;
    getline(cin, s);

    string part;
    cout << " whihc part you have to delete ";
    getline(cin, part);

    remove_all_occurences(s, part);
}
