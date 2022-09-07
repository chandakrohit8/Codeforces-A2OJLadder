#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    int count=0;
    while(t--)
    {
        string s;
        cin>>s;
       if(s=="Icosahedron")
       {
           count=count+20;
       }
       else if(s=="Cube")
       {
           count=count+6;
       }
       else if(s=="Dodecahedron")
       {
           count=count+12;
       }
       else if(s=="Tetrahedron")
       {
           count=count+4;
       }
       else if(s=="Octahedron")
       {
           count=count+8;
       }

    }
    cout<<count;
}