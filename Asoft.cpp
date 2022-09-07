#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int min=0;

int amount=(k*l/nl);
int lime=c*d;
int salt=p/np;
if(amount<lime && amount<salt)
{
    min=amount;
}
else if(lime<amount && lime<salt)
{
    min=lime;
}
else
{
    min=salt;
}

cout<<min/n;
return 0;

}