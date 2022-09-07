#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   while(true)
   {
      a++;
      for(int i=1;i<a;i++)
      {
        if(a%i==0 && a==b)
        {
            break;
        }
      }
   }
}