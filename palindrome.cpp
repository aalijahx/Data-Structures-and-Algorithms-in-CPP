// A program to find whether the entered array of chracters is a palindrome or not

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;

    char arr[n+1];
    cout<<"Enter the array: ";
    cin>>arr;

    //initializing the bool variable
    bool check = 0;

    for (int i=0;i<n;i++){
        if (arr[i] == arr[n-1-i]){
            check = 1;
        }
        else{
            check = 0;
            cout<<"NOT a palindrome!";
            break;
        }
    }
    if (check == 1){
        cout<<"Its a palindrome!";
    }

    return 0;

}