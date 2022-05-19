#include<bits/stdc++.h>
using namespace std;
int main()
{ int t,n,m;
    cin>>t;
   for(int i=1;i<=t;i++)
   {int c=0;
       cin>>n>>m;
       vector<pair<int,int>>v(m);
       for(int j=0;j<m;j++)
       {
           cin>>v[j].first>>v[j].second;
       }
        for(int j=0;j<m;j++)
       {
           if(v[j]==v[j+1])
            c++;
       }
       if(c==0)
        cout<<"Scenario #"<<i<<": possible"<<endl;
         else
         cout<<"Scenario #"<<i<<": impossible"<<endl;


   }




}
