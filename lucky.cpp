
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     int a[7];
    cin>>t;
    for(int j=1;j<=t;j++)
    {int s1=0,s2=0;
         string s;
         cin>>s;
        for(int i=0;i<6;i++)
        {
            a[i]=s[i]-'0';
        }

         for(int i=0;i<3;i++)
        {
            s1=s1+a[i];
        }
        for(int i=3;i<6;i++)
        {
            s2=s2+a[i];
        }
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
