#include <iostream>
using namespace std;

int main() {
    int no;
    int count = 0;

  
    cout << "Enter any number: ";
    cin >> no;

 
    if (no == 0) {
        count = 1;
    } else {
        while (no!= 0) {
            no/= 10;  // Remove the last digit
            count++;    
        }
    }

    cout << "Total number of digits:" << count << endl;

    return 0;
}