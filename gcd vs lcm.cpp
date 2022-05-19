#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {cin>>a>>b;
        if(a==0)
            cout<<"1"<<endl;
        else
        {
            int s=(a*1+b*2)+1;
            cout<<s<<endl;
        }
    }



}
