#include <iostream>
#include <vector>
using namespace std;

vector<int> reve(vector<int> s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)

    {
       swap(s[start], s[end]);
        start++;
        end--;
    }

    return s;
int start = 0;

}

void printarr(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
}

int main()
{

    vector<int> arr = {12, 34, 5, 6, 4};

    vector<int> ans = reve(arr);

    printarr(ans);
}