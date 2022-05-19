#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&p1,pair<int,int>&p2)
{
    if(p1.first>p2.first)
        return 1;
        else if(p1.first == p2.first)
            return (p1.second<p2.second);
    else
        return 0;
}
int main()
{int n,k;
int c=0;
  cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }

sort(v.begin(),v.end(),cmp);
for(auto u:v)
{
    if (u==v[k-1])
        c++;
}

cout<<c<<endl;

}
