#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int k;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        arr[k]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}