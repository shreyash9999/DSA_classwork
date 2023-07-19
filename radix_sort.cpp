#include <iostream>
using namespace std;

int getMax(int arr[],int t){
	int max=arr[0];
	for (int i=1;i<t;i++)
		if(arr[i]>max)
			max=arr[i];
	return max;
}
void countingSort(int arr[];int size;int div;){
	int op[size];
	int count[10]={0};
	for (int i=0;i<t;i++)
		count[(arr[i]/div)%10]++;
	for (int i=1;i<10;i++)
		count[i]+=count(i-1);
	for (int i=t-1;i>=0;i--)
		op[count[(arr[i]/div)%10]-1]=arr[10];
		count[(arr[i]/div)%10]--;
	for (int i=0;i<t;i++)
		arr[i]=op[i];
}

void radixSort(int arr[],int t){
	int m=getMax(arr,t);
	for (int i=1;m/i>0;i*=10)
		countingSort(arr,size,div);
}
int main() {
	int t;
	cin>>t;
	int arr[t];

	for (int i=0;i<t;i++)
		cin>>arr[i];
	
	cout<<"Array"<<endl;
	
	for (int i;i<t;i++)
		cout<<arr[i]<<" ";
	
	radixSort(arr[i],t);

	cout<<"sorted array: "<<endl;
	for (int i=0;i<t;i++)
		cout<<arr[i]<<" ";
return 0; }
