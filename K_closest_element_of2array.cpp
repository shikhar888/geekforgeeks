#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int i,m,n,x;
    cin>> m >> n >> x;
    int a1[m],a2[n];
    for(i=0;i<m;i++)
    {
        cin>>a1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>a2[i];
    }
    int l=0,r=n-1,l1,r1;
    int diff = INT_MAX;
    while(l!=r)
    {
        if(abs(a1[l] + a2[r] -x) < diff)
        {
            l1 = l;
            r1=r;
            diff=abs(a1[l]+a2[r]-x);
        }
        if(a1[l]+a2[r] > x)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout<<"closest elements are "<<a1[l1]<<"  and  "<<a2[r1];
    return 0;
}
