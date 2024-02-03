// Euclid algorithm to find the Greatest Common Divisor (GCD) of two numbers

#include <iostream>
using namespace std;

int euclidGCD(int n, int m){
    int remainder=1;
    while (remainder>0){
        remainder = n%m;
        n = m;
        m = remainder;
    }
    return n;
}

int main(){
    int n1,n2;
    cout<<"Enter first number: "; cin>>n1;
    cout<<"Enter second number: "; cin>>n2;

    cout<<"The Greatest Common Divisor (GCD) of the two numbers is: "<<euclidGCD(n1,n2);

    return 0;
}