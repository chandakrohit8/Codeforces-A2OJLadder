#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float a[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    float b=sum/n;
    cout<<fixed<<setprecision(12)<<b<<"\n";
    


}