#include <iostream>
#include <algorithm>
using namespace std;

void satya(int a[], int n)
{
    int mini = INT32_MAX;
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {

        // mini = min(mini, a[i]);
        // maxi = max(maxi, a[i]);

               //or

           if(a[i] < mini ){
            mini = a[i] ; 
           }

           if(a[i] > maxi){
            maxi = a[i] ; 
           }
    }
    cout << "differnec of maxinumm and minium elemnt i array is = " << maxi - mini;
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

satya(arr, size); 

}