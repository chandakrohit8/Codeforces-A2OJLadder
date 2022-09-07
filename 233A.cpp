#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==1)
    {
        cout<<"-1\n";
    }
    else
    {
       for(int i=1;i<a;i++)
       {
          cout<<i+1<<" "<<i;
       }
       cout<<"\n";
    }
}