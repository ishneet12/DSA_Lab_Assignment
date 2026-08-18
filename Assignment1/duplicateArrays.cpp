#include <iostream>
using namespace std;


int duplicateArrays(int arr[] , int n){
    int i=0;
    int j=1;

    while(j<n){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
        j++;
    }
    return i+1;
}
int main(){

    int arr[] = {0,0,1,1,1,2,2,3,3,4} ;

    int n = sizeof(arr)/sizeof(arr[0]);
    
    int m = duplicateArrays(arr, n);

    cout << "the length of the array after removing duplicates is : " << m << endl;
    cout << "the array after removing duplicates is : ";

    for(int i=0;i<m;i++){
        cout << arr[i] << " ";
    }
    return 0;
}