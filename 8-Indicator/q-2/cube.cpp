#include <iostream>
using namespace std;


void cube(int* element) {
    *element = (*element) * (*element) * (*element); 
}

int main() {
 
       int m, n;
    
    
    cout << "Enter array's size: ";
    cin >> m>>n;  
    
    int arr[m][n];
    
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }


    
    int* ptr;


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ptr = &arr[i][j]; 
            cube(ptr); 
        }
    }


    cout << "Cubes of the elements in the array are:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}
