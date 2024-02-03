/*
The Sieve Of Eratosthenes Algorithm for finding all the prime numbers withing the given range
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // Taking the input of range from the user
    int n;
    cout<<"Enter the range for finding the prime numbers: ";
    cin>>n;

    // Initializing the array of size n-1, i.e. one less than the range
    int arr[n-1];

    // creating an array of numbers from 2 to that range from which we have to 
    // find the prime numbers
    for (int i=0;i<n-1;i++){
        arr[i] = i+2;
    }

    /*
    Here is the actual sieve of eratosthenes algorithm implementation
    every non-prime number's value is given value = 0
    */
    for (int i=2;i<=sqrt(n);i++){
        if (arr[i-2] != 0){
            for (int j=i*i-2;j<n-1;j+=i){
                arr[j] = 0;
            }
        }
    }

    // printing out all the prime numbers from that range
    // which are left in the as non zero entires
    for(int i=0;i<n-1;i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}