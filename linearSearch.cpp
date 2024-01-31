/*
implementation of the linear search algorithm with time complexity = O(n)
*/

#include <iostream>
using namespace std;

/*
Function (inputArray) that takes array (initialized array) and number of elements in that array (n)
as parameters to input its values index by index from users
*/
void inputArray(int arr[], int n){
    cout<<"Enters the integers for array and press enter after each entry: ";
    for (int i=0; i<n ; i++){
        cin>>arr[i];
    }
}

/*
Function (outputArray) takes array and number of elements as paraments to output 
its elelments on console separated by space
*/
void outputArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

/*
This is the linearSearch function (Time Complexity = O(n)
takes three parameters - array, length of array and integer to find as
parameters and return the index of that integer in array (first occurence)
otherwise returns -1 (if integer not present in the array)
*/
int linearSearch(int arr[] , int n, int x){
     for (int i=0;i<n;i++){
        if (arr[i] == x){
            cout<<"Following is the index of the entered element: ";
            return i;
        }
            
     }
     return -1;
}

int main() {
    int n,x;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];

    inputArray(arr,n);

    cout<<"Enter the element that you want to search: ";
    cin>>x;
    
    cout<<linearSearch(arr,n,x);

    return 0;
}