#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<string,int>cnt;
  for(auto u:v)
  {
      cnt[u]++;
      if(cnt[u]>1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
  }

}
