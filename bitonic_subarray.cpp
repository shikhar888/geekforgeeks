#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t,i,j,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int left=1;
        int inc[n];
        inc[0]=left;
        for(j=1;j<n;j++)
        {
            if(a[j]<a[j-1])
            {
                left =1;
                inc[j]=left;
            }
            else
            {
                left++;
                inc[j]=left;
            }
        }
        int right=1;
        int dec[n];
        dec[n-1]=right;
        for(j=n-2;j>=0;j--)
        {
            if(a[j]>a[j+1])
            {
                right++;
                dec[j]=right;
            }
            else
            {
                right = 1;
                dec[j]=right;
            }
        }
        int max=inc[0]+dec[0]-1;
        for(j=1;j<n;j++)
        {
            if((inc[j]+dec[j]-1)>max)
            {
                max=(inc[j]+dec[j]-1);
            }
        }
        cout<<max<<"\n";
    }
	return 0;
}
