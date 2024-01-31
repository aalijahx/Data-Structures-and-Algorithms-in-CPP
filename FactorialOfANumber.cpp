#include <iostream>
using namespace std;

int fact(int num){
    int factorial = 1;
    for (int i = 2 ; i <=num ; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;
    cout<<"Enter the number to find its  factorial: ";
    cin>>n;

    cout<<fact(n);
    return 0;
}