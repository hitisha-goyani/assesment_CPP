#include<iostream>

using namespace std;

int main(){

    char letter = 'a'; // Start with the letter 'a'

    do {
        cout << letter << ",";  // Print the current letter
        letter += 4;  //  skip 3 letters
    } while (letter <= 'z'); 

    cout << endl;  
    return 0;
}

    