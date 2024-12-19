#include <iostream>
using namespace std;

float add(float num1, float num2) {
    return num1 + num2;
}


float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return num1 / num2;
}

int module(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return num1 % num2;
}


int main() {
    int choice;
    float num1, num2;
   
    do {
        
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 to exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program." << endl;
            break; 
        }

    
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

       
        switch (choice) {
            case 1:
                cout << "Addition of "<<num1<<" and "<<num2 <<" is "<< add(num1, num2) << endl;
                break;
            case 2:
                cout << "substraction of "<<num1<<" and "<<num2 <<" is " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "multiplication of " <<num1<<" and "<<num2 <<" is "<< multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "divion of "<<num1<<" and "<<num2 <<" is " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "module of "<<num1<<" and "<<num2 <<" is " << module(num1,num2) << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }

    } while (true);
    

    return 0;
}