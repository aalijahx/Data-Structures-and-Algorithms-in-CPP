/*
The program inputs the numbers of rows (n) of the half part 
of pattern from user and prints Butterfly Pattern based on that
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n for butterfly pattern: ";
    cin>>n;

    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"* ";
        }
        for (int j=0;j<n*2-i*2-2;j++){
            cout<<"  ";
        }
        for (int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for (int i=n-1;i>=0;i--){
        for (int j=0;j<=i;j++){
            cout<<"* ";
        }
        for (int j=0;j<n*2-i*2-2;j++){
            cout<<"  ";
        }
        for (int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}