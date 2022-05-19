#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,s=0;
    cin>>n>>m>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;

     }
     sort(v.rbegin(),v.rend());
    /* for(auto u:v)
   {
       cout<<u.first<<" "<<u.second<<endl;
   }*/
     for(int i=0;i<n;i++)
    {
        if(v[i].first==v[i+1].first)
        {
            if(v[i].second<=v[i+1].second)
                {v.erase(v.begin()+i+1);
                n--;}
            else
                {v.erase(v.begin()+i);
                n--;}


        }

     }
   for(auto u:v)
   {
       cout<<u.first<<" "<<u.second<<endl;
   }




   /* for(int i=0;i<v.size();i++)
    {if(s<k)
    s=s+v[i].second;
    }
    if(s>k)
        cout<<k<<endl;
    else
        cout<<s<<endl;*/

}
