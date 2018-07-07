#include<iostream>
using namespace std;

bool pairsum(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1])
			break;
	}
	int l=(i+1);
	int r=i;
	while(l!=r)
	{
		if(arr[l]+arr[r]==x)
			return true;
		if(arr[l]+arr[r]<x)
			//move to the bigger sum side
			l=(l+1)%n;
		else
			//move to the smaller sum side
			r=(l+r-1)%n;
	}
	return false;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=5;
	if(pairsum(arr,n,sum)==true)
		cout<<"Yes a pair with a given sum = "<<sum<<" exist "<<endl;
	else
		cout<<"No a pair with a given sum = "<<sum<<" does not exists"<<endl;
	return 0;
}