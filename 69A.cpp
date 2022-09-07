#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 int a,b,c,xsum=0,ysum=0,zsum=0;
    while(n--)
    {
      cin>>a>>b>>c;
      xsum+=a;
      ysum+=b;
      zsum+=c;
    }
    if(xsum==0 && ysum==0 && zsum==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"No\n";
    }
    
}