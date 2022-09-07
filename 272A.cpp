#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s+=a;
    }
    int p=(s%(n+1));
    int cnt=0;
    for(int i=1;i<=5;i++)
    {
        p+=1;
        if(p>n+1)
        {
            p=1;
        }
        else if(p!=1)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}