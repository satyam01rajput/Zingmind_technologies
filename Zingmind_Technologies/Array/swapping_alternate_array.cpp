#include <iostream>
using namespace std;

void swapalternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 3)
    {
        if (i + 2 < size)
        {
            swap(arr[i], arr[i + 2]);
        }
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[6] = {1, 3, 5, 7, 9, 10};

    cout << "Before Swapping = ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    //   int size;
    //     cin >> size;

    //     int arr[1000];
    //     for (int i = 0; i < size; i++)
    //     {
    //         cin >> arr[i];
    //     }

    cout << endl;
    swapalternate(arr, 6);

    printarray(arr, 6);
}