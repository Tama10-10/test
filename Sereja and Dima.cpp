#include<bits/stdc++.h>
using namespace std;
int main()
{int n,s=0,d=0;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<n ;i++)
{
  if(i%2==0)
  {
      if(v[0]>v.back())
      {s=s+v[0];
        v.erase(v.begin());}
        else
        {
            s=s+v.back();
            v.pop_back();

        }

  }
  else
     {
      if(v[0]>v.back())
      {d=d+v[0];
        v.erase(v.begin());}
        else
        {
            d=d+v.back();
            v.pop_back();

        }

  }
}

cout<<s<<endl<<d<<endl;
}
