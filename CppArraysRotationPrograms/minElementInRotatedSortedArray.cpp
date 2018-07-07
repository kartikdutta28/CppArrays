// C++ program for reversal algorithm
// of array rotation
#include <iostream>
using namespace std;
int minElement(int arr[],int n)
{
	int i,pos;
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[(i+1)])
			pos=i+1;
	}
	return pos;
}

int main()
{
	int a[]={4,5,1,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	int pos;
	pos=minElement(a,n);
	cout<<"The minimum element in our array is "<<a[pos]<<endl;
	return 0;

}
