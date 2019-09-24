#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int qx,qy;         //queens row and col
    cin>>qx>>qy;
    int d1,d2,d3,d4;   //for all 4 diagonals
    int r1,r2;         //for vertical distance
    int c1,c2;         //horizontal distance
    int ox[k],oy[k];   //obstacle x and y pos.

    d1 = min( qx-1 , qy-1 );
    d2 = min( qx-1 , n-qy );
    d3 = min( n-qx , n-qy );
    d4 = min( n-qx , qy-1 );
    r1 = qx-1;
    r2 = n-qx;
    c1 = qy-1;
    c2 = n-qy;
    

    for(i=0;i<k;i++)
    {
        cin>>ox[i]>>oy[i];
        if( (qx > ox[i]) && (qy > oy[i]) && (qx-ox[i] == qy-oy[i]) )
        {
            d1 = min(d1 , (qx-ox[i]-1));
        }
        else if( (qx > ox[i]) && (oy[i] > qy) && (qx-ox[i] == oy[i]-qy) )
        {
            d2 = min(d2 , (qx-ox[i]-1));
        }
        else if( (ox[i] > qx) && (oy[i] > qy) && (ox[i]-qx == oy[i]-qy) )
        {
            d3 = min(d3 , (ox[i]-qx-1));
        }
        else if( (ox[i] > qx) && (qy > oy[i]) && (ox[i]-qx == qy-oy[i]) )
        {
            d4 = min(d4 , (ox[i]-qx-1));
        }
        else if( (qx == ox[i]) && (qy > oy[i]) )
        {
            c1 = min(c1 , (qy-oy[i]-1));
        }
        else if( (qx == ox[i]) && (oy[i] > qy) )
        {
            c2 = min(c2 , (oy[i]-qy-1));
        }
        else if( (qy == oy[i]) && (qx > ox[i]) )
        {
            r1 = min(r1 , (qx-ox[i]-1));
        }
        else if( (qy == oy[i]) && (ox[i] > qx) )
        {
            r2 = min(r2 , (ox[i]-qx-1));
        }
    }
    cout<<(d1+d2+d3+d4+r1+r2+c1+c2);
    return 0;
}
