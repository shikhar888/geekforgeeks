#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,c;
	int a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
