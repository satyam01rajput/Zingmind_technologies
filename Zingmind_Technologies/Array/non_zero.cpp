// #include <iostream>
// #include <vector>
// using namespace std;

// void nonzero(vector<int> satya)
// {
//     int non = 0;
//     for (int i = 0; i < satya.size(); i++)
//     {
//         if (satya[i] != 0)
//         {
//             swap(satya[i], satya[non]);
//             non++;
//         }
//     }
//     for (int i : satya)
//     {
//         cout << i << " ";
//     }
// }

// int main()
// {
//     vector<int> arr = {23, 0, 53, 0, 3};

//     nonzero(arr);
// }


//uisng normal array//


#include<iostream>
using namespace std;

void nonzero(int arr[] ,int size){
    int non =0 ;
    for(int i=0;i<size;i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[non]);
            non++;
        }
    }

}

void printarray(int arr[] ,int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " " ;
    }
}

int main(){

    int arr[5]={23,0,3,0,0};
    nonzero(arr,5);
    printarray(arr,5);
 


}