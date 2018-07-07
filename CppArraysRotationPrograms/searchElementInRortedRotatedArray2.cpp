//Search an element in a sorted and rotated array
#include<iostream>
using namespace std;
int searchElement(int arr[],int key,int low,int high)
{
	if(high<low)
		return -1;
	int mid=(low+high)/2;
	if(arr[mid]==key)
		return mid;
	//if a[l]..a[mid-1] is sorted
	if(arr[low]<arr[mid])
	{
		if(key>=arr[low] && key<=arr[mid])
			return searchElement(arr,key,low,mid-1);
			//else
			return searchElement(arr,key,mid+1,high);
	}
		//if a[l]..a[mid-1] is not sorted

	if(key>=arr[mid] && key<=arr[high])
		return searchElement(arr,key,mid+1,high);
	//else
	return searchElement(arr,key,low,mid-1);
}
int main()
{
	int arr[]={4,5,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=4;
	if(searchElement(arr,key,0,n-1)==-1)
		cout<<"Element not found in array"<<endl;
	else
		cout<<"Position of  "<< key <<" is "<<searchElement(arr,key,0,n-1)+1<<endl;
	return 0;
}