#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>x>>y;
        if(a<x)
             c=c-(x-a);
       if(b<y)
        c=c-(y-b);
       if(c>=0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }



}
