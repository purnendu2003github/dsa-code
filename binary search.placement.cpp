#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int element)
{
	int low,mid,high;
	low=0;
	high=arr[n-1];
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		else if(arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int element=6;
	int searchingIndex=binarysearch(arr,n,element);
	cout<<"the searching elemnt %d is present in the index %d:"<<element<<endl<<searchingIndex;
	return 0;
}