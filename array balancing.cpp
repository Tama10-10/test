#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,y,s1=0,s2=0,s,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        vector<long long int>a(n);
        vector<long long int>b(n);
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
         for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        if(n==1)
            cout<<a[0]+b[0]<<endl;
        else
        {
        for(int j=0;j<n-1;j++)
        {int d1= abs(a[j+1]-a[j]);
            int  d3=abs(a[j]-b[j+1]);
            if(d1>d3)
             swap(a[j+1],b[j+1]);


        }

       for(int j=0;j<n-1;j++)
       {s1=s1+abs(a[j]-a[j+1]);
           s2=s2+abs(b[j]-b[j+1]);

           //cout<<a[j]<<endl;
            // cout<<b[j]<<endl;
       }
       s=s1+s2;
       cout<<s<<endl;
       s1=0;
       s2=0;

    }}
}
