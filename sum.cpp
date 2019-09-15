#include<iostream>
using namespace std;
int main()
 {
	int i,j,N,target;
	cin>>N;
	int a[N];
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	cin>>target;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]+a[j]==target)
			{
				if(a[i]<a[j])
				   cout<<a[i]<<" and "<<a[j]<<"\n";
				else
				   cout<<a[j]<<" and "<<a[i]<<"\n";
			}
		}
	}
	return 0;
}
