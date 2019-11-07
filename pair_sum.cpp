#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,x;
	cout<<"Enter size of array\n";
	cin>>n;
	cout<<"Enter sum\n";
	cin>>x;
	int max,min;
	int a[n];
	cout<<"Enter array:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min = 0;
	max = n-1;
	for(i=1;i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			min = i;
			max = i-1;
			break;
		}
	}
	int m;
	while(min != max)
	{
		if(a[min] + a[max] == x)
		{
			cout<<"The pair is : ("<<a[min]<<" , "<<a[max]<<")";
			m=1;
			break;
		}
		if(a[min] + a[max] > x)
		{
			max = (n+max-1) % n;
		}
		else
		{
			min = (min + 1) % n;
		}
	}
	if(m != 1)
	{
		cout<<"Their is no such pair";
	}
	return 0;
}
