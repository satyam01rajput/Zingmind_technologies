#include <iostream>
using namespace std;

int First(int arr[], int size, int k)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start / 2);
    int ans;
    while (start <= end)
    {
        /* code */ if (arr[mid] == k)
        {

            ans = mid;
            end = mid - 1;
        }

        if (k > arr[mid])
        {
            start = mid + 1;
        }

        if (k < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start / 2);
    }
    return ans;
}

int Second(int arr[], int size, int k)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start / 2);
    int ans;
    while (start <= end)
    {
        /* code */ if (arr[mid] == k)
        {

            ans = mid;
            start = mid + 1;
        }

        if (k > arr[mid])
        {
            start = mid + 1;
        }

        if (k < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start / 2);
    }
    return ans;
}

int main()
{

    int arr[5] = {12, 12, 12, 45, 45};

    int n;
    cout << "which elemnt postion you are finding =";
    cin >> n;
    cout << endl;

    cout << "first positon of elemnt presnt in an array = " << First(arr, 5, n);

    cout << endl;

    cout << "last positon of elemnt presnt in an array = " << Second(arr, 5, n);

    cout << endl;

    cout << "total number of occurenece of number = " << (Second(arr, 5, n) - First(arr, 5, n) + 1);
}