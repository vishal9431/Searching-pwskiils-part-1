// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2
#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,0,0,0,1,1};
	int count=0;
	int x=1;
	int n= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			count++;
		}
	}
	cout<<"The number x is present in it "<<count<<endl;
}