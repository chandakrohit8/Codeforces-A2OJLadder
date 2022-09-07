#include<bits\stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s,c;
    cin>>s;
    int l;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
         c.push_back(s[i]);
        }
    }
    sort(c.begin(),c.end());
    cout<<c[0];
    for(int i=1;i<c.size();i++)
    {
        cout<<"+"<<c[i];
    }
}