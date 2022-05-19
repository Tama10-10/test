#include<bits/stdc++.h>
using namespace std;
int main()
{int t,n,c=0;
cin>>t;
while(t--)
{
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   /* for(int i=0; ;i++)
    {
        bool b=next_permutation(v.begin(),v.end());
        if(b==1)
            c++;
            else
                break;
    }
    cout<<c<<endl;
    c=0;*/
    next_permutation(v.begin(),v.end());
    for(auto u:v)
    {
        cout<<u<<" ";
    }

}




}
