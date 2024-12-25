#include<iostream>
using namespace std;
int main(){



int row;
cout << "enter number of rowea= ";
cin >> row ;
int col;
cout <<  " enter couumn  = ";
cin >> col; 
int arr1[row][col];
int arr2[row][col];

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin >> arr1[i][j]  ;
}
}

cout << endl;
cout << "enter other array = " ;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin >> arr2[i][j]   ;
}


}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout <<  arr2[i][j]  << " " ;
}
cout << endl; 
}
for(int i =0 ;i<row;i++){
    for(int j =0;j<col ;j++){
        cout << arr1[i][j];
    }

    cout << endl; 
}


cout << endl; 
cout << endl ;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout << arr1[i][j] + arr2[i][j]  << " " ;
    }
    cout << endl; 
}

}


