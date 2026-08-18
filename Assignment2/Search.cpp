#include <iostream>
using namespace std;

void linearSearch(int arr[] , int n ,int k){
    bool flag =false;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            flag = true;
            cout<<endl<<"LinearSearch"<<endl;
            cout<<"Element fount at index : " << i << endl;
            break;
        }
    }

    if(!flag) cout<<endl<<"Element not found"<<endl ;
}

void binarySearch(int arr[] , int n ,int k){
    int low = 0 , high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==k){
            flag = true;
            cout<<endl<<"BinarySearch"<<endl;
            cout<<"Element fount at index : " << mid << endl;
            break;
        }
        else if(arr[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    if(!flag) cout<<endl<<"Element not found"<<endl ;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the element to search : " <<endl;

    cin>>k;

    linearSearch(arr,n,k);

    binarySearch(arr,n,k);
}