//Search an element in a sorted and rotated array
#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int low,int high)
{
	if(high<low)
		return -1;

	int mid=(high+low)/2;
	if(key==arr[mid])
		return mid;
	if(key<arr[mid])
		return binarySearch(arr,key,low,mid-1);
	
		return binarySearch(arr,key,mid+1,high);
}
int findPivot(int arr[],int low,int high)
{
	if(high<low)
		return -1;
	if(high==low)
		return low;
	int mid=(high+low)/2;
	if(mid<high && arr[mid]>arr[mid+1])
		return mid;
	if(mid>low && arr[mid]<arr[mid-1])
		return (mid-1);
	if(arr[low]>=arr[mid])
		return findPivot(arr,low,mid-1);

		return findPivot(arr,mid+1,high);

}
int piviotBinary(int arr[],int n,int key)
{
	int p=findPivot(arr,0,n-1);
	if(p==-1)
		return binarySearch(arr,key,0,n-1);
	if(arr[p]==key)
		return p;
	if(arr[0]<=key)
		return binarySearch(arr,key,0,p-1);

		return binarySearch(arr,key,p+1,n-1);

}
int main()
{
	int arr[]={4,5,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=4;
	if(piviotBinary(arr,n,key)==-1)
		cout<<"Element not found in array"<<endl;
	else
		cout<<"Position of  "<< key <<" is "<<piviotBinary(arr,n,key)+1<<endl;
	return 0;
}