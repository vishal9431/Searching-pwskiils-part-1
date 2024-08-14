// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2
#include<iostream>
using namespace std;
int main()
{
	int arr[3][4]={{0,0,1,1},{1,1,0,1},{0,0,0,0}};
	int row =sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	int maxi= INT_MIN;
	int idx =-1;
	int x=1;
	for(int i=0;i<row;i++)
	{
		int count =0;
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==x)
			{
				count++;
			}
		}
		if(count>maxi)
		{
            maxi =count;
			idx = i;
		}
	}
	cout<<"Row with the maximum number of 1's is "<<idx+1;
}