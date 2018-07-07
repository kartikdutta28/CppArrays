//Program to cyclically rotate an array by one
#include<iostream>
using namespace std;
void cyclicRotateByOne(int arr[],int n)
{
	int temp;
	temp=arr[n-1];
	for(int i=n-1;i>0;i--)
		arr[i]=arr[i-1];
	arr[0]=temp;
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cyclicRotateByOne(arr,n);
	printArray(arr,n);
	return 0;
}