// implementation of selection sort algorithm...

#include <iostream>
#include <climits>
using namespace std;

void inputArray(int arr[], int n){
    cout<<"Enters the integers in array and press enter after each entry: ";
    for (int i=0; i<n ; i++){
        cin>>arr[i];
    }
}

void outputArray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[] , int n) {
    int min;
    int k;
    for (int i=0;i<n-1;i++){
        min = INT_MAX;
        for (int j=i;j<n;j++){
            if (arr[j]<min){
            min = arr[j];
            k = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[k] = temp;
    }
}

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];

    inputArray(arr,n);
    selectionSort(arr,n);
    outputArray(arr,n);


    return 0;
}