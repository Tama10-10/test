#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    string s1,s2;
    cin>>t;
    while(t--)
    {int mn=10000;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {for(int j=i+1;j<n;j++)
        {int s=0;
            s1=v[i];
            s2=v[j];
            for(int k=0;k<m;k++)
            {
                int d=abs(s1[k]-s2[k]);
                s = s+d;

            }
            mn=min(mn,s);

        }

        }
        cout<<mn<<endl;

    }

    }




