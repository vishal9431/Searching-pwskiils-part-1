// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,3,4,4,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x=4;
	int st =-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			st=i;
		}
		else if(arr[i]>x)
		{
			break;
		}
	}
	cout<<"Answer is "<<st<<" ";
}
