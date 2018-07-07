//Program to Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed
#include<iostream>
using namespace std;
int maxSum(int a[],int n)
{
	int arrSum=0;
	int currMax=0;
	for(int i=0;i<n;i++)
	{
		arrSum=arrSum+a[i];
		currMax=currMax+(i*a[i]);
	}
	int max=currMax;
	for(int j=1;j<n;j++)
	{
		currMax=currMax+arrSum-n*a[n-j];
		if(currMax>max)
			max=currMax;
	}
	return max;
}
int main()
{
	int arr[]={10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Max sum of array is "<<maxSum(arr,n)<<endl;
	return 0;
}
