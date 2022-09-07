#include<bits\stdc++.h>
using namespace std;
int main()
{
     int n,m,t;
     cin>>n>>m;
     int intital=1;
         long long time=0;
     for(int i=0;i<m;i++)
     {
        cin>>t;
        if(t>=intital)
        {
            time+=t-intital;
        }
        else
        {
            time+=n-(intital-t);
        }
        intital=t;
     }
     cout<<time<<"\n";
}