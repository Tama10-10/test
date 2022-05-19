#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int j=1;j<=t;j++)
    {int c=0,k=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=n-2;i>=0;i++)
        {   while(a[i]>a[i+1])
        {
            if(a[i]>a[i+1])
            {
               a[i]=a[i]/2;
               c++;
            }
            else
                {if(a[i]==0 && i>0)
                    k=0;
                    break;}
        }
        if(k==0)
            break;



        }
        if(k==0)
            cout<<"-1"<<endl;
        else
        cout<<c<<endl;
    }
}

