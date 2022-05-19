#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    char c;
    cin>>t;
    for(int j=1;j<=t;j++)
    {cin>>n>>k;
    string s;
    cout<<"Case "<<j<<":"<<endl;
      int d=65;
        for(int i=0;i<n;i++)
    { c=d;
        s=s+c;
        d++;
    }
    cout<<s<<endl;
     for(int i=1;i<k;i++)
     {
         bool b=next_permutation(s.begin(),s.end());
         if(b==1)
            cout<<s<<endl;
         else
            break;
     }



}
}
