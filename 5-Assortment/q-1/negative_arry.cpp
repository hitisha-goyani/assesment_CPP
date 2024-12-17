#include <iostream>
using namespace std;

int main() {

int size;
cout<<"array size:";
cin>>size;
int a[size];

  cout<<"array's elements" <<endl;
for(int i=0;i<size;i++){
    cout<<"a["<<i<<"]=";
     cin>>a[i];

}

cout<<"Negative elements from an Array:"<<" ";
for(int i=0;i<size;i++){
    if(a[i]<0){
         
      cout<<a[i]<<",";  
    
    }   
    
}

  return 0;
}