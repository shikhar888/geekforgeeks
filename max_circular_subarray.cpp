#include <iostream>
using namespace std;
int kadane(int a[], int n)
{
    int ms=0,cs=0,i;
    for(i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(ms,cs);
    }
    return ms;
}
int max_circular_sum(int a[],int n)
{
    int max1=kadane(a,n);
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        a[i]=-a[i];
    }
    sum=sum+kadane(a,n);
    if(sum>max1)
    {
        return sum;
    }
    else
    {
        return max1;
    }
}
int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout<<"\n"<<max_circular_sum(a,n);
    }
    return 0;
}
