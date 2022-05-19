#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<long long,int>cnt;
    for(auto u:a )
    {
        cnt[u]++;
    }
    int maxfreq=0;
    for(auto u:cnt)
    {
        maxfreq=max(maxfreq,u.second);
    }
    cout<<maxfreq<<endl;
}

