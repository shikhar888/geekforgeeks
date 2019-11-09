//ROTATION OF 2D MATRIX CLOCKWISE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,c,m,n,pre,cur;
	int l,s;
	cout<<"Enter size of 2D-matrix\n";
	cin>>r>>c;
	l = r; // storing the values
	s = c; // of r and c  
	int a[r][c];  //2D array if size r x c 
	m=0;  //index of 1st row
	n=0;  //index of 1st column
	cout<<"enter the 2D matrix:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"entered matrix is: \n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
	
	while( m<r && n<c )
	{
		//checking for end condition
		if(m+1 == r || n+1 == c)
		{
			break;
		}
		
		pre = a[m+1][n]; //storing previous elements 
		
		// rotating the upper row of matrix
		for(i=n;i<c;i++)
		{
			cur = a[m][i];
			a[m][i] = pre;
			pre = cur;
		}
		m++;     //it shows that upper row is rotated thus no need to get this row again
		
		// rotating last column
		for(i=m;i<r;i++)
		{
			cur = a[i][c-1];
			a[i][c-1] = pre;
			pre = cur;
		} 
		c--;     //last column is rotated
		
		//  rotating last row
		if(m<r)
		{
		    for(i=c-1;i>=n;i--)
		    {
			    cur = a[r-1][i];
			    a[r-1][i] = pre;
			    pre = cur;
		    }
		}
		r--;      //last row is rotated
		
		//  rotating starting column
		if(n<c)
		{
		    for(i=r-1;i>=m;i--)
		    {
			    cur = a[i][n];
			    a[i][n] = pre;
		    	pre = cur;
		    }
		}
		n++;     //starting column is rotated 
	}
	// the rotated matrix is
	cout<<"\nthe rotated matrix is:\n";
	for(i=0;i<l;i++)
	{
		for(j=0;j<s;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
