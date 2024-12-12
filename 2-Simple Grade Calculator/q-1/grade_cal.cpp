#include<iostream>

using namespace std;

int main(){

int marks;
char grade;
cout << "marks: ";
cin >>marks;


if(marks > 90){
    grade = 'A';
    cout << "your grade is: " << grade<<endl;
}
else if(marks > 80){
    grade = 'B';
    cout << "your grade is: " << grade<<endl;
}
else if(marks > 70){
    grade = 'c';
    cout << "your grade is: " << grade<<endl;
}
else if(marks > 60){
    grade = 'D';
    cout << "your grade is: " << grade<<endl;
}
else if(marks > 50){
    grade = 'E';
    cout << "your grade is: " << grade<<endl;
}
else{
    grade = 'F';
    cout << "your grade is: " << grade<<endl;
}

switch (grade)
{
case 'A':
    cout << "Excellent work!"<<endl;
    break;
case 'B':
    cout << "well done"<<endl;
    break;
case 'C':
    cout << "good  work!"<<endl;
    break;
case 'D':
    cout << "You passed, but you could do better.!"<<endl;
    break;

default:

    cout << "Sorry, you failed."<<endl;
    break;
}






if(grade=='A' || grade=='B' || grade== 'C' || grade == 'D'){
    cout << "Congratulations! You are eligible for the next level";
}
else {
    cout<< "Please try again next time";
}



    return 0;
}