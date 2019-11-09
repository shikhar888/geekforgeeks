#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int i,j,cs,sum=12;
    int a[5];
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cs=a[i];
        for(j=i+1;j<=5;j++)
        {
            if(cs==sum)
            {
                if(i!=j-1)
                {
                    cout<<"subrarray from index "<<i<<" to index "<<j-1<<" has sum equal to "<<sum; 
                    return 0; 
                }
                else
                {
                    cout<<"index "<<i<<" has the value "<<sum;
                    return 0;
                }
            }
            if(j==5 || cs>sum)
            {
                break;
            }
            cs = cs + a[j]; 
        }
    }
    cout<<"subarray with sum "<<sum<<" is not present ";
    return 0;
}
