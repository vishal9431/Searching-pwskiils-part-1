// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes

// Input 2: n = 45
// Output 2: no
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans =n;
	for(int i=0;i<=n/2;i++)
	{
		if(i*i==n)
		{
			ans = i;
		}
	}
	if(ans!=n||n==1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no"<<endl;
	}
}