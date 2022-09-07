#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    int count=0;
    vector<int> v;
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            count++;
            pos=i;
        }
    }
    if(count>1)
    {
        cout<<"Still Rozdil\n";
    }
    else if(count==1)
    {
        cout<<pos<<"\n";
    }
  
   
    

}