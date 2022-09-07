#include<bits\stdc++.h>
using namespace std;
int main()
{
    string c;
    cin>>c;
    int count=0;
    for(int i=0;i<c.length();i++)
    {
        if(c[i]=='1' ||(c[i]=='1' && c[i]=='4') || (c[i]=='1' && c[i]=='4' && c[i]='4') )
        {
            count++;
        }
        else
        {
            continue;
        }
    }
}
