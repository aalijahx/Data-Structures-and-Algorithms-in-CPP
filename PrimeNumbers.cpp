// The program will input two numbers from user and will print all the prime numbers between those numbers

#include <iostream>
#include <cmath>
using namespace std;

void isPrime(int num){
    // isPrime() function takes one parameter and out it if its a prime number otherwise don't do anything
    bool check = 0 ;
    for (int i=2 ; i<= sqrt(num) ; i++){
        if (num%i==0){
            check = 1 ;
        }
    }
    if (check == 0 && num != 1) {
        cout<<num<<endl;
    }
}

int main() {
    int n1,n2;
    cout<<"Enter the number one (lower range): ";
    cin>>n1;
    cout<<"Enter the number two (upper range): ";
    cin>>n2;
    for (int i = n1 ; i <= n2 ; i++){
        isPrime(i);
    }
    return 0;
}