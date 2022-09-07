#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int len=n.length();

    int f=n[0]-'0';
    if(f==9)
    {
        n[0]='9';
    }
    else
    {
          if(f>4)
          {
              n[0]=((9-f)+'0');
          }
    }
    for(int i=1;i<len;i++)
    {
        int a=n[i]-'0';
        if(a>4)
        {
            n[i]=((9-a)+'0');
        }
    }
    cout<<n;

}