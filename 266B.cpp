#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    string a;
    char temp;
    for(int i=0;i<t;i++)
    {
       for(int j=0;j<n;j++)
       {
         if(s[j]=='B' && s[j+1]=='G')
         {
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
            j++;
         }
        
       }
    }
  cout<<s<<"\n";
}