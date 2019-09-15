#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=a[0],r=a[n-1];
    int left[n],right[n];
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(i=1;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
        left[i]=l;
    }
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>r)
        {
            r=a[i];
        }
        right[i]=r;
    }
    for(i=0;i<n;i++)
    {
        cnt=cnt+min(left[i],right[i])-a[i];
    }
    cout<<cnt;
	return 0;
}
