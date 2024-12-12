#include <iostream>
using namespace std;

int main() {
    // // Number of rows in the pyramid
    // int n = 5;

    // // Outer loop to control the number of rows (from 1 to n)
    // for (int i = 1; i <= n; i++) {
    //     // Print spaces for the left side of the pyramid
    //     for (int j = 1; j <= n - i; j++) {
    //         cout << "  ";  // Each space is two characters for proper alignment
    //     }

    //     // Print the decreasing numbers starting from n-i+1
    //     for (int j = n - i + 1; j <= n; j++) {
    //         cout << j << " ";  // Print the increasing numbers from n-i+1 to n
    //     }

    //     // Print the decreasing numbers after the peak (excluding the peak itself)
    //     for (int j = n - 1; j >= n - i + 1; j--) {
    //         cout << j << " ";  // Print the decreasing numbers from n-1 to n-i+1
    //     }

    //     // Move to the next line after each row
    //     cout << endl;
    // }
 for(int i=1;i<=5;i++){
	
	        for(int k=i;k<=5;k++){
	            cout<<" ";
	        }
	        for(int j=1;j<=i;j++){
	             cout<<j<<" ";
	
	        }
	         cout<<endl;
	    }
	    cout<<endl;




    return 0;
}
