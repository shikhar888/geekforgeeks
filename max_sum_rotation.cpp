#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,x,sum=0;
	cout<<"Enter the size\n";
	cin>>n;
	int a[n];
	cout<<"Enter the array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
			x = i;
		}
	}
	if(x==n-1)
	{
		for(i=0;i<n;i++)
		{
			sum = sum + ( i * a[i] );
		}
	}
	else
	{
	    i=x+1;
	    while(i!=x)
	    {
		    if(i>x)
		    {
	 	        sum = sum + ((i-(x+1))* a[i]);
	 	    }
	 	    else
	 	    {
	 		    sum = sum + ((i+(x+1))* a[i]);
		    }
 		    i = (i +1)%n ;
	    }
	    sum = sum + ((i+(x+1))* a[i]);
    }
    cout<<" max sum is: "<<sum;
    return 0;
}
