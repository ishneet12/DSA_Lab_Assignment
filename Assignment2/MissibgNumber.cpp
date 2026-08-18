#include <iostream>
using namespace std;

int missingNumber(int arr[] , int n){

    int sum = 0;
    int arrSum = 0;

    for(int i=1;i<=n;i++){
        sum+=i;
        arrSum+=arr[i-1];
    }

    return sum-arrSum;
}

int missingNumberLinearSearch(int arr[] , int n){

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1) return i+1;
        
    }
    return -1;
}

int missingNumberBinarySearch(int arr[] , int n){

    int low = 0 , high = n-1;
    
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==mid+1){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low+1;
}


int main(){
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Missing number in the array is : " << missingNumberBinarySearch(arr,n) << endl;
}