#include<iostream>
using namespace std;

int lineraSearch(int arr[],int n,int key)
{
for (int i=0; i<n;i++){
if(arr[i]==key){
    return i;
}
}
return -1;
}

int main(){
    int n, key;

    cout<<"Size if array: "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Give the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Value to find? : "<<endl;
    cin>>key;

    cout<<"The positin of element is : ";
    cout<<lineraSearch(arr, n, key)<<endl;

    return 0;
}