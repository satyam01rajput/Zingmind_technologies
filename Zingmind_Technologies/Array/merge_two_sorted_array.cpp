// merged two vector array;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergetwo(vector<int> a, vector<int> b, vector<int> ans)
{

    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        /* code */ if (a[i] < b[j])
        {
            ans[k] = a[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < a.size())
    {
        ans[k++] = a[i++];
    }

    while (j < b.size())
    {
        ans[k++] = b[j++];
    }
}

void printarr(vector<int> final)
{
    for (int i : final)
    {
        cout << i << " ";
    }
}

void median(vector<int> med)
{



    sort(med.begin(), med.end());

    int size = med.size();
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    cout << med[mid];
    cout << endl;

    if (size % 2 == 0)
    {
        
        cout << "median of given array is : " << (med[mid] + med[mid + 1]) / 2 << " ";
    }
    else
        cout << "median of given array is : " << med[mid] << " ";

}

int main(){
    vector<int> first = {9, 5, 63, 50, 2};
    vector<int> sceond = {79, 100, 89};
    vector<int> satya(first.size() + sceond.size());

    mergetwo(first, sceond, satya);
    printarr(satya);
    cout << endl;

    sort(satya.begin(), satya.end());
    cout << "after sorting ";
    printarr(satya);
    cout << endl;

    median(satya);
}

// //uisng Normal array

// #include<iostream>
// using namespace std;

// void satya(int arr[] ,int n ,int arr1[], int m , int arr3[3]){

//        int i =0 , j=0, k= 0;
//        while (i<n && j<m)
//        {
//         /* code */if(arr[i]< arr1[j]){
//               arr3[k++]=arr[i++];
//         }
//         else{
//             arr3[k++]=arr1[j++];
//         }
//        }
//        while (i<n)
//        {
//         /* code */arr3[k++]=arr[i++];
//        }
//        while (j<m)
//        {
//         /* code */ arr3[k++]=arr1[j++];
//        }

// }

// void printarray(int arr[] ,int size){
//     for(int i=0;i<size;i++){
//         cout << arr[i] <<  " " ;
//     }
// }

// int main(){

// int arr1[4]={2,34,65,87};
// int arr2[5]={443,76,343,45,434};
// int arr3[9];

// satya(arr1, 4, arr2, 5 , arr3);
// printarray(arr3,9);

// cout <<endl;
// cout << sizeof(arr3)/sizeof(int);

// }
