#include<bits/stdc++.h>
using namespace std;
int main()
{
    char text[100];
    char pat[100];
    int i,j,k=0;
    cin>>text;
    cin>>pat;
    for(i=0;i<strlen(text);i++)
    {
        for(j=0;j<strlen(pat);j++)
        {
            if(text[j+i]!=pat[j])
            {
                break;
            }
        }
        if(j==strlen(pat))
        {
            cout<<"PATTERN IS FOUND AT LOCATION : "<<i<<endl;
            k=1;
        }
    }
    if(k==0)
    {
        cout<<"PATTER NOT FOUND"<<endl;
    }
    return 0;
}
