#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }else if (arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"What should be the size of array? : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of  array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Value you want to search: "<<endl;
    cin>>key;

    cout<<"Element is at position: "<<endl;
    cout<<binarySearch(arr,n,key)<<endl;

    return 0;
}