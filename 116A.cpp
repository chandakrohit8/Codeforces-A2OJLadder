#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int total=0;
    int max=0;
    while(t--)
    {
        int ex,en;
        cin>>ex>>en;
        total=total-ex;
        total=total+en;
        if(total>max)
        {
            max=total;
        }
        
    }
    cout<<max;
}