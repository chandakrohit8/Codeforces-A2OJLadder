#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n1);
    sort(b,b+n2,greater<int>());
    int ans1=n1*(n1+1)/2;
    int ans2=n2*(n2+1)/2;
    cout<<ans1<<" "<<ans2<<"\n";
    
}