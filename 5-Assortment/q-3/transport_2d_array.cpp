#include<iostream>

using namespace std;

int main(){


    int row,column;
    cout << "Enter the array's row & column size: ";
    cin >> row >> column;

    
    int a[row][column];

 
 cout << "Enter array's elements:\n";

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            
            cout<<"a["<<i<<"]"<<"["<<j<<"]=";
            cin>>a[i][j];
        }
    }
    cout<<"original matrix:"<<endl;
        for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"Transpose matrix:"<<endl;
        for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            
            cout<<a[j][i]<<" ";
        }cout<<endl;
    }
    
    
    return 0;
}