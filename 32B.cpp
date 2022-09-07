#include<bits\stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string c="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
                c[i]='0';
            
        }
        else
        {
            if(s[i+1]='-')
            {
                c[i]='2';
            }
            else
            {
                c[i]='1';
            }
        }

    }
    cout<<c<<"\n";
}