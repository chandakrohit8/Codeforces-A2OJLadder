#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[7];
    int sum=0,pos=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<7;i++)
    {
        sum+=a[i];
        if(sum==n)
        {
            pos=i;
            break;

        }
    }
    cout<<pos+1<<"\n";
}