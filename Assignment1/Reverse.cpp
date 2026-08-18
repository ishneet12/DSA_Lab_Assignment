#include<iostream>
using namespace std;


void reverse(int arr[] , int i , int j){
    while(i<=j){
        // swap 
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,0,n-1);

    cout << "The elements of the array after reversing are :" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

}