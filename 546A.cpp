#include<bits\stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int amount=0;
    for(int i=1;i<=w;i++)
    {
        amount=amount+k*i;
    }
    if(amount>n)
    {
        cout<<amount-n;
    }
    else 
    {
        cout<<"0\n";
    }
}