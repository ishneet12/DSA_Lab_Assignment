#include <iostream>
using namespace std;

void rotateArrayLeft(int arr[],int n , int k){
    cout<< "Array before rotating left by " << k << " positions is : ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    k = k%n;

    int temp[k];
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }

    cout<< "Array after rotating left by " << k << " positions is : ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void rotateArrayRight(int arr[],int n , int k){
    cout<< "Array before rotating right by " << k << " positions is : ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    k = k%n;

    int temp[k];
    for(int i=0;i<n;i++){
        temp[(i-k+n)%n] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }

    cout<< "Array after rotating right by " << k << " positions is : ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
   // rotateArrayLeft(arr, n, k);
    cout << endl;
    rotateArrayRight(arr,n,k);

}