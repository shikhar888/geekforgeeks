#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int N,i,j;
    cin>>N;
    int a[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    j=N-1;
    while(j>=0)
    {
        for(i=0;i<N;i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        j--;
    }
	return 0;
}
