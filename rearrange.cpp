#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter size\n";
	cin>>n;
	int a[n];
	cout<<"enter array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	i=0;
	j=n-1;
	while(i<=j)
	{
		if(i==j)
		{
			cout<<a[i]<<" ";
		}
		else
		{
			cout<<a[i]<<" "<<a[j]<<" ";
		}
		i++;
		j--;
	}
	return 0;
}
