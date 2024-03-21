// Task 2
// internee name - Krishna Ramkumar Sahu
//Building a sinple Calculator


#include <iostream>
using namespace std;

int main(){
    cout<<"Hello This is Calculator"<< endl;
    double a,b;
    char operate;

    cout<<"Enter your first number: "<<endl;
    cin>>a;
    cout<<"Enter your second number: "<<endl;
    cin>>b;

    cout<<"Select operation(+,-,*,/)"<< endl;
    cin>>operate;
    
    
    
    switch (operate)
    {
     case '+':
        cout<<"ANSWER : "<<a+b;
        break;
     case '-':
        cout<<"ANSWER is : "<<a-b;
        break;
     case '*':
        cout<<"ANSWER is : "<<a*b;
        break;
     case '/':
        cout<<"ANSWER is : "<<a/b;
        break;
     
     default:
        cout<<"Enter right operator";
    }

   return 0;

    

}