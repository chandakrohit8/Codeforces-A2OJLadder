#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
          count++;
        }
    }
    if(count>0)
    {
        cout<<"HARD\n";
    }
    else
    {
    cout<<"EASY\n";
    }
}