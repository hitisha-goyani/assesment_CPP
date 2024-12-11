#include <iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter Your score: ";
    cin>>score;
    if (score >= 80){
        cout<<"Your Grade is A."<<" "<<"Congratulations! You are eligible for the next level.";
    }
    else if (score >= 70){
        cout<<"Your Grade is B."<<" "<<"Congratulations! You are eligible for the next level.";
    }
    else if (score >= 60){
        cout<<"Your Grade is C."<<" "<<"Congratulations! You are eligible for the next level.";
    }
    else if (score >= 40){
        cout<<"Your Grade is D."<<" "<<"Congratulations! You are eligible for the next level.";
    }
    
    else{
        cout<<"Your Grade is F."<<" "<<"Please try again next time";
    }
    return 0;
}