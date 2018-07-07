
//Reversal algorithm for array rotation

//function to rotate(arr[], d, n) that rotates arr[] of size n by d elements.

#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void rotateArray(int a[],int d,int n)
{
	reverseArray(a,0,d-1);
	reverseArray(a,d,n-1);
	reverseArray(a,0,n-1);
}
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
		cout<<endl;
	}
}
int minElement(int arr[],int n)
{
	int i,pos;
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1])
			pos=i+1;
	}
	return pos;
}
int main()
{
	int a[]={1,2,3,4,5};
	int n,d;
	n=sizeof(a)/sizeof(a[0]);
	d=3;
	//reverseArray(a,0,n-1);
	rotateArray(a,d,n);
	printArray(a,n);
	int pos;
	pos=minElement(a,n);
	cout<<"The minimum element in our array is "<<a[pos]<<endl;
	return 0;
}