// Spiral Order Matrix Traversal (2D arrays)

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the no. of rows of the matrix: ";
    cin>>n;
    cout<<"Enter the no. of columns of the matrix: ";
    cin>>m;
    int arr[n][m];

// Taking 2D array input from user
    cout<<"Enter the elements of the array (press enter after each entry): ";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

// Printing 2D array in the form of a Matrix
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;

// Spiral Order Matrix Traversal
    int rowStart = 0;
    int rowEnd = n-1;
    int colStart = 0;
    int colEnd = m-1;

    while (rowStart<=rowEnd && colStart<=colEnd) {

        for (int col = colStart;col<=colEnd;col++){
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;
        for (int row = rowStart;row<=rowEnd;row++){
            cout<<arr[row][colEnd]<<" ";
        }
        colEnd--;
        for (int col = colEnd;col>=colStart;col--){
            cout<<arr[rowEnd][col]<<" ";
        }
        rowEnd--;
        for (int row = rowEnd;row>=rowStart;row--){
            cout<<arr[row][colStart]<<" ";
        }
        colStart++;
    }

    return 0;
}