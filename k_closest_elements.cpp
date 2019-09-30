#include <bits/stdc++.h>
using namespace std;

int find_number(int a[1000] , int n , int x)
{
    int start = 0;
    int end = n-1;
    int mid;
    while(start!=end)
    {
        mid = (start+end)/2;
        if(a[mid]==x)
        { 
            return mid;
        }
        if(a[mid]<=x && a[mid+1]>x)
        {
            return mid;
        }
        else if(a[mid] > x)
        {
            end=mid-1;
        }
        else if(a[mid]<x)
        {
            start = mid+1;
        }
    }
}

int main()
{
    int n,i,x,k;  //n = size of array   x = no. nearest to which other no.s is to be searched  k = total no.s to b searched
    cin>>n>>k>>x;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int y = find_number(a,n,x);
    i=y+1;
    while((y>0 || i<n) && k>0)
    {
        if(a[y]==x)
        {
            y--;
            if( abs(a[y]-x) < abs(a[i]-x) )
            {
                cout<<a[y]<<"  ";
                y--;
                k--;
            }
            else if( abs(a[y]-x) > abs(a[i]-x) )
            {
                cout<<a[i]<<"  ";
                i++;
                k--;
            }
            else
            {
                cout<<a[y]<<"  "<<a[i]<<"  ";
                k=k-2;
            }
        }
        else
        {
            if( abs(a[y]-x) < abs(a[i]-x) )
            {
                cout<<a[y]<<"  ";
                y--;
                k--;
            }
            else if( abs(a[y]-x) > abs(a[i]-x) )
            {
                cout<<a[i]<<"  ";
                i++;
                k--;
            }
            else
            {
                cout<<a[y]<<"  "<<a[i]<<"  ";
                k=k-2;
            }
        }
    }
    return 0;
}
