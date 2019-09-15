#include <iostream>
using namespace std;
int main() {
   char x[50];
   cin>>x;
   int i=0;
   if(x[i]=='9')
   {
       i++;
   } 
   for( ;x[i]!='\0';i++)
   {
       int digit = x[i] - '0';
       if(digit>=5)
       {
           digit=9-digit;
           x[i]=digit+'0';
       }
   }
       cout<<x<<endl;
   return 0;
}
