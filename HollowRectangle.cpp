/* the program will input number of rows and columns from user 
 and print a rectangle acording to that number of rows and columns */


#include <iostream>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;

    for (int i = 0 ; i<rows ; i++){
        for(int j=0;j<columns;j++){
            /* this condition is for printing only the boundries of the rectangle
            i.e a Hollow Rectangle of given rows and columns */
            if (i==0 || j==0 || i==rows-1 || j==columns-1) {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}