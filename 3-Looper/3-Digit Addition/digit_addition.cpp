#include <iostream>
using namespace std;

int main() {
    int no, first, last;

    
    cout << "Enter any number: ";
    cin >> no;
 
    last = no % 10;

    first = no;
    while (first >= 10) {
        first /= 10;
    }

    int sum = first+ last;
    cout << "The sum of the first and the last digit:" << sum << endl;

    return 0;
}