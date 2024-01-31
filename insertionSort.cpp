// implementation of insertion sort algorithmn O(n^2)...

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

void insertionSort(int arr[] , int n) {
    for (int i=1;i<n;i++){
        int key = arr[i];
        int j = i -1;
        while (key < arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= key;
    }
}

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];

    inputArray(arr,n);
    insertionSort(arr,n);

    char choice;
    cout<<"Enter y to print the sorted array or any other key to skip: ";
    cin>>choice;
    if (choice == 'y'){
        outputArray(arr,n);
    }



    return 0;
}