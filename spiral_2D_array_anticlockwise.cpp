#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int M,N;
    cin>>M>>N;
    int a[M][N];
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    int r1=0,c1=0,r2=M-1,c2=N-1;
    while(r1<=r2 && c1<=c2)
    {
        for(i=r1;i<=r2;i++)
        {
            cout<<a[i][c1]<<", ";
        }
        c1++;
        for(i=c1;i<=c2;i++)
        {
            cout<<a[r2][i]<<", ";
        }
        r2--;
        for(i=r2;i>=r1;i--)
        {
            cout<<a[i][c2]<<", ";
        }
        c2--;
        for(i=c2;i>=c1;i--)
        {
            cout<<a[r1][i]<<", ";
        }
        r1++;
    }
    cout<<"END";
    return 0;
}
