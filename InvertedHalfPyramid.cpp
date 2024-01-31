/* The code will input number of rows from user and print the 
inverted half pyramid according to that 
*/

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i = 0 ; i<rows ; i++){
        for(int j=rows-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}