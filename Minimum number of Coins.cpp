#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int notes[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(notes)/sizeof(notes[0]);

    vector<int>tn;

    int i,x;
    cin>>x;
    for(i=n-1;i>=0;i--)
    {
        while(x>=notes[i])
        {
            x = x - notes[i];
            tn.push_back(notes[i]);
        }
    }
    for(i=0;i<tn.size();i++)
    {
        cout<<tn[i]<<"  ";
    }
    return 0;
}
