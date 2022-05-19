#include<bits/stdc++.h>
using namespace std;
int main()
{int t,a,b;
set<int>s;
cin>>t;
for(int i=1;i<=t;i++)
{
    cin>>a>>b;
    if(a==1)
        s.insert(b);
    else if(a==2)
        s.erase(b);
    else
    {
        if(s.count(b)==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
}








