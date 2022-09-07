#include<bits\stdc++.h>
using namespace std;
int main()
{
   int l,b;
   cin>>l>>b;
   int res=0;
   while(b>=l)
   {
       l=l*3;
       b=b*2;
       res++;
       if(l>b)
       {
           break;
       }
       

   }
 
   cout<<res;
}