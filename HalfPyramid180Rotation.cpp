/* the code will input the number of rows from user and 
will output a half pyramid with 180 degree rotation
*/

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for (int i = 0 ; i<rows ; i++){
        for(int j=rows-i;j>0;j--){
            cout<<"  ";
        }
        for(int j=rows;j>=rows-i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}