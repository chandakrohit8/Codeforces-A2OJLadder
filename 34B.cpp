#include<bits\stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m];
    int sum=0;

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m,greater<int>());
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<abs(sum)<<"\n";
}