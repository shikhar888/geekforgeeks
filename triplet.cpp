#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,N,target;
	cin>>N;
	int a[N];
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
    sort(a,a+N);
	cin>>target;
	for(i=0;i<N-2;i++)
	{
		for(j=i+1;j<N-1;j++)
		{
            for(k=j+1;k<N;k++)
            {
			    if(a[i]+a[j]+a[k]==target)
			    {
                    if(a[i]<a[j]&&a[i]<a[k])
                    {
                        if(a[j]<a[k])
				        {
                            cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<"\n";
                        }
                        else
                        {
                            cout<<a[i]<<", "<<a[k]<<" and "<<a[j]<<"\n"; 
                        }
                    }
                    else if(a[i]>a[j]&&a[j]<a[k])
                    {
                        if(a[i]<a[k])
				        {
                            cout<<a[j]<<", "<<a[i]<<" and "<<a[k]<<"\n";
                        }
                        else
                        {
                            cout<<a[j]<<", "<<a[k]<<" and "<<a[i]<<"\n"; 
                        }
                    }
                    else
                    {
                        if(a[i]>a[j])
                        {
                            cout<<a[k]<<", "<<a[j]<<" and "<<a[i]<<"\n";
                        }
                        else
                        {
                            cout<<a[k]<<", "<<a[i]<<" and "<<a[j]<<"\n";
                        }
                    }
			    }
            }
		}
	}
	return 0;
}
