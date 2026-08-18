#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                // swap 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main(){
    int arr[] = {5,3,2,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<endl<<"Array before sorting : ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    bubbleSort(arr,n);

    cout<<endl<<"Array after sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }




}