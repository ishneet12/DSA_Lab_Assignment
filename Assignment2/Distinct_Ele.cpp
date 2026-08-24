#include<iostream>
using namespace std;

int Distinct_Ele(int arr[] , int n){
    sort(arr, arr + n);

    int i=0;
    int j=1;
    int cnt = 1;
    while(j<n){
        if(arr[i]!=arr[j]){
            i++;
            swap(arr[i],arr[j]);
            cnt++;
        }
        j++;
    }

    return cnt;
}

int main(){
    int arr[] = {2,33,7,4,5,5,6,6};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<Distinct_Ele(arr,n);
}