// A program that finds the largest word in a sentence and prints that largest word and its length

#include <iostream>
using namespace std;

int main(){

    int n = 0;
    cout<<"Enter the length of the array: ";
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cout<<"Enter the array: ";
    cin.getline(arr,n);

    int i = 0;
    int currentLen = 0;
    int maxLen = 0;

    int st = 0;
    int maxst = 0;
    while(i<n){
        
        if(arr[i]==' ' || arr[i]=='\0'){
            if (currentLen > maxLen){
                maxLen = currentLen;
                maxst = st ;
            }
            currentLen = 0;
          
        }
        else{
        currentLen++;
        }
        if (arr[i] == '\0'){
            break;
        }
        st = i - currentLen  + 1 ;
        i++;

    }
    cout<<"The max lenght of any word in the given sentence is: "<<maxLen<<endl;
    cout<<"The largest word in the given sentence is: ";
    for (int i=0 ; i<maxLen ; i++){
        cout<<arr[i+maxst];
    }

    return 0;

}