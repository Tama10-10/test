#include<bits/stdc++.h>
using namespace std;
int main()
{int t,n,x;
cin>>t;
while(t--)
{cin>>n>>x;
    vector<int>v(n);
   for(int j=0;j<n;j++)
   {
       cin>>v[j];
   }
   sort(v.begin(),v.end());
   int s=unique(v.begin(),v.end())-v.begin();
    if(s==x)
        cout<<"Good"<<endl;
    else if(s>x)
    cout<<"Average"<<endl;
    else
        cout<<"bad"<<endl;

}
}
