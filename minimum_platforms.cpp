#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={900 , 940 , 950 , 1100 , 1500 , 1800};
    int dep[]={910 , 1120 , 1130 , 1200 , 1900 , 2000};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    sort(dep,dep+n);

    int platform = 1 , result = 1;
    int i=1 , j=0;

    while(i<n && j<n)
    {
        if(arr[i] <= dep[j])
        {
            platform++;
            i++;
            if(platform>result)
            {
                result = platform;
            }
        }
        else
        {
            platform--;
            j++;
        }
    }
    cout<<result<<endl;
    return 0;
}
