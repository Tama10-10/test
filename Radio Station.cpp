#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
   map<string,string>v;
  for(int i=0;i<n;i++)
  {
      string s1,s2;
      cin>>s1>>s2;
      v[s2]=s1;
  }
  for(int i=0;i<m;i++)
  {
      string s3,s2;
      cin>>s3>>s2;
      s2.erase(s2.end()-1);

    cout<<s3<<" "<<s2<<";"<<" "<<"#"<<v[s2]<<endl;

    }






}
