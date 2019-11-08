#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n , temp , neg , pos , i , j=-1;
	cout<<"enter size\n";
	cin>>n;
	int a[n];
	cout<<"enter array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	// all negative numbers on left side
	
	for(i=0;i<n;i++)
	{
		if(a[i] < 0)
		{
			j++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	
	pos = j+1;  // location of 1st positive no. is j+1
	neg = 0;    // location of -ve pos. is 0
	
	while(neg<pos && pos<n && a[neg]<0)
	{
		temp = a[neg];
		a[neg] = a[pos];
		a[pos] = temp;
		neg += 2;
		pos += 1;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
