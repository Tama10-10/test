#include<bits/stdc++.h>
using namespace std;
int main()
{   int c=0;
    map<int,int>cnt;
    int n;
    cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++)
     {
         cin>>v[i];
     }
     for(auto u:v)
     {
         cnt[u]++;
     }
     for(auto u:cnt)
     {
         if(u.first>u.second)
         c=c+u.second;
         else if(u.first<u.second)
         c=c+(u.second - u.first);


     }
     cout<<c<<endl;

}
