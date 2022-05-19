#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {3,5,1};
     int c=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()/2;i++)
        {
            int d1=v[i+1]-v[i];
            cout<<d1;
            int d2=v[i+2]-v[i+1];
            cout<<d2;
            if(d1==d2)
            c++;
        }
        if(c==v.size())
            cout<<"YES";
        else
            cout<<"NO";





}
