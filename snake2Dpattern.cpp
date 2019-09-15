#include<iostream>
using namespace std;
int main() {
	int M,N,i,j;
	cin>>M>>N;
	int a[M][N];
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>a[i][j];
		}
	}
	for(j=0;j<N;j++)
	{
		if(j%2==0)
		{
			for(i=0;i<M;i++)
			{
				cout<<a[i][j]<<", ";
			}
		}
		else
		{
			for(i=M-1;i>=0;i--)
			{
				cout<<a[i][j]<<", ";
			}
		}
	}
	cout<<"END";
	return 0;
}
