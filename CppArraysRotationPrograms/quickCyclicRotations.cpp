//An efficent approach to find the rotations of an array;
#include<iostream>
using namespace std;
void quickCyclicRotate(int a[],int n,int k)
{
	for(int i=k;i<k+n;i++)
		cout<<a[i%n]<<" ";
	cout<<endl;
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	quickCyclicRotate(a,n,1);
	quickCyclicRotate(a,n,2);
	quickCyclicRotate(a,n,3);
	quickCyclicRotate(a,n,4);

	quickCyclicRotate(a,n,5);
	quickCyclicRotate(a,n,6);
	return 0;
}