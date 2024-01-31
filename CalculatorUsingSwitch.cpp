// The program enters two numbers from users and the operation that they want to perform on two numbers and outputs the result of that operation

#include <iostream>
using namespace std;

int main() {

    int a,b;
    cout<<"Enter two numbers separated by space: ";
    cin>>a>>b;

    char op;
    cout<<"Enter the operation that you want to perform on two entered numbers: ";
    cin >> op;

    switch (op){
        case '+': 
            cout<<"The sum of the numbers is: "<<a+b;
            break;
        case '-': 
            cout<<"The diference of the numbers is: "<<a-b; 
            break;
        case '*': 
            cout<<"The product of the numbers is: "<<a*b; 
            break;
        case '/': 
            cout<<"The division of the numbers give: "<<a/b; 
            break;
        default : 
            cout<<"Invalid opertor input!";
        }

    return 0;
}