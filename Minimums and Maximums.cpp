#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(c<=b && d>=a )
           {
               int n = max(a,c);
               cout<<min(n,a+c)<<endl;
           }
        else
            cout<<a+c<<endl;
    }





}
