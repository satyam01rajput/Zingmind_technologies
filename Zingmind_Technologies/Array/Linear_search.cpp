#include <iostream>
using namespace std;

int linear_Search(int a[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == k)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int size;
    cin >> size;

    int arr[1000];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << " which key you have to search = ";
    cin >> k;

    if (linear_Search(arr, size, k))
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is not present ";
    }
}