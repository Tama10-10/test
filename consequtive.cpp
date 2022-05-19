#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,c=0,n;
   cin>>t;
    for(int i=1;i<=t;i++)
    {cin>>n;
    int a[n+1];
    int b[n];
for(int j=1;j<=n;j++)
{
    cin>>a[j];
}
 if(n==1)
        cout<<"YES"<<endl;
else if(n==2)
{
    if((a[2]-a[1])>=1&&(a[2]-a[1])<=3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
else
{
for(int j=1;j<n;j++)
{
   b[j] = a[j+1]-a[j];
}
for(int j=1;j<n-1;j++)
{if((b[j]>=1&&b[j]<=3)&&(b[j]!=3&&b[j+1]!=2))
    {c++;
    }

}
if(b[n-1]>=1&&b[n-1]<=3)
    c++;
if(c==n-1)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
c=0;
}

  }

}

