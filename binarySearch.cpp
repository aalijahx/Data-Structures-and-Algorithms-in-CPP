#include <iostream>
using namespace std;

/*
Function (inputArray) that takes array (initialized array) and number of elements in that array (n)
as parameters to input its values index by index from users
*/
void inputArray(int arr[], int n){
    cout<<"Enters the integers in ascending for sorted array and press enter after each entry: ";
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

int binarySearch(int arr[] , int n, int x){
    int s = 0;
    int e = n;
    int mid;
     while (s<=e){
        mid = (s+e)/2;
        if (arr[mid] == x){
            cout<<"Following is the index of the entered element: ";
            return mid;
        }
        else if (arr[mid] > x){
            e = mid-1;
        }
        else {
            s = mid +1;
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
    
    cout<<binarySearch(arr,n,x);

    return 0;
}