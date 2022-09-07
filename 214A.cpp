#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m;
    int cnt=0;
    for(int a=0;a<n;a++)
    {
        b=n-a*a;
        if(a+(b*b)==m)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";

}