#include<bits\stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int min=0;
    if((x1>x3 && x1<x2) ||(x1<x3 && x1>x2) )
    {
        min=x1;
    }
    else if((x2>x3 && x2<x1 ) ||(x2<x3 && x2>x1) )
    {
        min=x2;

    }
    else
    {
        min=x3;
    }
    
    int dis=0;
    if(x1>min ||x1<min)
    {
        dis=dis+abs(x1-min);
    }
    if(x2>min || x2<min)
{
    dis=dis+abs(x2-min);
}
   if(x3>min || x3< min)
   {
       dis=dis+abs(x3-min);
   }

   cout<<dis;

}

