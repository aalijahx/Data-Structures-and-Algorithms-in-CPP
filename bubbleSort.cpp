// implementation of bubble sort algorithmn O(n^2)...

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

void bubbleSort(int arr[] , int n) {
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
}

int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];

    inputArray(arr,n);
    bubbleSort(arr,n);

    char choice;
    cout<<"Enter y to print the sorted array or any other key to skip: ";
    cin>>choice;
    if (choice == 'y'){
        outputArray(arr,n);
    }



    return 0;
}