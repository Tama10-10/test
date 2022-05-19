#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {0,0,0,0};
    int c=1,d2=0;
        sort(v.begin(),v.end());

        for(int i=0;i<v.size()-1;i++)
        {
            int d1=v[i+1]-v[i];
            if(d1==d2)
            c++;
            d2=d1;
        }

        if(c>=v.size()-1)
            cout<<"true";
        else
            cout<<"false";





}
