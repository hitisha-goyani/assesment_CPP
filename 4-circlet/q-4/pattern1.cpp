#include <iostream>
using namespace std;

int main() {
   

 
    for (int i = 5; i >= 1; i--) {
    
        for (int j = 0; j < 5 - i; j++) {
            cout << "  ";  
        }

        for (int j = 1; j <= i; j++) {
          
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } 
            else {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    return 0;
}